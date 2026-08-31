# External wrench interface

The simulator provides the ROS 2 service
`/simulation/apply_external_wrench` with type
`communication/srv/ApplyExternalWrench`.

An `APPLY` request takes effect on the next simulation step. Force is expressed
in newtons and torque in newton-metres when the loaded MJCF model uses SI units.
Duration is measured in MuJoCo simulation time, so it does not elapse while the
simulation is paused.

## Coordinate frames

- `WORLD_FRAME`: `wrench` and `application_point` use world coordinates.
- `BODY_FRAME`: vectors use the current body orientation and the application
  point is relative to the body-frame origin.
- When `at_center_of_mass` is true, `application_point` is ignored.

The target is a MuJoCo body name, not a geom, joint, or ROS TF frame.

## Lifetime

- A non-persistent zero-duration request acts for one complete simulation step.
- A positive duration is quantized to complete simulation steps.
- A persistent wrench remains active until `CLEAR` or `CLEAR_ALL`.
- Simulation reset, model reload, keyframe loading, and history scrubbing clear
  all external-wrench commands.
- `APPLY` replaces an active command with the same `wrench_id`.

## Example

Apply a 100 N world-X force to the center of body `base` for 0.2 simulation
seconds:

```bash
ros2 service call /simulation/apply_external_wrench \
  communication/srv/ApplyExternalWrench \
  "{operation: 0, wrench_id: push_01, body_name: base, reference_frame: 0, \
    at_center_of_mass: true, \
    wrench: {force: {x: 100.0, y: 0.0, z: 0.0}, \
             torque: {x: 0.0, y: 0.0, z: 0.0}}, \
    persistent: false, duration: {sec: 0, nanosec: 200000000}}"
```

Clear a persistent command:

```bash
ros2 service call /simulation/apply_external_wrench \
  communication/srv/ApplyExternalWrench \
  "{operation: 1, wrench_id: wind}"
```

The simulator currently fixes the floating base during startup and after an
actuator-command timeout. A wrench on the base will not produce visible base
motion until the existing robot-reset workflow releases it.
