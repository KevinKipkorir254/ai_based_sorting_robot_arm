// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robotic_arm_msgs:msg/JointAngles.idl
// generated code does not contain a copyright notice
#include "robotic_arm_msgs/msg/detail/joint_angles__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robotic_arm_msgs/msg/detail/joint_angles__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robotic_arm_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotic_arm_msgs
cdr_serialize(
  const robotic_arm_msgs::msg::JointAngles & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: base_waist_joint
  cdr << ros_message.base_waist_joint;
  // Member: waist_link1_joint
  cdr << ros_message.waist_link1_joint;
  // Member: link1_link2_joint
  cdr << ros_message.link1_link2_joint;
  // Member: link2_gripper_base_joint
  cdr << ros_message.link2_gripper_base_joint;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotic_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robotic_arm_msgs::msg::JointAngles & ros_message)
{
  // Member: base_waist_joint
  cdr >> ros_message.base_waist_joint;

  // Member: waist_link1_joint
  cdr >> ros_message.waist_link1_joint;

  // Member: link1_link2_joint
  cdr >> ros_message.link1_link2_joint;

  // Member: link2_gripper_base_joint
  cdr >> ros_message.link2_gripper_base_joint;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotic_arm_msgs
get_serialized_size(
  const robotic_arm_msgs::msg::JointAngles & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: base_waist_joint
  {
    size_t item_size = sizeof(ros_message.base_waist_joint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: waist_link1_joint
  {
    size_t item_size = sizeof(ros_message.waist_link1_joint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: link1_link2_joint
  {
    size_t item_size = sizeof(ros_message.link1_link2_joint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: link2_gripper_base_joint
  {
    size_t item_size = sizeof(ros_message.link2_gripper_base_joint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotic_arm_msgs
max_serialized_size_JointAngles(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: base_waist_joint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: waist_link1_joint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: link1_link2_joint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: link2_gripper_base_joint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _JointAngles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robotic_arm_msgs::msg::JointAngles *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointAngles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robotic_arm_msgs::msg::JointAngles *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointAngles__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robotic_arm_msgs::msg::JointAngles *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointAngles__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JointAngles(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JointAngles__callbacks = {
  "robotic_arm_msgs::msg",
  "JointAngles",
  _JointAngles__cdr_serialize,
  _JointAngles__cdr_deserialize,
  _JointAngles__get_serialized_size,
  _JointAngles__max_serialized_size
};

static rosidl_message_type_support_t _JointAngles__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JointAngles__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robotic_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robotic_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<robotic_arm_msgs::msg::JointAngles>()
{
  return &robotic_arm_msgs::msg::typesupport_fastrtps_cpp::_JointAngles__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robotic_arm_msgs, msg, JointAngles)() {
  return &robotic_arm_msgs::msg::typesupport_fastrtps_cpp::_JointAngles__handle;
}

#ifdef __cplusplus
}
#endif
