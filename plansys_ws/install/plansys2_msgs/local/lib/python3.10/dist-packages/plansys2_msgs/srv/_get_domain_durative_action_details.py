# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plansys2_msgs:srv/GetDomainDurativeActionDetails.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetDomainDurativeActionDetails_Request(type):
    """Metaclass of message 'GetDomainDurativeActionDetails_Request'."""

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
            module = import_type_support('plansys2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'plansys2_msgs.srv.GetDomainDurativeActionDetails_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_domain_durative_action_details__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_domain_durative_action_details__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_domain_durative_action_details__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_domain_durative_action_details__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_domain_durative_action_details__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetDomainDurativeActionDetails_Request(metaclass=Metaclass_GetDomainDurativeActionDetails_Request):
    """Message class 'GetDomainDurativeActionDetails_Request'."""

    __slots__ = [
        '_durative_action',
        '_parameters',
    ]

    _fields_and_field_types = {
        'durative_action': 'string',
        'parameters': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.durative_action = kwargs.get('durative_action', str())
        self.parameters = kwargs.get('parameters', [])

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
        if self.durative_action != other.durative_action:
            return False
        if self.parameters != other.parameters:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def durative_action(self):
        """Message field 'durative_action'."""
        return self._durative_action

    @durative_action.setter
    def durative_action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'durative_action' field must be of type 'str'"
        self._durative_action = value

    @builtins.property
    def parameters(self):
        """Message field 'parameters'."""
        return self._parameters

    @parameters.setter
    def parameters(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'parameters' field must be a set or sequence and each value of type 'str'"
        self._parameters = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetDomainDurativeActionDetails_Response(type):
    """Metaclass of message 'GetDomainDurativeActionDetails_Response'."""

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
            module = import_type_support('plansys2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'plansys2_msgs.srv.GetDomainDurativeActionDetails_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_domain_durative_action_details__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_domain_durative_action_details__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_domain_durative_action_details__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_domain_durative_action_details__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_domain_durative_action_details__response

            from plansys2_msgs.msg import DurativeAction
            if DurativeAction.__class__._TYPE_SUPPORT is None:
                DurativeAction.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetDomainDurativeActionDetails_Response(metaclass=Metaclass_GetDomainDurativeActionDetails_Response):
    """Message class 'GetDomainDurativeActionDetails_Response'."""

    __slots__ = [
        '_success',
        '_durative_action',
        '_error_info',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'durative_action': 'plansys2_msgs/DurativeAction',
        'error_info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'DurativeAction'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        from plansys2_msgs.msg import DurativeAction
        self.durative_action = kwargs.get('durative_action', DurativeAction())
        self.error_info = kwargs.get('error_info', str())

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
        if self.durative_action != other.durative_action:
            return False
        if self.error_info != other.error_info:
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
    def durative_action(self):
        """Message field 'durative_action'."""
        return self._durative_action

    @durative_action.setter
    def durative_action(self, value):
        if __debug__:
            from plansys2_msgs.msg import DurativeAction
            assert \
                isinstance(value, DurativeAction), \
                "The 'durative_action' field must be a sub message of type 'DurativeAction'"
        self._durative_action = value

    @builtins.property
    def error_info(self):
        """Message field 'error_info'."""
        return self._error_info

    @error_info.setter
    def error_info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_info' field must be of type 'str'"
        self._error_info = value


class Metaclass_GetDomainDurativeActionDetails(type):
    """Metaclass of service 'GetDomainDurativeActionDetails'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('plansys2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'plansys2_msgs.srv.GetDomainDurativeActionDetails')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_domain_durative_action_details

            from plansys2_msgs.srv import _get_domain_durative_action_details
            if _get_domain_durative_action_details.Metaclass_GetDomainDurativeActionDetails_Request._TYPE_SUPPORT is None:
                _get_domain_durative_action_details.Metaclass_GetDomainDurativeActionDetails_Request.__import_type_support__()
            if _get_domain_durative_action_details.Metaclass_GetDomainDurativeActionDetails_Response._TYPE_SUPPORT is None:
                _get_domain_durative_action_details.Metaclass_GetDomainDurativeActionDetails_Response.__import_type_support__()


class GetDomainDurativeActionDetails(metaclass=Metaclass_GetDomainDurativeActionDetails):
    from plansys2_msgs.srv._get_domain_durative_action_details import GetDomainDurativeActionDetails_Request as Request
    from plansys2_msgs.srv._get_domain_durative_action_details import GetDomainDurativeActionDetails_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
