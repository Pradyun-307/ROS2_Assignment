import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float32MultiArray
class SubscriberNode(Node):
    def __init__(self):
        super().__init__('subscriber_node')
        self.subscription = self.create_subscription(
            Float32MultiArray,
            'Random',
            self.listener_callback1,
            10
        )
        self.subscription2 = self.create_subscription(
            String,
            'health_status',
            self.listener_callback2,
            10
        )
        self.subscription

    def listener_callback2(self, msg):
        self.get_logger().info(f"Health: {msg.data}")
    def listener_callback1(self, msg):
    	self.get_logger().info(f"Temperature:{msg.data[0]}\n")
    	self.get_logger().info(f"battery_level:{msg.data[1]}\n")
def main(args=None):
    rclpy.init(args=args)
    node = SubscriberNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
