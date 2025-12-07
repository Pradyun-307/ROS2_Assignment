from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='rover_odometry',
            executable='publisher',       # from setup.py
            name='publisher_node',
            output = 'screen'
        ),
        Node(
            package='rover_odometry',
            executable='subscriber',       # from setup.py
            name='subscriber_node',
            output ='screen'
        )
    ])
