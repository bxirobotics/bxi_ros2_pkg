from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package="hardware_elf3",
                executable="hardware_elf3",
                name="hardware_canfd",
                output="screen",
                emulate_tty=True,
                parameters=[
                    {"hardware_config/imu": False},      #start imu
                    {"hardware_config/motor_pwr": False}, #motor poweron
                    {"hardware_config/motor_disable": 0x0}, #motor disable none
                ],
                arguments=[("__log_level:=debug")],
            ),
        ]
    )
