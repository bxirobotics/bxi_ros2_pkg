from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package="hardware_canfd",
                executable="hardware_canfd",
                name="hardware_canfd",
                output="screen",
                emulate_tty=True,
                arguments=[("__log_level:=debug")],
            ),
        ]
    )
