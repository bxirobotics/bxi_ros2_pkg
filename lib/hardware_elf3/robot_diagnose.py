#!/usr/bin/env python3
"""Central, observational diagnostics. No motor commands or protection actions."""
import json
import math
import time
from dataclasses import dataclass, replace

INFO, WARNING, ERROR, EMERGENCY = range(4)
PRIORITIES = ("info", "warning", "error", "emergency")
# condition: (priority, type, problem). Problem 0 is reserved; active=False recovers.
CONDITIONS = {
    "FPGA_NOT_FOUND": (ERROR, 1, 1),
    "HW_INIT_FAILED": (ERROR, 1, 2),
    "HW_NO_DATA": (ERROR, 1, 3),
    "RESET_SERVICE_MISSING": (ERROR, 1, 4),
    "UNKNOWN_HW_ERROR": (ERROR, 1, 5),
    "FEEDBACK_TIMEOUT": (ERROR, 2, 1),
    "COMMAND_TIMEOUT": (ERROR, 2, 2),
    "OVER_POSITION": (EMERGENCY, 2, 3),
    "OVER_VELOCITY": (ERROR, 2, 4),
    "OVER_TORQUE": (EMERGENCY, 2, 5),
    "SAFE_MODE": (EMERGENCY, 2, 6),
    "ERROR_LATCHED": (EMERGENCY, 2, 7),
    "MOTOR_ERROR_CODE": (ERROR, 2, 8),
    "MOTOR_UNDER_VOLTAGE": (ERROR, 2, 9),
    "MOTOR_OVER_VOLTAGE": (ERROR, 2, 10),
    "MOTOR_ENCODER_ERROR": (ERROR, 2, 11),
    "MOTOR_OVER_SPEED": (ERROR, 2, 12),
    "MOTOR_ERROR_STATE": (ERROR, 2, 13),
    "MOTOR_CONTROL_ERROR": (EMERGENCY, 2, 14),
    "FEEDBACK_INVALID": (ERROR, 2, 15),
    "COMMAND_INVALID": (ERROR, 2, 16),
    "ACTUATOR_NO_DATA": (ERROR, 2, 17),
    "ACTUATOR_COMMAND_NO_DATA": (ERROR, 2, 18),
    "FEEDBACK_STAMP_ERROR": (ERROR, 2, 19),
    "COMMAND_STAMP_ERROR": (ERROR, 2, 20),
    "CAN_RX_ERROR": (ERROR, 3, 1),
    "CAN_TX_ERROR": (ERROR, 3, 2),
    "CAN_RX_DROP": (ERROR, 3, 3),
    "CAN_TX_DROP": (ERROR, 3, 4),
    "IMU_OPEN_FAILED": (ERROR, 4, 1),
    "IMU_READ_ERROR": (ERROR, 4, 2),
    "IMU_FRAME_ERROR": (ERROR, 4, 3),
    "IMU_NO_DATA": (ERROR, 4, 4),
    "IMU_INVALID": (ERROR, 4, 5),
    "IMU_PROTECTION": (EMERGENCY, 4, 6),
    "IMU_STAMP_ERROR": (ERROR, 4, 7),
    "REMOTE_NO_DATA": (ERROR, 5, 1),
    "REMOTE_NOT_READY": (ERROR, 5, 2),
    "REMOTE_COMMAND_INVALID": (ERROR, 5, 3),
    "CAMERA_NO_DATA": (WARNING, 6, 1),
    "CAMERA_STREAM_TIMEOUT": (WARNING, 6, 2),
    "CAMERA_INFO_INVALID": (WARNING, 6, 3),
    "BATTERY_NO_DATA": (WARNING, 7, 1),
    "BATTERY_INVALID": (WARNING, 7, 2),
    "EXAMPLE_NO_DATA": (ERROR, 8, 1),
    "EXAMPLE_STATUS_INVALID": (ERROR, 8, 2),
    "CONTROL_FATAL": (EMERGENCY, 8, 3),
    "CONTROL_STALLED": (EMERGENCY, 8, 4),
    "EXAMPLE_INIT_FAILED": (ERROR, 8, 5),
    "RESET_FAILED": (ERROR, 8, 6),
    "MAINTENANCE_FAILED": (WARNING, 8, 7),
    "ATTITUDE_PROTECTION": (EMERGENCY, 8, 8),
    "MOD_ERROR": (WARNING, 9, 1),
    "MOD_WARNING": (WARNING, 9, 2),
    "RESOURCE_ERROR": (ERROR, 9, 3),
    "NODE_ERROR": (ERROR, 9, 4),
    "NODE_RESTARTING": (WARNING, 9, 5),
    "CONTROL_BUDGET_OVERRUN": (WARNING, 10, 1),
    "CONTROL_DEADLINE_MISS": (WARNING, 10, 2),
    "CONTROL_PERIOD_SKIPPED": (WARNING, 10, 3),
}


def encode(priority, kind, state):
    if not (0 <= priority <= 3 and 1 <= kind <= 127 and 0 <= state <= 31):
        raise ValueError("invalid diagnostic priority/type/state")
    return (priority << 14) | (kind << 5) | state


@dataclass(frozen=True)
class Event:
    name: str
    condition: str
    priority: int
    kind: int
    state: int
    message: str
    active: bool = True

    @property
    def code(self):
        return encode(self.priority, self.kind, self.state)


class RobotDiagnose:
    """Pure state machine; callers supply monotonic time and publish each event."""
    def __init__(self, emit, now=time.monotonic, startup_grace=15.0):
        self.emit, self.now = emit, now
        if not math.isfinite(startup_grace) or startup_grace < 0:
            raise ValueError("startup grace must be finite and nonnegative")
        self.started = now()
        self.startup_grace = startup_grace
        self.active = {}
        self.watches = {}
        self.hardware_active = set()
        self.counters = {}
        self.progress = None
        self.progress_at = self.started
        self.runtime_keys = set()
        self.stamps = {}

    def set(self, scope, condition, active, message=""):
        name = scope.rstrip("/") + "/" + condition
        old = self.active.get(name)
        if active:
            priority, kind, state = CONDITIONS[condition]
            event = Event(name, condition, priority, kind, state, message)
            self.active[name] = event
            # Text and cumulative counter changes alone do not change state.
            if (old is None or (old.priority, old.kind, old.state) != (priority, kind, state)
                    or (condition == "MOTOR_ERROR_CODE" and old.message != message)):
                self.emit(event)
        elif old is not None:
            del self.active[name]
            self.emit(replace(old, active=False))
        return name

    def watch(self, scope, condition, timeout, startup_grace=None):
        if not math.isfinite(timeout) or timeout <= 0:
            raise ValueError("timeout must be finite and positive")
        grace = self.startup_grace if startup_grace is None else startup_grace
        self.watches[scope] = [condition, timeout, None, self.now() + grace]

    def touch(self, scope):
        condition = self.watches[scope][0]
        self.watches[scope][2] = self.now()
        self.set(scope, condition, False)

    def tick(self):
        now = self.now()
        for scope, (condition, timeout, last, deadline) in self.watches.items():
            expired = (now > deadline if last is None
                       else now - last > timeout)
            self.set(scope, condition, expired, f"No data: timeout={timeout:g}s")

    def stamp(self, scope, condition, stamp_ns, ros_now_ns, timeout):
        previous = self.stamps.get(scope, 0)
        self.stamps[scope] = stamp_ns
        invalid = (stamp_ns <= 0 or stamp_ns < previous
                   or abs(ros_now_ns - stamp_ns) > timeout * 1e9)
        self.set(scope, condition, invalid, "Missing, reversed, stale or future timestamp")

    def hardware(self, facts, snapshot):
        present = set()
        for name, active, message in facts:
            scope, _, condition = name.rpartition("/")
            if condition not in CONDITIONS:
                scope, condition = name, "UNKNOWN_HW_ERROR"
            if condition == "MOTOR_ERROR_CODE" and active:
                try:
                    active = int(message.split(":", 1)[1].strip(), 16) != 0
                except (IndexError, ValueError):
                    pass
            key = self.set(scope, condition, active, message)
            if active:
                present.add(key)
                self.hardware_active.add(key)
            else:
                self.hardware_active.discard(key)
        if snapshot:
            for key in self.hardware_active - present:
                scope, condition = key.rsplit("/", 1)
                self.set(scope, condition, False)
            self.hardware_active = present

    def runtime(self, info):
        if not isinstance(info, dict):
            raise ValueError("example status must be an object")
        timing = info.get("control_timing", {})
        if not isinstance(timing, dict):
            raise ValueError("control_timing must be an object")
        cycles = timing.get("total_cycles")
        if not isinstance(cycles, int) or isinstance(cycles, bool) or cycles < 0:
            raise ValueError("control_timing.total_cycles must be a nonnegative integer")
        keys = set()

        def issue(scope, condition, active, message=""):
            key = self.set(scope, condition, active, str(message))
            if active:
                keys.add(key)

        issue("example", "IMU_PROTECTION", bool(info.get("imu_protection_latched")))
        issue("example", "MAINTENANCE_FAILED", bool(info.get("maintenance_error")), info.get("maintenance_error", ""))
        issue("example", "CONTROL_FATAL", bool(timing.get("fatal_error")), timing.get("fatal_error", ""))
        progress = timing.get("total_cycles", info.get("loop_count"))
        if progress is not None:
            if progress != self.progress:
                self.progress, self.progress_at = progress, self.now()
            issue("example", "CONTROL_STALLED", self.now() - self.started > self.startup_grace and self.now() - self.progress_at > 1.0,
                  "Control cycle counter stopped advancing")
        for field, condition in (
            ("total_budget_overruns", "CONTROL_BUDGET_OVERRUN"),
            ("total_deadline_misses", "CONTROL_DEADLINE_MISS"),
            ("total_skipped_periods", "CONTROL_PERIOD_SKIPPED"),
        ):
            count = timing.get(field, 0)
            previous, last_change = self.counters.get(field, (None, None))
            if previous is not None and count > previous:
                last_change = self.now()
            elif previous is not None and count < previous:
                last_change = None
            self.counters[field] = (count, last_change)
            # A cumulative total is history; only new increments signal a current problem.
            recent = last_change is not None and self.now() - last_change < 1.0
            issue("example", condition, recent, f"{field}={count}")
        for mod in info.get("mods", []):
            scope = "example/mod/" + str(mod["id"])
            issue(scope, "MOD_ERROR", mod.get("status") == "unavailable" or bool(mod.get("error")), mod.get("error"))
            issue(scope, "MOD_WARNING", bool(mod.get("warnings")), mod.get("warnings"))
        preparing = info.get("preparing") or {}
        for resource in preparing.get("resources", []):
            issue("example/resource/" + str(resource["id"]), "RESOURCE_ERROR",
                  resource.get("status") in ("failed", "error") or bool(resource.get("error")), resource.get("error"))
        for node in info.get("nodes", []):
            scope = "example/node/" + str(node["id"])
            issue(scope, "NODE_ERROR", node.get("status") in ("unavailable", "faulted") or bool(node.get("error")), node.get("error"))
            issue(scope, "NODE_RESTARTING", node.get("status") == "restarting", "Child process restarting")
        for key in self.runtime_keys - keys:
            scope, condition = key.rsplit("/", 1)
            self.set(scope, condition, False)
        self.runtime_keys = keys


def valid_joint_message(message, command=False):
    names = message.actuators_name if command else message.name
    fields = ("kp", "pos", "kd", "vel", "torque") if command else ("position", "velocity", "effort")
    return (bool(names) and len(set(names)) == len(names) and all(names)
            and all(len(getattr(message, field)) == len(names)
                    and all(math.isfinite(value) for value in getattr(message, field))
                    for field in fields)
            and (not command or all(value >= 0 for value in (*message.kp, *message.kd))))


def main(args=None):
    import rclpy
    from rclpy.node import Node
    from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy, qos_profile_sensor_data
    from diagnostic_msgs.msg import DiagnosticArray
    from sensor_msgs.msg import Imu, CameraInfo
    from std_msgs.msg import Bool, String
    from communication.msg import ActuatorStates, ActuatorCmds, BatteryStates, MotionCommands, DiagnosticEvent

    class DiagnoseNode(Node):
        def __init__(self):
            super().__init__("robot_diagnose")
            parameter = lambda name, default: self.declare_parameter(name, default).value
            prefix = "/" + str(parameter("topic_prefix", "hardware")).strip("/")
            self.prefix = prefix
            self.publisher = self.create_publisher(
                DiagnosticEvent, prefix + "/diagnostics", QoSProfile(depth=100, reliability=ReliabilityPolicy.RELIABLE,
                    durability=DurabilityPolicy.TRANSIENT_LOCAL))
            self.published_active = set()
            self.engine = RobotDiagnose(self.emit, startup_grace=float(parameter("startup_grace_sec", 15.0)))
            self.example = bool(parameter("check_example", False))
            self.camera = bool(parameter("check_camera", False))
            self.camera_started = time.monotonic()
            self.images = {}
            self.remote_was_ready = False
            self.subscriptions_ = []
            self.reset_service = prefix + "/robot_reset"
            self.engine.watch("hardware", "HW_NO_DATA", 1.0)
            self.subscribe(DiagnosticArray, prefix + "/diagnostic_input", self.on_hardware, 100)
            if bool(parameter("check_motors", True)):
                self.engine.watch("hardware/actuator", "ACTUATOR_NO_DATA", 0.1)
                self.subscribe(ActuatorStates, prefix + "/actuator_states", self.on_joints)
            if bool(parameter("check_imu", True)):
                self.imu_timeout = float(parameter("imu_timeout_sec", 0.1))
                self.engine.watch("hardware/imu", "IMU_NO_DATA", self.imu_timeout)
                self.subscribe(Imu, prefix + "/imu_data", self.on_imu)
            if bool(parameter("check_battery", False)):
                self.engine.watch("hardware/battery", "BATTERY_NO_DATA", 3.0)
                self.subscribe(BatteryStates, str(parameter("battery_topic", "/battery_states")), self.on_battery)
            if self.example:
                self.engine.watch("example/commands", "ACTUATOR_COMMAND_NO_DATA", 1.0)
                self.subscribe(ActuatorCmds, prefix + "/actuators_cmds", lambda msg: self.on_joints(msg, True))
                self.subscribe(String, prefix + "/example_diagnostic_input", self.on_example_fact, 100)
                if bool(parameter("check_runtime_status", True)):
                    self.engine.watch("example/status", "EXAMPLE_NO_DATA", 2.0)
                    self.subscribe(String, prefix + "/state_machine_info", self.on_runtime, 10)
                if bool(parameter("check_remote", True)):
                    self.engine.watch("remote", "REMOTE_NO_DATA", 1.0)
                    self.subscribe(Bool, "/remote_controller/input_ready", self.on_remote, 10)
                    self.subscribe(MotionCommands, "/motion_commands", self.on_motion)
            self.image_type = CameraInfo
            self.sensor_qos = qos_profile_sensor_data
            self.timer = self.create_timer(0.05, self.check)

        def subscribe(self, kind, topic, callback, qos=None):
            self.subscriptions_.append(self.create_subscription(kind, topic, callback, qos or qos_profile_sensor_data))

        def emit(self, event):
            source = event.name.rsplit("/", 1)[0].strip("/")
            key = (source, event.code)
            if event.active != (key in self.published_active):
                self.publisher.publish(DiagnosticEvent(source=source, code=event.code, active=event.active))
                if event.active:
                    self.published_active.add(key)
                else:
                    self.published_active.discard(key)
            # Raw motor codes and error details stay in logs, outside the compact wire message.
            self.get_logger().info(
                f"source={source} code=0x{event.code:04X} active={event.active} "
                f"{PRIORITIES[event.priority]} {event.name}: {event.message}")

        def on_hardware(self, message):
            self.engine.touch("hardware")
            self.engine.hardware([(status.name, status.level != status.OK, status.message)
                                  for status in message.status], message.header.frame_id == "snapshot")

        def on_joints(self, message, command=False):
            scope = "example/commands" if command else "hardware/actuator"
            self.engine.touch(scope)
            self.engine.set(scope, "COMMAND_INVALID" if command else "FEEDBACK_INVALID",
                            not valid_joint_message(message, command), "Empty, duplicate, mismatched or non-finite joint data / invalid gains")
            stamp = message.header.stamp
            self.engine.stamp(scope, "COMMAND_STAMP_ERROR" if command else "FEEDBACK_STAMP_ERROR",
                              stamp.sec * 1000000000 + stamp.nanosec, self.get_clock().now().nanoseconds, 1.0 if command else 0.1)

        def on_imu(self, message):
            self.engine.touch("hardware/imu")
            q, w, a = message.orientation, message.angular_velocity, message.linear_acceleration
            values = (q.x, q.y, q.z, q.w, w.x, w.y, w.z, a.x, a.y, a.z)
            valid = all(math.isfinite(value) for value in values) and abs(sum(value * value for value in values[:4]) - 1.0) < 0.1
            self.engine.set("hardware/imu", "IMU_INVALID", not valid, "Non-finite IMU or non-unit quaternion")
            stamp = message.header.stamp
            self.engine.stamp("hardware/imu", "IMU_STAMP_ERROR", stamp.sec * 1000000000 + stamp.nanosec,
                              self.get_clock().now().nanoseconds, self.imu_timeout)

        def on_remote(self, message):
            self.engine.touch("remote")
            self.remote_was_ready |= message.data
            expired = time.monotonic() - self.engine.started > self.engine.startup_grace
            self.engine.set("remote", "REMOTE_NOT_READY", not message.data and (self.remote_was_ready or expired), "InputDeviceManager has no ready input device")

        def on_motion(self, message):
            v = message.vel_des
            self.engine.set("remote", "REMOTE_COMMAND_INVALID", not all(math.isfinite(x) for x in (v.x, v.y, v.z, message.yawdot_des, message.height_des)), "Non-finite motion command")

        def on_battery(self, message):
            self.engine.touch("hardware/battery")
            valid = all(math.isfinite(value) for value in (message.voltage, message.current, message.soc)) and message.voltage > 0 and 0 <= message.soc <= 100
            self.engine.set("hardware/battery", "BATTERY_INVALID", not valid, "Invalid voltage/current/SOC")

        def on_runtime(self, message):
            self.engine.touch("example/status")
            try:
                self.engine.runtime(json.loads(message.data))
            except (ValueError, TypeError, KeyError, AttributeError) as error:
                self.engine.set("example", "EXAMPLE_STATUS_INVALID", True, str(error))
            else:
                self.engine.set("example", "EXAMPLE_STATUS_INVALID", False)

        def on_example_fact(self, message):
            try:
                fact = json.loads(message.data)
                condition = fact["condition"]
                if condition not in ("CONTROL_FATAL", "EXAMPLE_INIT_FAILED", "RESET_FAILED", "ATTITUDE_PROTECTION"):
                    raise ValueError("unsupported example fact")
                self.engine.set("example", condition, bool(fact.get("active", True)), str(fact.get("message", "")))
            except (ValueError, TypeError, KeyError) as error:
                self.engine.set("example", "EXAMPLE_STATUS_INVALID", True, str(error))

        def on_image(self, topic, message):
            self.engine.touch(topic)
            valid = message.width > 0 and message.height > 0 and all(math.isfinite(x) for x in (*message.k, *message.d))
            self.engine.set(topic, "CAMERA_INFO_INVALID", not valid, "Invalid frame dimensions or non-finite calibration")
            if valid:
                self.camera_started = time.monotonic()

        def check(self):
            self.engine.tick()
            if self.example and time.monotonic() - self.engine.started > self.engine.startup_grace:
                services = dict(self.get_service_names_and_types())
                self.engine.set("hardware", "RESET_SERVICE_MISSING", self.reset_service not in services, "robot_reset service unavailable")
            if self.camera:
                for topic, types in self.get_topic_names_and_types():
                    if topic.startswith(self.prefix + "/") and "sensor_msgs/msg/CameraInfo" in types and topic not in self.images:
                        self.engine.watch(topic, "CAMERA_STREAM_TIMEOUT", 3.0, startup_grace=3.0)
                        self.images[topic] = self.create_subscription(self.image_type, topic, lambda msg, topic=topic: self.on_image(topic, msg), self.sensor_qos)
                timeout = self.engine.startup_grace if not self.images else 3.0
                self.engine.set("camera", "CAMERA_NO_DATA", time.monotonic() - self.camera_started > timeout, "No camera frame metadata received")

    rclpy.init(args=args)
    node = DiagnoseNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()


if __name__ == "__main__":
    main()
