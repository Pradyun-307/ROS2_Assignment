from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='rover',
            executable='pub1',       # from setup.py
            name='publisher_node',
            output = 'screen'
        ),
        Node(
            package='rover',
            executable='pub2',       # from setup.py
            name='processor_node',
            output ='screen'
        ),
        Node(
            package='rover',
            executable='sub',   # from setup.py
            name='subscriber_node',
            output ='screen'
        )
    ])
