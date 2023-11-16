cmake_minimum_required(VERSION 3.8)
project(robotic_arm_kinematics)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rclcpp REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(kdl_parser REQUIRED)
find_package(urdf REQUIRED)
find_package(urdfdom REQUIRED)
find_package(orocos_kdl_vendor REQUIRED)
find_package(robotic_arm_description REQUIRED)
find_package(geometry_msgs REQUIRED)


add_executable(ros_arm_kdl src/robotic_arm_kdl.cpp)
ament_target_dependencies(ros_arm_kdl rclcpp std_msgs ament_index_cpp kdl_parser urdf urdfdom orocos_kdl_vendor geometry_msgs)

add_executable(geometry_pont_publisher src/geometry_pont_publisher.cpp)
ament_target_dependencies(geometry_pont_publisher rclcpp geometry_msgs std_msgs)

add_executable(geometry_point_subscriber src/geometry_point_subscriber.cpp)
ament_target_dependencies(geometry_point_subscriber rclcpp geometry_msgs)



install(
  TARGETS
  ros_arm_kdl
  DESTINATION lib/${PROJECT_NAME}
)

install(
  TARGETS
  geometry_pont_publisher
  DESTINATION lib/${PROJECT_NAME}
)

install(
  TARGETS
  geometry_point_subscriber
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()
