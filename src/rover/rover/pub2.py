import rclpy
from rclpy.node import Node
import random
from std_msgs.msg import Float32MultiArray
from std_msgs.msg import String

class ProcessorNode(Node):
    def __init__(self):
        super().__init__('processor_node')
        self.subscription = self.create_subscription(
            Float32MultiArray,
            'Random',
            self.listener_callback,
            10
        )
        self.publisher_ = self.create_publisher(String, 'health_status', 10)
    def listener_callback(self, msg): 
        if msg.data[1] <5:
        	message = "Critical"
        elif msg.data[1] < 20:
        	message = "Warning"  
        else :
        	message = "Healthy"
        self.publisher_.publish(String(data=message))
def main(args=None):
    rclpy.init(args=args)
    node = ProcessorNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
