# generated from rosidl_generator_py/resource/_idl.py.em
# with input from communication:srv/ApplyExternalWrench.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ApplyExternalWrench_Request(type):
    """Metaclass of message 'ApplyExternalWrench_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'APPLY': 0,
        'CLEAR': 1,
        'CLEAR_ALL': 2,
        'WORLD_FRAME': 0,
        'BODY_FRAME': 1,
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
                'communication.srv.ApplyExternalWrench_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__apply_external_wrench__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__apply_external_wrench__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__apply_external_wrench__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__apply_external_wrench__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__apply_external_wrench__request

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Wrench
            if Wrench.__class__._TYPE_SUPPORT is None:
                Wrench.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'APPLY': cls.__constants['APPLY'],
            'CLEAR': cls.__constants['CLEAR'],
            'CLEAR_ALL': cls.__constants['CLEAR_ALL'],
            'WORLD_FRAME': cls.__constants['WORLD_FRAME'],
            'BODY_FRAME': cls.__constants['BODY_FRAME'],
        }

    @property
    def APPLY(self):
        """Message constant 'APPLY'."""
        return Metaclass_ApplyExternalWrench_Request.__constants['APPLY']

    @property
    def CLEAR(self):
        """Message constant 'CLEAR'."""
        return Metaclass_ApplyExternalWrench_Request.__constants['CLEAR']

    @property
    def CLEAR_ALL(self):
        """Message constant 'CLEAR_ALL'."""
        return Metaclass_ApplyExternalWrench_Request.__constants['CLEAR_ALL']

    @property
    def WORLD_FRAME(self):
        """Message constant 'WORLD_FRAME'."""
        return Metaclass_ApplyExternalWrench_Request.__constants['WORLD_FRAME']

    @property
    def BODY_FRAME(self):
        """Message constant 'BODY_FRAME'."""
        return Metaclass_ApplyExternalWrench_Request.__constants['BODY_FRAME']


class ApplyExternalWrench_Request(metaclass=Metaclass_ApplyExternalWrench_Request):
    """
    Message class 'ApplyExternalWrench_Request'.

    Constants:
      APPLY
      CLEAR
      CLEAR_ALL
      WORLD_FRAME
      BODY_FRAME
    """

    __slots__ = [
        '_operation',
        '_wrench_id',
        '_body_name',
        '_reference_frame',
        '_at_center_of_mass',
        '_application_point',
        '_wrench',
        '_persistent',
        '_duration',
    ]

    _fields_and_field_types = {
        'operation': 'uint8',
        'wrench_id': 'string',
        'body_name': 'string',
        'reference_frame': 'uint8',
        'at_center_of_mass': 'boolean',
        'application_point': 'geometry_msgs/Point',
        'wrench': 'geometry_msgs/Wrench',
        'persistent': 'boolean',
        'duration': 'builtin_interfaces/Duration',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Wrench'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.operation = kwargs.get('operation', int())
        self.wrench_id = kwargs.get('wrench_id', str())
        self.body_name = kwargs.get('body_name', str())
        self.reference_frame = kwargs.get('reference_frame', int())
        self.at_center_of_mass = kwargs.get('at_center_of_mass', bool())
        from geometry_msgs.msg import Point
        self.application_point = kwargs.get('application_point', Point())
        from geometry_msgs.msg import Wrench
        self.wrench = kwargs.get('wrench', Wrench())
        self.persistent = kwargs.get('persistent', bool())
        from builtin_interfaces.msg import Duration
        self.duration = kwargs.get('duration', Duration())

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
        if self.operation != other.operation:
            return False
        if self.wrench_id != other.wrench_id:
            return False
        if self.body_name != other.body_name:
            return False
        if self.reference_frame != other.reference_frame:
            return False
        if self.at_center_of_mass != other.at_center_of_mass:
            return False
        if self.application_point != other.application_point:
            return False
        if self.wrench != other.wrench:
            return False
        if self.persistent != other.persistent:
            return False
        if self.duration != other.duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def operation(self):
        """Message field 'operation'."""
        return self._operation

    @operation.setter
    def operation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'operation' field must be an unsigned integer in [0, 255]"
        self._operation = value

    @builtins.property
    def wrench_id(self):
        """Message field 'wrench_id'."""
        return self._wrench_id

    @wrench_id.setter
    def wrench_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'wrench_id' field must be of type 'str'"
        self._wrench_id = value

    @builtins.property
    def body_name(self):
        """Message field 'body_name'."""
        return self._body_name

    @body_name.setter
    def body_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'body_name' field must be of type 'str'"
        self._body_name = value

    @builtins.property
    def reference_frame(self):
        """Message field 'reference_frame'."""
        return self._reference_frame

    @reference_frame.setter
    def reference_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_frame' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reference_frame' field must be an unsigned integer in [0, 255]"
        self._reference_frame = value

    @builtins.property
    def at_center_of_mass(self):
        """Message field 'at_center_of_mass'."""
        return self._at_center_of_mass

    @at_center_of_mass.setter
    def at_center_of_mass(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'at_center_of_mass' field must be of type 'bool'"
        self._at_center_of_mass = value

    @builtins.property
    def application_point(self):
        """Message field 'application_point'."""
        return self._application_point

    @application_point.setter
    def application_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'application_point' field must be a sub message of type 'Point'"
        self._application_point = value

    @builtins.property
    def wrench(self):
        """Message field 'wrench'."""
        return self._wrench

    @wrench.setter
    def wrench(self, value):
        if __debug__:
            from geometry_msgs.msg import Wrench
            assert \
                isinstance(value, Wrench), \
                "The 'wrench' field must be a sub message of type 'Wrench'"
        self._wrench = value

    @builtins.property
    def persistent(self):
        """Message field 'persistent'."""
        return self._persistent

    @persistent.setter
    def persistent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'persistent' field must be of type 'bool'"
        self._persistent = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'duration' field must be a sub message of type 'Duration'"
        self._duration = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ApplyExternalWrench_Response(type):
    """Metaclass of message 'ApplyExternalWrench_Response'."""

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
                'communication.srv.ApplyExternalWrench_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__apply_external_wrench__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__apply_external_wrench__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__apply_external_wrench__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__apply_external_wrench__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__apply_external_wrench__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApplyExternalWrench_Response(metaclass=Metaclass_ApplyExternalWrench_Response):
    """Message class 'ApplyExternalWrench_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_ApplyExternalWrench(type):
    """Metaclass of service 'ApplyExternalWrench'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('communication')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'communication.srv.ApplyExternalWrench')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__apply_external_wrench

            from communication.srv import _apply_external_wrench
            if _apply_external_wrench.Metaclass_ApplyExternalWrench_Request._TYPE_SUPPORT is None:
                _apply_external_wrench.Metaclass_ApplyExternalWrench_Request.__import_type_support__()
            if _apply_external_wrench.Metaclass_ApplyExternalWrench_Response._TYPE_SUPPORT is None:
                _apply_external_wrench.Metaclass_ApplyExternalWrench_Response.__import_type_support__()


class ApplyExternalWrench(metaclass=Metaclass_ApplyExternalWrench):
    from communication.srv._apply_external_wrench import ApplyExternalWrench_Request as Request
    from communication.srv._apply_external_wrench import ApplyExternalWrench_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
