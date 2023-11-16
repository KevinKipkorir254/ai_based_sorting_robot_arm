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

add_executable(kinematics_node src/kinematics_node.cpp)
ament_target_dependencies(kinematics_node rclcpp trajectory_msgs builtin_interfaces)

add_executable(ros_arm_kdl src/robotic_arm_kdl.cpp)
ament_target_dependencies(ros_arm_kdl rclcpp std_msgs ament_index_cpp kdl_parser urdf urdfdom orocos_kdl_vendor)



install(
  TARGETS
  kinematics_node
  DESTINATION lib/${PROJECT_NAME}
)


install(
  TARGETS
  ros_arm_kdl
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
