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
                name="hardware_elf3",
                output="screen",
                parameters=[
                    {"hardware_config/imu": True},      #start imu
                    {"hardware_config/motor_pwr": True}, #motor power on
                    {"hardware_config/motor_disable": 0x60000000}, #motor disable head
                    {"hardware_config/parallel_joint": True}, #Converting parallel joints to serial joints
                ],
                emulate_tty=True,
                arguments=[("__log_level:=debug")],
            ),
        ]
    )
