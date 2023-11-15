// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotic_arm_msgs:msg/JointAngles.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__BUILDER_HPP_
#define ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotic_arm_msgs/msg/detail/joint_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotic_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_JointAngles_link2_gripper_base_joint
{
public:
  explicit Init_JointAngles_link2_gripper_base_joint(::robotic_arm_msgs::msg::JointAngles & msg)
  : msg_(msg)
  {}
  ::robotic_arm_msgs::msg::JointAngles link2_gripper_base_joint(::robotic_arm_msgs::msg::JointAngles::_link2_gripper_base_joint_type arg)
  {
    msg_.link2_gripper_base_joint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotic_arm_msgs::msg::JointAngles msg_;
};

class Init_JointAngles_link1_link2_joint
{
public:
  explicit Init_JointAngles_link1_link2_joint(::robotic_arm_msgs::msg::JointAngles & msg)
  : msg_(msg)
  {}
  Init_JointAngles_link2_gripper_base_joint link1_link2_joint(::robotic_arm_msgs::msg::JointAngles::_link1_link2_joint_type arg)
  {
    msg_.link1_link2_joint = std::move(arg);
    return Init_JointAngles_link2_gripper_base_joint(msg_);
  }

private:
  ::robotic_arm_msgs::msg::JointAngles msg_;
};

class Init_JointAngles_waist_link1_joint
{
public:
  explicit Init_JointAngles_waist_link1_joint(::robotic_arm_msgs::msg::JointAngles & msg)
  : msg_(msg)
  {}
  Init_JointAngles_link1_link2_joint waist_link1_joint(::robotic_arm_msgs::msg::JointAngles::_waist_link1_joint_type arg)
  {
    msg_.waist_link1_joint = std::move(arg);
    return Init_JointAngles_link1_link2_joint(msg_);
  }

private:
  ::robotic_arm_msgs::msg::JointAngles msg_;
};

class Init_JointAngles_base_waist_joint
{
public:
  Init_JointAngles_base_waist_joint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointAngles_waist_link1_joint base_waist_joint(::robotic_arm_msgs::msg::JointAngles::_base_waist_joint_type arg)
  {
    msg_.base_waist_joint = std::move(arg);
    return Init_JointAngles_waist_link1_joint(msg_);
  }

private:
  ::robotic_arm_msgs::msg::JointAngles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotic_arm_msgs::msg::JointAngles>()
{
  return robotic_arm_msgs::msg::builder::Init_JointAngles_base_waist_joint();
}

}  // namespace robotic_arm_msgs

#endif  // ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__BUILDER_HPP_
