// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robotic_arm_msgs:msg/JointAngles.idl
// generated code does not contain a copyright notice
#include "robotic_arm_msgs/msg/detail/joint_angles__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robotic_arm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robotic_arm_msgs/msg/detail/joint_angles__struct.h"
#include "robotic_arm_msgs/msg/detail/joint_angles__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _JointAngles__ros_msg_type = robotic_arm_msgs__msg__JointAngles;

static bool _JointAngles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointAngles__ros_msg_type * ros_message = static_cast<const _JointAngles__ros_msg_type *>(untyped_ros_message);
  // Field name: base_waist_joint
  {
    cdr << ros_message->base_waist_joint;
  }

  // Field name: waist_link1_joint
  {
    cdr << ros_message->waist_link1_joint;
  }

  // Field name: link1_link2_joint
  {
    cdr << ros_message->link1_link2_joint;
  }

  // Field name: link2_gripper_base_joint
  {
    cdr << ros_message->link2_gripper_base_joint;
  }

  return true;
}

static bool _JointAngles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointAngles__ros_msg_type * ros_message = static_cast<_JointAngles__ros_msg_type *>(untyped_ros_message);
  // Field name: base_waist_joint
  {
    cdr >> ros_message->base_waist_joint;
  }

  // Field name: waist_link1_joint
  {
    cdr >> ros_message->waist_link1_joint;
  }

  // Field name: link1_link2_joint
  {
    cdr >> ros_message->link1_link2_joint;
  }

  // Field name: link2_gripper_base_joint
  {
    cdr >> ros_message->link2_gripper_base_joint;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotic_arm_msgs
size_t get_serialized_size_robotic_arm_msgs__msg__JointAngles(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointAngles__ros_msg_type * ros_message = static_cast<const _JointAngles__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name base_waist_joint
  {
    size_t item_size = sizeof(ros_message->base_waist_joint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name waist_link1_joint
  {
    size_t item_size = sizeof(ros_message->waist_link1_joint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link1_link2_joint
  {
    size_t item_size = sizeof(ros_message->link1_link2_joint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link2_gripper_base_joint
  {
    size_t item_size = sizeof(ros_message->link2_gripper_base_joint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointAngles__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robotic_arm_msgs__msg__JointAngles(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotic_arm_msgs
size_t max_serialized_size_robotic_arm_msgs__msg__JointAngles(
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

  // member: base_waist_joint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: waist_link1_joint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: link1_link2_joint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: link2_gripper_base_joint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _JointAngles__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robotic_arm_msgs__msg__JointAngles(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointAngles = {
  "robotic_arm_msgs::msg",
  "JointAngles",
  _JointAngles__cdr_serialize,
  _JointAngles__cdr_deserialize,
  _JointAngles__get_serialized_size,
  _JointAngles__max_serialized_size
};

static rosidl_message_type_support_t _JointAngles__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointAngles,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotic_arm_msgs, msg, JointAngles)() {
  return &_JointAngles__type_support;
}

#if defined(__cplusplus)
}
#endif
