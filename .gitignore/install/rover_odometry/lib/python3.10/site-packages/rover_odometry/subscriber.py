import rclpy
from rclpy.node import Node
from mars_msgs.msg import RoverOdometry
import math
class SubscriberNode(Node):
    def __init__(self):
        super().__init__('subscriber_node')
        self.x=0.0
        self.y=0.0
        self.subscription = self.create_subscription(
            RoverOdometry,
            'odometry_data',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.x += msg.linear_velocity.linear.x*math.cos(msg.orientation)- msg.linear_velocity.linear.y*math.sin(msg.orientation)
        self.y += msg.linear_velocity.linear.y*math.cos(msg.orientation)+ msg.linear_velocity.linear.x*math.sin(msg.orientation)
        self.get_logger().info(f'Received odometry data: Rover ID: {msg.rover_id}, Orientation: {msg.orientation}, Linear Velocity: ({msg.linear_velocity.linear.x}, {msg.linear_velocity.linear.y}), Angular Velocity: ({msg.angular_velocity})')
        self.get_logger().info(f'Updated Position: x={self.x}, y={self.y}')
def main(args=None):
    rclpy.init(args=args)
    node = SubscriberNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
