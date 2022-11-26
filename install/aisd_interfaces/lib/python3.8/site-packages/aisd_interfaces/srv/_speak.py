# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aisd_interfaces:srv/Speak.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Speak_Request(type):
    """Metaclass of message 'Speak_Request'."""

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
            module = import_type_support('aisd_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aisd_interfaces.srv.Speak_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__speak__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__speak__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__speak__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__speak__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__speak__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Speak_Request(metaclass=Metaclass_Speak_Request):
    """Message class 'Speak_Request'."""

    __slots__ = [
        '_words',
    ]

    _fields_and_field_types = {
        'words': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.words = kwargs.get('words', str())

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
        if self.words != other.words:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def words(self):
        """Message field 'words'."""
        return self._words

    @words.setter
    def words(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'words' field must be of type 'str'"
        self._words = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Speak_Response(type):
    """Metaclass of message 'Speak_Response'."""

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
            module = import_type_support('aisd_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aisd_interfaces.srv.Speak_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__speak__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__speak__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__speak__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__speak__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__speak__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Speak_Response(metaclass=Metaclass_Speak_Response):
    """Message class 'Speak_Response'."""

    __slots__ = [
        '_response',
    ]

    _fields_and_field_types = {
        'response': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.response = kwargs.get('response', str())

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
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'response' field must be of type 'str'"
        self._response = value


class Metaclass_Speak(type):
    """Metaclass of service 'Speak'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aisd_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aisd_interfaces.srv.Speak')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__speak

            from aisd_interfaces.srv import _speak
            if _speak.Metaclass_Speak_Request._TYPE_SUPPORT is None:
                _speak.Metaclass_Speak_Request.__import_type_support__()
            if _speak.Metaclass_Speak_Response._TYPE_SUPPORT is None:
                _speak.Metaclass_Speak_Response.__import_type_support__()


class Speak(metaclass=Metaclass_Speak):
    from aisd_interfaces.srv._speak import Speak_Request as Request
    from aisd_interfaces.srv._speak import Speak_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
