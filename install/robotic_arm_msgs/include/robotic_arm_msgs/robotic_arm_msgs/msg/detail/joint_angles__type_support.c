// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotic_arm_msgs:msg/JointAngles.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotic_arm_msgs/msg/detail/joint_angles__rosidl_typesupport_introspection_c.h"
#include "robotic_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotic_arm_msgs/msg/detail/joint_angles__functions.h"
#include "robotic_arm_msgs/msg/detail/joint_angles__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robotic_arm_msgs__msg__JointAngles__rosidl_typesupport_introspection_c__JointAngles_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotic_arm_msgs__msg__JointAngles__init(message_memory);
}

void robotic_arm_msgs__msg__JointAngles__rosidl_typesupport_introspection_c__JointAngles_fini_function(void * message_memory)
{
  robotic_arm_msgs__msg__JointAngles__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotic_arm_msgs__msg__JointAngles__rosidl_typesupport_introspection_c__JointAngles_message_member_array[4] = {
  {
    "base_waist_joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotic_arm_msgs__msg__JointAngles, base_waist_joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waist_link1_joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotic_arm_msgs__msg__JointAngles, waist_link1_joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link1_link2_joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotic_arm_msgs__msg__JointAngles, link1_link2_joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link2_gripper_base_joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotic_arm_msgs__msg__JointAngles, link2_gripper_base_joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotic_arm_msgs__msg__JointAngles__rosidl_typesupport_introspection_c__JointAngles_message_members = {
  "robotic_arm_msgs__msg",  // message namespace
  "JointAngles",  // message name
  4,  // number of fields
  sizeof(robotic_arm_msgs__msg__JointAngles),
  robotic_arm_msgs__msg__JointAngles__rosidl_typesupport_introspection_c__JointAngles_message_member_array,  // message members
  robotic_arm_msgs__msg__JointAngles__rosidl_typesupport_introspection_c__JointAngles_init_function,  // function to initialize message memory (memory has to be allocated)
  robotic_arm_msgs__msg__JointAngles__rosidl_typesupport_introspection_c__JointAngles_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotic_arm_msgs__msg__JointAngles__rosidl_typesupport_introspection_c__JointAngles_message_type_support_handle = {
  0,
  &robotic_arm_msgs__msg__JointAngles__rosidl_typesupport_introspection_c__JointAngles_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotic_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotic_arm_msgs, msg, JointAngles)() {
  if (!robotic_arm_msgs__msg__JointAngles__rosidl_typesupport_introspection_c__JointAngles_message_type_support_handle.typesupport_identifier) {
    robotic_arm_msgs__msg__JointAngles__rosidl_typesupport_introspection_c__JointAngles_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotic_arm_msgs__msg__JointAngles__rosidl_typesupport_introspection_c__JointAngles_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
