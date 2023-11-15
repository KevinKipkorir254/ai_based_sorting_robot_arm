// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotic_arm_msgs:msg/JointAngles.idl
// generated code does not contain a copyright notice
#include "robotic_arm_msgs/msg/detail/joint_angles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robotic_arm_msgs__msg__JointAngles__init(robotic_arm_msgs__msg__JointAngles * msg)
{
  if (!msg) {
    return false;
  }
  // base_waist_joint
  // waist_link1_joint
  // link1_link2_joint
  // link2_gripper_base_joint
  return true;
}

void
robotic_arm_msgs__msg__JointAngles__fini(robotic_arm_msgs__msg__JointAngles * msg)
{
  if (!msg) {
    return;
  }
  // base_waist_joint
  // waist_link1_joint
  // link1_link2_joint
  // link2_gripper_base_joint
}

bool
robotic_arm_msgs__msg__JointAngles__are_equal(const robotic_arm_msgs__msg__JointAngles * lhs, const robotic_arm_msgs__msg__JointAngles * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_waist_joint
  if (lhs->base_waist_joint != rhs->base_waist_joint) {
    return false;
  }
  // waist_link1_joint
  if (lhs->waist_link1_joint != rhs->waist_link1_joint) {
    return false;
  }
  // link1_link2_joint
  if (lhs->link1_link2_joint != rhs->link1_link2_joint) {
    return false;
  }
  // link2_gripper_base_joint
  if (lhs->link2_gripper_base_joint != rhs->link2_gripper_base_joint) {
    return false;
  }
  return true;
}

bool
robotic_arm_msgs__msg__JointAngles__copy(
  const robotic_arm_msgs__msg__JointAngles * input,
  robotic_arm_msgs__msg__JointAngles * output)
{
  if (!input || !output) {
    return false;
  }
  // base_waist_joint
  output->base_waist_joint = input->base_waist_joint;
  // waist_link1_joint
  output->waist_link1_joint = input->waist_link1_joint;
  // link1_link2_joint
  output->link1_link2_joint = input->link1_link2_joint;
  // link2_gripper_base_joint
  output->link2_gripper_base_joint = input->link2_gripper_base_joint;
  return true;
}

robotic_arm_msgs__msg__JointAngles *
robotic_arm_msgs__msg__JointAngles__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotic_arm_msgs__msg__JointAngles * msg = (robotic_arm_msgs__msg__JointAngles *)allocator.allocate(sizeof(robotic_arm_msgs__msg__JointAngles), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotic_arm_msgs__msg__JointAngles));
  bool success = robotic_arm_msgs__msg__JointAngles__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotic_arm_msgs__msg__JointAngles__destroy(robotic_arm_msgs__msg__JointAngles * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotic_arm_msgs__msg__JointAngles__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotic_arm_msgs__msg__JointAngles__Sequence__init(robotic_arm_msgs__msg__JointAngles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotic_arm_msgs__msg__JointAngles * data = NULL;

  if (size) {
    data = (robotic_arm_msgs__msg__JointAngles *)allocator.zero_allocate(size, sizeof(robotic_arm_msgs__msg__JointAngles), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotic_arm_msgs__msg__JointAngles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotic_arm_msgs__msg__JointAngles__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotic_arm_msgs__msg__JointAngles__Sequence__fini(robotic_arm_msgs__msg__JointAngles__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotic_arm_msgs__msg__JointAngles__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotic_arm_msgs__msg__JointAngles__Sequence *
robotic_arm_msgs__msg__JointAngles__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotic_arm_msgs__msg__JointAngles__Sequence * array = (robotic_arm_msgs__msg__JointAngles__Sequence *)allocator.allocate(sizeof(robotic_arm_msgs__msg__JointAngles__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotic_arm_msgs__msg__JointAngles__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotic_arm_msgs__msg__JointAngles__Sequence__destroy(robotic_arm_msgs__msg__JointAngles__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotic_arm_msgs__msg__JointAngles__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotic_arm_msgs__msg__JointAngles__Sequence__are_equal(const robotic_arm_msgs__msg__JointAngles__Sequence * lhs, const robotic_arm_msgs__msg__JointAngles__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotic_arm_msgs__msg__JointAngles__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotic_arm_msgs__msg__JointAngles__Sequence__copy(
  const robotic_arm_msgs__msg__JointAngles__Sequence * input,
  robotic_arm_msgs__msg__JointAngles__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotic_arm_msgs__msg__JointAngles);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotic_arm_msgs__msg__JointAngles * data =
      (robotic_arm_msgs__msg__JointAngles *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotic_arm_msgs__msg__JointAngles__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotic_arm_msgs__msg__JointAngles__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotic_arm_msgs__msg__JointAngles__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
