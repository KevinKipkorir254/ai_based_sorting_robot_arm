// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotic_arm_msgs:msg/JointAngles.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__STRUCT_HPP_
#define ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotic_arm_msgs__msg__JointAngles __attribute__((deprecated))
#else
# define DEPRECATED__robotic_arm_msgs__msg__JointAngles __declspec(deprecated)
#endif

namespace robotic_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointAngles_
{
  using Type = JointAngles_<ContainerAllocator>;

  explicit JointAngles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_waist_joint = 0.0f;
      this->waist_link1_joint = 0.0f;
      this->link1_link2_joint = 0.0f;
      this->link2_gripper_base_joint = 0.0f;
    }
  }

  explicit JointAngles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_waist_joint = 0.0f;
      this->waist_link1_joint = 0.0f;
      this->link1_link2_joint = 0.0f;
      this->link2_gripper_base_joint = 0.0f;
    }
  }

  // field types and members
  using _base_waist_joint_type =
    float;
  _base_waist_joint_type base_waist_joint;
  using _waist_link1_joint_type =
    float;
  _waist_link1_joint_type waist_link1_joint;
  using _link1_link2_joint_type =
    float;
  _link1_link2_joint_type link1_link2_joint;
  using _link2_gripper_base_joint_type =
    float;
  _link2_gripper_base_joint_type link2_gripper_base_joint;

  // setters for named parameter idiom
  Type & set__base_waist_joint(
    const float & _arg)
  {
    this->base_waist_joint = _arg;
    return *this;
  }
  Type & set__waist_link1_joint(
    const float & _arg)
  {
    this->waist_link1_joint = _arg;
    return *this;
  }
  Type & set__link1_link2_joint(
    const float & _arg)
  {
    this->link1_link2_joint = _arg;
    return *this;
  }
  Type & set__link2_gripper_base_joint(
    const float & _arg)
  {
    this->link2_gripper_base_joint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotic_arm_msgs::msg::JointAngles_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotic_arm_msgs::msg::JointAngles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotic_arm_msgs::msg::JointAngles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotic_arm_msgs::msg::JointAngles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotic_arm_msgs::msg::JointAngles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotic_arm_msgs::msg::JointAngles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotic_arm_msgs::msg::JointAngles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotic_arm_msgs::msg::JointAngles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotic_arm_msgs::msg::JointAngles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotic_arm_msgs::msg::JointAngles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotic_arm_msgs__msg__JointAngles
    std::shared_ptr<robotic_arm_msgs::msg::JointAngles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotic_arm_msgs__msg__JointAngles
    std::shared_ptr<robotic_arm_msgs::msg::JointAngles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointAngles_ & other) const
  {
    if (this->base_waist_joint != other.base_waist_joint) {
      return false;
    }
    if (this->waist_link1_joint != other.waist_link1_joint) {
      return false;
    }
    if (this->link1_link2_joint != other.link1_link2_joint) {
      return false;
    }
    if (this->link2_gripper_base_joint != other.link2_gripper_base_joint) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointAngles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointAngles_

// alias to use template instance with default allocator
using JointAngles =
  robotic_arm_msgs::msg::JointAngles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotic_arm_msgs

#endif  // ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__STRUCT_HPP_
