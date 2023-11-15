// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotic_arm_msgs:msg/JointAngles.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__STRUCT_H_
#define ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JointAngles in the package robotic_arm_msgs.
/**
  * Contains the joint variables, joint angles
 */
typedef struct robotic_arm_msgs__msg__JointAngles
{
  float base_waist_joint;
  float waist_link1_joint;
  float link1_link2_joint;
  float link2_gripper_base_joint;
} robotic_arm_msgs__msg__JointAngles;

// Struct for a sequence of robotic_arm_msgs__msg__JointAngles.
typedef struct robotic_arm_msgs__msg__JointAngles__Sequence
{
  robotic_arm_msgs__msg__JointAngles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotic_arm_msgs__msg__JointAngles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__STRUCT_H_
