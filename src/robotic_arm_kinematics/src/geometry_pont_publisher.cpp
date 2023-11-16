#include <chrono>
#include <functional>
#include <memory>
#include <string>


#include <rclcpp/rclcpp.hpp>
#include "std_msgs/msg/string.hpp"
#include <geometry_msgs/msg/point.hpp>

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node
{
  public:
    MinimalPublisher()
    : Node("minimal_publisher"), count_(0)
    {
      publisher_ = this->create_publisher<geometry_msgs::msg::Point>("topic", 10);
      timer_ = this->create_wall_timer(
      1000ms, std::bind(&MinimalPublisher::timer_callback, this));
    }

  private:
    void timer_callback()
    {
      //auto message = std_msgs::msg::String();
      auto message = geometry_msgs::msg::Point();
      message.x = 0.0;
      message.y = -0.1;
      message.z = 0.1;
      RCLCPP_INFO(this->get_logger(), "Publishing: '%f', '%f', '%f'", message.x, message.y, message.z);
      publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geometry_msgs::msg::Point>::SharedPtr publisher_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}