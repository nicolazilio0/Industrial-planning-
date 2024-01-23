// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from plansys2_msgs:srv/GetOrderedSubGoals.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "plansys2_msgs/srv/detail/get_ordered_sub_goals__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace plansys2_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetOrderedSubGoals_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetOrderedSubGoals_Request_type_support_ids_t;

static const _GetOrderedSubGoals_Request_type_support_ids_t _GetOrderedSubGoals_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetOrderedSubGoals_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetOrderedSubGoals_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetOrderedSubGoals_Request_type_support_symbol_names_t _GetOrderedSubGoals_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plansys2_msgs, srv, GetOrderedSubGoals_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plansys2_msgs, srv, GetOrderedSubGoals_Request)),
  }
};

typedef struct _GetOrderedSubGoals_Request_type_support_data_t
{
  void * data[2];
} _GetOrderedSubGoals_Request_type_support_data_t;

static _GetOrderedSubGoals_Request_type_support_data_t _GetOrderedSubGoals_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetOrderedSubGoals_Request_message_typesupport_map = {
  2,
  "plansys2_msgs",
  &_GetOrderedSubGoals_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetOrderedSubGoals_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetOrderedSubGoals_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetOrderedSubGoals_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetOrderedSubGoals_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace plansys2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plansys2_msgs::srv::GetOrderedSubGoals_Request>()
{
  return &::plansys2_msgs::srv::rosidl_typesupport_cpp::GetOrderedSubGoals_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, plansys2_msgs, srv, GetOrderedSubGoals_Request)() {
  return get_message_type_support_handle<plansys2_msgs::srv::GetOrderedSubGoals_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "plansys2_msgs/srv/detail/get_ordered_sub_goals__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace plansys2_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetOrderedSubGoals_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetOrderedSubGoals_Response_type_support_ids_t;

static const _GetOrderedSubGoals_Response_type_support_ids_t _GetOrderedSubGoals_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetOrderedSubGoals_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetOrderedSubGoals_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetOrderedSubGoals_Response_type_support_symbol_names_t _GetOrderedSubGoals_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plansys2_msgs, srv, GetOrderedSubGoals_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plansys2_msgs, srv, GetOrderedSubGoals_Response)),
  }
};

typedef struct _GetOrderedSubGoals_Response_type_support_data_t
{
  void * data[2];
} _GetOrderedSubGoals_Response_type_support_data_t;

static _GetOrderedSubGoals_Response_type_support_data_t _GetOrderedSubGoals_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetOrderedSubGoals_Response_message_typesupport_map = {
  2,
  "plansys2_msgs",
  &_GetOrderedSubGoals_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetOrderedSubGoals_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetOrderedSubGoals_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetOrderedSubGoals_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetOrderedSubGoals_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace plansys2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plansys2_msgs::srv::GetOrderedSubGoals_Response>()
{
  return &::plansys2_msgs::srv::rosidl_typesupport_cpp::GetOrderedSubGoals_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, plansys2_msgs, srv, GetOrderedSubGoals_Response)() {
  return get_message_type_support_handle<plansys2_msgs::srv::GetOrderedSubGoals_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "plansys2_msgs/srv/detail/get_ordered_sub_goals__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace plansys2_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetOrderedSubGoals_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetOrderedSubGoals_type_support_ids_t;

static const _GetOrderedSubGoals_type_support_ids_t _GetOrderedSubGoals_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetOrderedSubGoals_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetOrderedSubGoals_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetOrderedSubGoals_type_support_symbol_names_t _GetOrderedSubGoals_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plansys2_msgs, srv, GetOrderedSubGoals)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plansys2_msgs, srv, GetOrderedSubGoals)),
  }
};

typedef struct _GetOrderedSubGoals_type_support_data_t
{
  void * data[2];
} _GetOrderedSubGoals_type_support_data_t;

static _GetOrderedSubGoals_type_support_data_t _GetOrderedSubGoals_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetOrderedSubGoals_service_typesupport_map = {
  2,
  "plansys2_msgs",
  &_GetOrderedSubGoals_service_typesupport_ids.typesupport_identifier[0],
  &_GetOrderedSubGoals_service_typesupport_symbol_names.symbol_name[0],
  &_GetOrderedSubGoals_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetOrderedSubGoals_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetOrderedSubGoals_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace plansys2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<plansys2_msgs::srv::GetOrderedSubGoals>()
{
  return &::plansys2_msgs::srv::rosidl_typesupport_cpp::GetOrderedSubGoals_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
