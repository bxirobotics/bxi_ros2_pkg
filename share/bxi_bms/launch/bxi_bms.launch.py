from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    return LaunchDescription(
        [
            Node(
                package="bxi_bms",
                executable="bxi_bms",
                name="battery_bms",
                output="screen",
                emulate_tty=True,
            ),
        ]
    )
