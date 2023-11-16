#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include <rclcpp/rclcpp.hpp>
#include <kdl_parser/kdl_parser.hpp>
#include "std_msgs/msg/string.hpp"
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





class KDL_publisher : public rclcpp::Node
{
  public:
    KDL_publisher()
    : Node("kdl_publisher"), count_(0)
    {
      publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
      

    //   timer_ = this->create_wall_timer(
    //   500ms, std::bind(&KDL_publisher::timer_callback, this));
    }

  private:
    // void timer_callback()
    // {
    //   auto message = std_msgs::msg::String();
    //   message.data = "Hello, world! " + std::to_string(count_++);
    //   RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    //   publisher_->publish(message);
    // }

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

        

        //create chain
        KDL::Chain kdl_chain;
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


        Eigen::Matrix<double,6,1> L;
        L(0)=1; L(1) = 1; L(2) = 1;
	      L(3)=0.01;L(4)=0.01;L(5)=0.01;

        KDL::ChainIkSolverPos_LMA solver(kdl_chain);

        
	      int n = kdl_chain.getNrOfJoints();
        KDL::JntArray q_(n);
        KDL::JntArray q_init(n);
        KDL::JntArray q_sol(n);

        KDL::Frame pos_goal;
        
        q_.data.setRandom();
        fksolver.JntToCart(q_, pos_goal);

        std::cout << "q:" << q_<<std::endl;

        int retval;

        double x , y, z;

        std::cout << "Enter x positions: ";
        std::cin >> x;

        std::cout << "Enter y position: ";
        std::cin >> y;

        std::cout << "Enter z position: ";
        std::cin >> z;
        

        pos_goal.M = KDL::Rotation::RPY( 0.0, 0.0, 0.0);
        pos_goal.p = KDL::Vector( x, y, z);
        retval = solver.CartToJnt(q_init, pos_goal,q_sol);

        
        std::cout << "pos_goal:" << pos_goal <<std::endl;
        std::cout << "q sol:" << q_sol <<std::endl;
        RCLCPP_INFO(this->get_logger(), "Done");


    }



    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
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

