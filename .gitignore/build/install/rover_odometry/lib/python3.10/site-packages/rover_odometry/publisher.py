import rclpy
from rclpy.node import Node
from mars_msgs.msg import RoverOdometry
import random
class PublisherNode(Node):
    def __init__(self):
        super().__init__('publisher_node')
        self.publisher_ = self.create_publisher(RoverOdometry, 'odometry_data', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)  # 1 Hz
        self.orientation = random.uniform(-3.14, 3.14)

    def timer_callback(self):
        self.orientation += 0.01  # Simulate change in orientation
        message = RoverOdometry()
        message.rover_id = 4
        message.orientation = self.orientation 
        message.linear_velocity.linear.x =random.uniform(0, 5)
        message.linear_velocity.linear.y =random.uniform(0, 5)
        message.angular_velocity =random.uniform(0, 1)
        self.publisher_.publish(message)
 
def main(args=None):
    rclpy.init(args=args)
    node = PublisherNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
