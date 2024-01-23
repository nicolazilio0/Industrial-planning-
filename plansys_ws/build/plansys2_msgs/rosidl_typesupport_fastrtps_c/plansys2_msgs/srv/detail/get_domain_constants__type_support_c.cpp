// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from plansys2_msgs:srv/GetDomainConstants.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/srv/detail/get_domain_constants__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "plansys2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "plansys2_msgs/srv/detail/get_domain_constants__struct.h"
#include "plansys2_msgs/srv/detail/get_domain_constants__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // type
#include "rosidl_runtime_c/string_functions.h"  // type

// forward declare type support functions


using _GetDomainConstants_Request__ros_msg_type = plansys2_msgs__srv__GetDomainConstants_Request;

static bool _GetDomainConstants_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetDomainConstants_Request__ros_msg_type * ros_message = static_cast<const _GetDomainConstants_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    const rosidl_runtime_c__String * str = &ros_message->type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetDomainConstants_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetDomainConstants_Request__ros_msg_type * ros_message = static_cast<_GetDomainConstants_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type.data) {
      rosidl_runtime_c__String__init(&ros_message->type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t get_serialized_size_plansys2_msgs__srv__GetDomainConstants_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetDomainConstants_Request__ros_msg_type * ros_message = static_cast<const _GetDomainConstants_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetDomainConstants_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__srv__GetDomainConstants_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__srv__GetDomainConstants_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = plansys2_msgs__srv__GetDomainConstants_Request;
    is_plain =
      (
      offsetof(DataType, type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetDomainConstants_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_plansys2_msgs__srv__GetDomainConstants_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetDomainConstants_Request = {
  "plansys2_msgs::srv",
  "GetDomainConstants_Request",
  _GetDomainConstants_Request__cdr_serialize,
  _GetDomainConstants_Request__cdr_deserialize,
  _GetDomainConstants_Request__get_serialized_size,
  _GetDomainConstants_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetDomainConstants_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetDomainConstants_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetDomainConstants_Request)() {
  return &_GetDomainConstants_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "plansys2_msgs/srv/detail/get_domain_constants__struct.h"
// already included above
// #include "plansys2_msgs/srv/detail/get_domain_constants__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // constants, error_info
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // constants, error_info

// forward declare type support functions


using _GetDomainConstants_Response__ros_msg_type = plansys2_msgs__srv__GetDomainConstants_Response;

static bool _GetDomainConstants_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetDomainConstants_Response__ros_msg_type * ros_message = static_cast<const _GetDomainConstants_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: constants
  {
    size_t size = ros_message->constants.size;
    auto array_ptr = ros_message->constants.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: error_info
  {
    const rosidl_runtime_c__String * str = &ros_message->error_info;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetDomainConstants_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetDomainConstants_Response__ros_msg_type * ros_message = static_cast<_GetDomainConstants_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: constants
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->constants.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->constants);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->constants, size)) {
      fprintf(stderr, "failed to create array for field 'constants'");
      return false;
    }
    auto array_ptr = ros_message->constants.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'constants'\n");
        return false;
      }
    }
  }

  // Field name: error_info
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_info.data) {
      rosidl_runtime_c__String__init(&ros_message->error_info);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_info,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_info'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t get_serialized_size_plansys2_msgs__srv__GetDomainConstants_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetDomainConstants_Response__ros_msg_type * ros_message = static_cast<const _GetDomainConstants_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name constants
  {
    size_t array_size = ros_message->constants.size;
    auto array_ptr = ros_message->constants.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name error_info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_info.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetDomainConstants_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__srv__GetDomainConstants_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__srv__GetDomainConstants_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: constants
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: error_info
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = plansys2_msgs__srv__GetDomainConstants_Response;
    is_plain =
      (
      offsetof(DataType, error_info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetDomainConstants_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_plansys2_msgs__srv__GetDomainConstants_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetDomainConstants_Response = {
  "plansys2_msgs::srv",
  "GetDomainConstants_Response",
  _GetDomainConstants_Response__cdr_serialize,
  _GetDomainConstants_Response__cdr_deserialize,
  _GetDomainConstants_Response__get_serialized_size,
  _GetDomainConstants_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetDomainConstants_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetDomainConstants_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetDomainConstants_Response)() {
  return &_GetDomainConstants_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "plansys2_msgs/srv/get_domain_constants.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetDomainConstants__callbacks = {
  "plansys2_msgs::srv",
  "GetDomainConstants",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetDomainConstants_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetDomainConstants_Response)(),
};

static rosidl_service_type_support_t GetDomainConstants__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetDomainConstants__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetDomainConstants)() {
  return &GetDomainConstants__handle;
}

#if defined(__cplusplus)
}
#endif
