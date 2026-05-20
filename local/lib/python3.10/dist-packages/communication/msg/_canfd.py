# generated from rosidl_generator_py/resource/_idl.py.em
# with input from communication:msg/CANFD.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'data'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CANFD(type):
    """Metaclass of message 'CANFD'."""

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
                'communication.msg.CANFD')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__canfd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__canfd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__canfd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__canfd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__canfd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CANFD(metaclass=Metaclass_CANFD):
    """Message class 'CANFD'."""

    __slots__ = [
        '_can_id',
        '_len',
        '_flags',
        '_res0',
        '_res1',
        '_data',
    ]

    _fields_and_field_types = {
        'can_id': 'uint32',
        'len': 'uint8',
        'flags': 'uint8',
        'res0': 'uint8',
        'res1': 'uint8',
        'data': 'uint8[64]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 64),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.can_id = kwargs.get('can_id', int())
        self.len = kwargs.get('len', int())
        self.flags = kwargs.get('flags', int())
        self.res0 = kwargs.get('res0', int())
        self.res1 = kwargs.get('res1', int())
        if 'data' not in kwargs:
            self.data = numpy.zeros(64, dtype=numpy.uint8)
        else:
            self.data = kwargs.get('data')

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
        if self.can_id != other.can_id:
            return False
        if self.len != other.len:
            return False
        if self.flags != other.flags:
            return False
        if self.res0 != other.res0:
            return False
        if self.res1 != other.res1:
            return False
        if any(self.data != other.data):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def can_id(self):
        """Message field 'can_id'."""
        return self._can_id

    @can_id.setter
    def can_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'can_id' field must be an unsigned integer in [0, 4294967295]"
        self._can_id = value

    @builtins.property  # noqa: A003
    def len(self):  # noqa: A003
        """Message field 'len'."""
        return self._len

    @len.setter  # noqa: A003
    def len(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'len' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'len' field must be an unsigned integer in [0, 255]"
        self._len = value

    @builtins.property
    def flags(self):
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'flags' field must be an unsigned integer in [0, 255]"
        self._flags = value

    @builtins.property
    def res0(self):
        """Message field 'res0'."""
        return self._res0

    @res0.setter
    def res0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'res0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'res0' field must be an unsigned integer in [0, 255]"
        self._res0 = value

    @builtins.property
    def res1(self):
        """Message field 'res1'."""
        return self._res1

    @res1.setter
    def res1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'res1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'res1' field must be an unsigned integer in [0, 255]"
        self._res1 = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'data' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 64, \
                "The 'data' numpy.ndarray() must have a size of 64"
            self._data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 64 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence with length 64 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = numpy.array(value, dtype=numpy.uint8)
