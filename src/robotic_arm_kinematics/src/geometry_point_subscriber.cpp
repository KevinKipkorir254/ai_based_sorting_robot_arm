#include <chrono>
#include <functional>
#include <memory>
#include <string>


#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/point.hpp>

using std::placeholders::_1;

class MinimalSubscriber : public rclcpp::Node
{
  public:
    MinimalSubscriber()
    : Node("minimal_subscriber")
    {
      subscription_ = this->create_subscription<geometry_msgs::msg::Point>(
      "topic", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
    }

  private:
    void topic_callback(const geometry_msgs::msg::Point &point) const
    {
      RCLCPP_INFO(this->get_logger(), "I heard: '%f', '%f', '%f'", point.x, point.y, point.z);
    }
    rclcpp::Subscription<geometry_msgs::msg::Point>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}