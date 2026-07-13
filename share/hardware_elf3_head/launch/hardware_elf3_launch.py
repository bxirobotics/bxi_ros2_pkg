import os
from ament_index_python.packages import get_package_share_path
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():

    return LaunchDescription(
        [
            Node(
                package="hardware_elf3",
                executable="hardware_elf3",
                name="hardware_elf3_head",
                output="screen",
                parameters=[
                    {"hardware_config/imu": True},      #start imu
                    {"hardware_config/motor_pwr": True}, #motor poweron
                    {"hardware_config/motor_disable": 0x0}, #motor disable none
                ],
                emulate_tty=True,
                arguments=[("__log_level:=debug")],
            ),
        ]
    )
