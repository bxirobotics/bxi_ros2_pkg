# generated from rosidl_generator_py/resource/_idl.py.em
# with input from communication:msg/MotionCommands.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionCommands(type):
    """Metaclass of message 'MotionCommands'."""

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
            module = import_type_support('communication')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'communication.msg.MotionCommands')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_commands
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_commands
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_commands
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_commands
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_commands

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionCommands(metaclass=Metaclass_MotionCommands):
    """Message class 'MotionCommands'."""

    __slots__ = [
        '_header',
        '_vel_des',
        '_height_des',
        '_yawdot_des',
        '_mode',
        '_btn_1',
        '_btn_2',
        '_btn_3',
        '_btn_4',
        '_btn_5',
        '_btn_6',
        '_btn_7',
        '_btn_8',
        '_btn_9',
        '_btn_10',
        '_axis_1',
        '_axis_2',
        '_axis_3',
        '_axis_4',
        '_axis_5',
        '_axis_6',
        '_axis_7',
        '_axis_8',
        '_axis_9',
        '_axis_10',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vel_des': 'geometry_msgs/Vector3',
        'height_des': 'float',
        'yawdot_des': 'float',
        'mode': 'int32',
        'btn_1': 'int32',
        'btn_2': 'int32',
        'btn_3': 'int32',
        'btn_4': 'int32',
        'btn_5': 'int32',
        'btn_6': 'int32',
        'btn_7': 'int32',
        'btn_8': 'int32',
        'btn_9': 'int32',
        'btn_10': 'int32',
        'axis_1': 'int32',
        'axis_2': 'int32',
        'axis_3': 'int32',
        'axis_4': 'int32',
        'axis_5': 'int32',
        'axis_6': 'int32',
        'axis_7': 'int32',
        'axis_8': 'int32',
        'axis_9': 'int32',
        'axis_10': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Vector3
        self.vel_des = kwargs.get('vel_des', Vector3())
        self.height_des = kwargs.get('height_des', float())
        self.yawdot_des = kwargs.get('yawdot_des', float())
        self.mode = kwargs.get('mode', int())
        self.btn_1 = kwargs.get('btn_1', int())
        self.btn_2 = kwargs.get('btn_2', int())
        self.btn_3 = kwargs.get('btn_3', int())
        self.btn_4 = kwargs.get('btn_4', int())
        self.btn_5 = kwargs.get('btn_5', int())
        self.btn_6 = kwargs.get('btn_6', int())
        self.btn_7 = kwargs.get('btn_7', int())
        self.btn_8 = kwargs.get('btn_8', int())
        self.btn_9 = kwargs.get('btn_9', int())
        self.btn_10 = kwargs.get('btn_10', int())
        self.axis_1 = kwargs.get('axis_1', int())
        self.axis_2 = kwargs.get('axis_2', int())
        self.axis_3 = kwargs.get('axis_3', int())
        self.axis_4 = kwargs.get('axis_4', int())
        self.axis_5 = kwargs.get('axis_5', int())
        self.axis_6 = kwargs.get('axis_6', int())
        self.axis_7 = kwargs.get('axis_7', int())
        self.axis_8 = kwargs.get('axis_8', int())
        self.axis_9 = kwargs.get('axis_9', int())
        self.axis_10 = kwargs.get('axis_10', int())

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
        if self.header != other.header:
            return False
        if self.vel_des != other.vel_des:
            return False
        if self.height_des != other.height_des:
            return False
        if self.yawdot_des != other.yawdot_des:
            return False
        if self.mode != other.mode:
            return False
        if self.btn_1 != other.btn_1:
            return False
        if self.btn_2 != other.btn_2:
            return False
        if self.btn_3 != other.btn_3:
            return False
        if self.btn_4 != other.btn_4:
            return False
        if self.btn_5 != other.btn_5:
            return False
        if self.btn_6 != other.btn_6:
            return False
        if self.btn_7 != other.btn_7:
            return False
        if self.btn_8 != other.btn_8:
            return False
        if self.btn_9 != other.btn_9:
            return False
        if self.btn_10 != other.btn_10:
            return False
        if self.axis_1 != other.axis_1:
            return False
        if self.axis_2 != other.axis_2:
            return False
        if self.axis_3 != other.axis_3:
            return False
        if self.axis_4 != other.axis_4:
            return False
        if self.axis_5 != other.axis_5:
            return False
        if self.axis_6 != other.axis_6:
            return False
        if self.axis_7 != other.axis_7:
            return False
        if self.axis_8 != other.axis_8:
            return False
        if self.axis_9 != other.axis_9:
            return False
        if self.axis_10 != other.axis_10:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def vel_des(self):
        """Message field 'vel_des'."""
        return self._vel_des

    @vel_des.setter
    def vel_des(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'vel_des' field must be a sub message of type 'Vector3'"
        self._vel_des = value

    @builtins.property
    def height_des(self):
        """Message field 'height_des'."""
        return self._height_des

    @height_des.setter
    def height_des(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_des' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height_des' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height_des = value

    @builtins.property
    def yawdot_des(self):
        """Message field 'yawdot_des'."""
        return self._yawdot_des

    @yawdot_des.setter
    def yawdot_des(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yawdot_des' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yawdot_des' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yawdot_des = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode' field must be an integer in [-2147483648, 2147483647]"
        self._mode = value

    @builtins.property
    def btn_1(self):
        """Message field 'btn_1'."""
        return self._btn_1

    @btn_1.setter
    def btn_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'btn_1' field must be an integer in [-2147483648, 2147483647]"
        self._btn_1 = value

    @builtins.property
    def btn_2(self):
        """Message field 'btn_2'."""
        return self._btn_2

    @btn_2.setter
    def btn_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'btn_2' field must be an integer in [-2147483648, 2147483647]"
        self._btn_2 = value

    @builtins.property
    def btn_3(self):
        """Message field 'btn_3'."""
        return self._btn_3

    @btn_3.setter
    def btn_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'btn_3' field must be an integer in [-2147483648, 2147483647]"
        self._btn_3 = value

    @builtins.property
    def btn_4(self):
        """Message field 'btn_4'."""
        return self._btn_4

    @btn_4.setter
    def btn_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'btn_4' field must be an integer in [-2147483648, 2147483647]"
        self._btn_4 = value

    @builtins.property
    def btn_5(self):
        """Message field 'btn_5'."""
        return self._btn_5

    @btn_5.setter
    def btn_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_5' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'btn_5' field must be an integer in [-2147483648, 2147483647]"
        self._btn_5 = value

    @builtins.property
    def btn_6(self):
        """Message field 'btn_6'."""
        return self._btn_6

    @btn_6.setter
    def btn_6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_6' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'btn_6' field must be an integer in [-2147483648, 2147483647]"
        self._btn_6 = value

    @builtins.property
    def btn_7(self):
        """Message field 'btn_7'."""
        return self._btn_7

    @btn_7.setter
    def btn_7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_7' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'btn_7' field must be an integer in [-2147483648, 2147483647]"
        self._btn_7 = value

    @builtins.property
    def btn_8(self):
        """Message field 'btn_8'."""
        return self._btn_8

    @btn_8.setter
    def btn_8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_8' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'btn_8' field must be an integer in [-2147483648, 2147483647]"
        self._btn_8 = value

    @builtins.property
    def btn_9(self):
        """Message field 'btn_9'."""
        return self._btn_9

    @btn_9.setter
    def btn_9(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_9' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'btn_9' field must be an integer in [-2147483648, 2147483647]"
        self._btn_9 = value

    @builtins.property
    def btn_10(self):
        """Message field 'btn_10'."""
        return self._btn_10

    @btn_10.setter
    def btn_10(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_10' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'btn_10' field must be an integer in [-2147483648, 2147483647]"
        self._btn_10 = value

    @builtins.property
    def axis_1(self):
        """Message field 'axis_1'."""
        return self._axis_1

    @axis_1.setter
    def axis_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis_1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis_1' field must be an integer in [-2147483648, 2147483647]"
        self._axis_1 = value

    @builtins.property
    def axis_2(self):
        """Message field 'axis_2'."""
        return self._axis_2

    @axis_2.setter
    def axis_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis_2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis_2' field must be an integer in [-2147483648, 2147483647]"
        self._axis_2 = value

    @builtins.property
    def axis_3(self):
        """Message field 'axis_3'."""
        return self._axis_3

    @axis_3.setter
    def axis_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis_3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis_3' field must be an integer in [-2147483648, 2147483647]"
        self._axis_3 = value

    @builtins.property
    def axis_4(self):
        """Message field 'axis_4'."""
        return self._axis_4

    @axis_4.setter
    def axis_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis_4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis_4' field must be an integer in [-2147483648, 2147483647]"
        self._axis_4 = value

    @builtins.property
    def axis_5(self):
        """Message field 'axis_5'."""
        return self._axis_5

    @axis_5.setter
    def axis_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis_5' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis_5' field must be an integer in [-2147483648, 2147483647]"
        self._axis_5 = value

    @builtins.property
    def axis_6(self):
        """Message field 'axis_6'."""
        return self._axis_6

    @axis_6.setter
    def axis_6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis_6' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis_6' field must be an integer in [-2147483648, 2147483647]"
        self._axis_6 = value

    @builtins.property
    def axis_7(self):
        """Message field 'axis_7'."""
        return self._axis_7

    @axis_7.setter
    def axis_7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis_7' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis_7' field must be an integer in [-2147483648, 2147483647]"
        self._axis_7 = value

    @builtins.property
    def axis_8(self):
        """Message field 'axis_8'."""
        return self._axis_8

    @axis_8.setter
    def axis_8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis_8' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis_8' field must be an integer in [-2147483648, 2147483647]"
        self._axis_8 = value

    @builtins.property
    def axis_9(self):
        """Message field 'axis_9'."""
        return self._axis_9

    @axis_9.setter
    def axis_9(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis_9' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis_9' field must be an integer in [-2147483648, 2147483647]"
        self._axis_9 = value

    @builtins.property
    def axis_10(self):
        """Message field 'axis_10'."""
        return self._axis_10

    @axis_10.setter
    def axis_10(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis_10' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis_10' field must be an integer in [-2147483648, 2147483647]"
        self._axis_10 = value
