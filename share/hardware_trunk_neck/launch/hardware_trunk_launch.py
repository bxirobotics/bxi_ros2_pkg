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
                package="hardware_trunk_neck",
                executable="hardware_trunk_neck",
                name="hardware_trunk_neck",
                output="screen",
                parameters=[
                    # {"simulation/model_file": xml_file},
                ],
                emulate_tty=True,
                arguments=[("__log_level:=debug")],
            ),
        ]
    )
