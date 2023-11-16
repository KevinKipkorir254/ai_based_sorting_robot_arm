#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include <rclcpp/rclcpp.hpp>
#include <kdl_parser/kdl_parser.hpp>
#include "std_msgs/msg/string.hpp"
#include <std_msgs/msg/float32_multi_array.hpp>
#include <geometry_msgs/msg/point.hpp>
#include <ament_index_cpp/get_package_share_directory.hpp>
#include <urdf_parser/urdf_parser.h>
#include <kdl/frames_io.hpp>
#include <kdl/kinfam_io.hpp>

#include <kdl/chainfksolverpos_recursive.hpp>
#include <kdl/chainidsolver_recursive_newton_euler.hpp>
#include <kdl/chainiksolverpos_lma.hpp>
// C++program to demonstrate cout
#include <iostream>
#include <typeinfo>

using std::placeholders::_1;




class KDL_publisher : public rclcpp::Node
{
  public:
    KDL_publisher()
    : Node("kdl_publisher"), count_(0)
    {
      publisher_ = this->create_publisher<std_msgs::msg::Float32MultiArray>("result", 10);
      subscription_ = this->create_subscription<geometry_msgs::msg::Point>(
      "topic", 10, std::bind(&KDL_publisher::compute_ik_and_publish, this, _1));
      build_tree();
   
    }

  private:

    void build_tree()
    {     
   
        // Specify the name of the ROS package you want to find
        std::string package_name = "robotic_arm_description";


        // Use rospkg's getPrefix() function to get the package path
        std::string package_path = ament_index_cpp::get_package_share_directory(package_name);
        package_path.append("/urdf/robotic_arm_kdl_.urdf");

        //print the file
       RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", package_path.c_str());

       //use the code for the path
        using namespace std::chrono_literals;
        KDL::Tree my_tree;
        urdf::ModelInterfaceSharedPtr my_urdf_model = urdf::parseURDFFile(package_path);

        if (my_urdf_model)
        {
                std::cout << "Number of joints: "<< my_urdf_model->joints_.size() <<std::endl;
                std::cout << "Number of links: " << my_urdf_model->links_.size() <<std::endl;
        }

        urdf::ModelInterface model = *my_urdf_model;
        
        
        RCLCPP_INFO(this->get_logger(), "Start creating tree");
        if ( !kdl_parser::treeFromUrdfModel( model, my_tree))
        {
          RCLCPP_INFO(this->get_logger(), "failed to parse urdf robot model");
        }
        else
        {
          RCLCPP_INFO(this->get_logger(), "Tree created succesfully");
        }

        if (!my_tree.getChain("world", "tool_0", kdl_chain))
        {
            RCLCPP_INFO(this->get_logger(), "Failed to get a chain");
        }
        else 
        {
            RCLCPP_INFO(this->get_logger(), "Now we have a chain");
        }

        RCLCPP_INFO(this->get_logger(), "Number of joints: %d", kdl_chain.getNrOfJoints());
        RCLCPP_INFO(this->get_logger(), "Number of segments: %d", kdl_chain.getNrOfSegments());
        KDL::JntArray q(kdl_chain.getNrOfJoints());
        KDL::JntArray qdot(kdl_chain.getNrOfJoints());
        KDL::JntArray qdotdot(kdl_chain.getNrOfJoints());
        KDL::JntArray tau(kdl_chain.getNrOfJoints());
        KDL::Wrenches f(kdl_chain.getNrOfSegments());

        KDL::ChainFkSolverPos_recursive fksolver(kdl_chain);
        KDL::Frame T;

        fksolver.JntToCart(q, T);

        std::cout << "q:" << q <<std::endl;
        std::cout << "Pose: "<< T <<std::endl;


        KDL::ChainIkSolverPos_LMA solver(kdl_chain);

        
	      int n = kdl_chain.getNrOfJoints();
        KDL::JntArray q_(n);
        KDL::JntArray q_init(n);
        KDL::JntArray q_sol(n);

        
        q_.data.setRandom();
        fksolver.JntToCart(q_, pos_goal);

        std::cout << "q:" << q_<<std::endl;

    }

    void compute_ik_and_publish(const geometry_msgs::msg::Point &point)
    {
              
	      int n = kdl_chain.getNrOfJoints();
        auto msg = std_msgs::msg::Float32MultiArray();
        KDL::JntArray q_(n);
        KDL::JntArray q_init(n);
        KDL::JntArray q_sol(n);
      
        KDL::ChainIkSolverPos_LMA solver(kdl_chain);
        pos_goal.M = KDL::Rotation::RPY( 0.0, 0.0, 0.0);
        pos_goal.p = KDL::Vector( point.x, point.y, point.z);
        retval = solver.CartToJnt(q_init, pos_goal,q_sol);
        msg.data = {(float)q_sol(0), (float)q_sol(1), (float)q_sol(2), (float)q_sol(3)};
        publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Done");
      
    }


    
    KDL::Chain kdl_chain;
    KDL::Frame pos_goal;
    int retval;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr publisher_;
    rclcpp::Subscription<geometry_msgs::msg::Point>::SharedPtr subscription_;
    size_t count_;
};

//Driver Code
int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<KDL_publisher>();
  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(node);
  executor.spin();
  //rclcpp::spin(std::make_shared<KDL_publisher>());
  rclcpp::shutdown();
  return 0;
}

