// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robotic_arm_msgs:msg/JointAngles.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robotic_arm_msgs/msg/detail/joint_angles__struct.h"
#include "robotic_arm_msgs/msg/detail/joint_angles__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robotic_arm_msgs__msg__joint_angles__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robotic_arm_msgs.msg._joint_angles.JointAngles", full_classname_dest, 46) == 0);
  }
  robotic_arm_msgs__msg__JointAngles * ros_message = _ros_message;
  {  // base_waist_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_waist_joint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->base_waist_joint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // waist_link1_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "waist_link1_joint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->waist_link1_joint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // link1_link2_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "link1_link2_joint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->link1_link2_joint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // link2_gripper_base_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "link2_gripper_base_joint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->link2_gripper_base_joint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robotic_arm_msgs__msg__joint_angles__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointAngles */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robotic_arm_msgs.msg._joint_angles");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointAngles");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robotic_arm_msgs__msg__JointAngles * ros_message = (robotic_arm_msgs__msg__JointAngles *)raw_ros_message;
  {  // base_waist_joint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->base_waist_joint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_waist_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waist_link1_joint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->waist_link1_joint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waist_link1_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link1_link2_joint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->link1_link2_joint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link1_link2_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link2_gripper_base_joint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->link2_gripper_base_joint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link2_gripper_base_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
