// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotic_arm_msgs:msg/JointAngles.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__TRAITS_HPP_
#define ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotic_arm_msgs/msg/detail/joint_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotic_arm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointAngles & msg,
  std::ostream & out)
{
  out << "{";
  // member: base_waist_joint
  {
    out << "base_waist_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.base_waist_joint, out);
    out << ", ";
  }

  // member: waist_link1_joint
  {
    out << "waist_link1_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_link1_joint, out);
    out << ", ";
  }

  // member: link1_link2_joint
  {
    out << "link1_link2_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.link1_link2_joint, out);
    out << ", ";
  }

  // member: link2_gripper_base_joint
  {
    out << "link2_gripper_base_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.link2_gripper_base_joint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: base_waist_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_waist_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.base_waist_joint, out);
    out << "\n";
  }

  // member: waist_link1_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_link1_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_link1_joint, out);
    out << "\n";
  }

  // member: link1_link2_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link1_link2_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.link1_link2_joint, out);
    out << "\n";
  }

  // member: link2_gripper_base_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link2_gripper_base_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.link2_gripper_base_joint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointAngles & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robotic_arm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robotic_arm_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotic_arm_msgs::msg::JointAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotic_arm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotic_arm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotic_arm_msgs::msg::JointAngles & msg)
{
  return robotic_arm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotic_arm_msgs::msg::JointAngles>()
{
  return "robotic_arm_msgs::msg::JointAngles";
}

template<>
inline const char * name<robotic_arm_msgs::msg::JointAngles>()
{
  return "robotic_arm_msgs/msg/JointAngles";
}

template<>
struct has_fixed_size<robotic_arm_msgs::msg::JointAngles>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotic_arm_msgs::msg::JointAngles>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotic_arm_msgs::msg::JointAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__TRAITS_HPP_
