import rclpy
from rclpy.node import Node
import random
from std_msgs.msg import Float32MultiArray

class PublisherNode(Node):
    def __init__(self):
        super().__init__('publisher_node')
        self.publisher_ =          self.create_publisher(Float32MultiArray, 'Random', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)  # 1 Hz

    def timer_callback(self):
        message = Float32MultiArray()
        message.data = [random.uniform(-20,80),random.uniform(0,100)]
        self.publisher_.publish(message)
def main(args=None):
    rclpy.init(args=args)
    node = PublisherNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
