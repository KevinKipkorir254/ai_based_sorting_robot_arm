# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robotic_arm_msgs:msg/JointAngles.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointAngles(type):
    """Metaclass of message 'JointAngles'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robotic_arm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robotic_arm_msgs.msg.JointAngles')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_angles
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_angles
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_angles
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_angles
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_angles

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointAngles(metaclass=Metaclass_JointAngles):
    """Message class 'JointAngles'."""

    __slots__ = [
        '_base_waist_joint',
        '_waist_link1_joint',
        '_link1_link2_joint',
        '_link2_gripper_base_joint',
    ]

    _fields_and_field_types = {
        'base_waist_joint': 'float',
        'waist_link1_joint': 'float',
        'link1_link2_joint': 'float',
        'link2_gripper_base_joint': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.base_waist_joint = kwargs.get('base_waist_joint', float())
        self.waist_link1_joint = kwargs.get('waist_link1_joint', float())
        self.link1_link2_joint = kwargs.get('link1_link2_joint', float())
        self.link2_gripper_base_joint = kwargs.get('link2_gripper_base_joint', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.base_waist_joint != other.base_waist_joint:
            return False
        if self.waist_link1_joint != other.waist_link1_joint:
            return False
        if self.link1_link2_joint != other.link1_link2_joint:
            return False
        if self.link2_gripper_base_joint != other.link2_gripper_base_joint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def base_waist_joint(self):
        """Message field 'base_waist_joint'."""
        return self._base_waist_joint

    @base_waist_joint.setter
    def base_waist_joint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base_waist_joint' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'base_waist_joint' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._base_waist_joint = value

    @builtins.property
    def waist_link1_joint(self):
        """Message field 'waist_link1_joint'."""
        return self._waist_link1_joint

    @waist_link1_joint.setter
    def waist_link1_joint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_link1_joint' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'waist_link1_joint' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._waist_link1_joint = value

    @builtins.property
    def link1_link2_joint(self):
        """Message field 'link1_link2_joint'."""
        return self._link1_link2_joint

    @link1_link2_joint.setter
    def link1_link2_joint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'link1_link2_joint' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'link1_link2_joint' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._link1_link2_joint = value

    @builtins.property
    def link2_gripper_base_joint(self):
        """Message field 'link2_gripper_base_joint'."""
        return self._link2_gripper_base_joint

    @link2_gripper_base_joint.setter
    def link2_gripper_base_joint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'link2_gripper_base_joint' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'link2_gripper_base_joint' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._link2_gripper_base_joint = value
