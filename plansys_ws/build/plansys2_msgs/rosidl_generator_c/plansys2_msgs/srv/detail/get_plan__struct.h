// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_H_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'domain'
// Member 'problem'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetPlan in the package plansys2_msgs.
typedef struct plansys2_msgs__srv__GetPlan_Request
{
  rosidl_runtime_c__String domain;
  rosidl_runtime_c__String problem;
} plansys2_msgs__srv__GetPlan_Request;

// Struct for a sequence of plansys2_msgs__srv__GetPlan_Request.
typedef struct plansys2_msgs__srv__GetPlan_Request__Sequence
{
  plansys2_msgs__srv__GetPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__srv__GetPlan_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'plan'
#include "plansys2_msgs/msg/detail/plan__struct.h"
// Member 'error_info'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetPlan in the package plansys2_msgs.
typedef struct plansys2_msgs__srv__GetPlan_Response
{
  bool success;
  plansys2_msgs__msg__Plan plan;
  rosidl_runtime_c__String error_info;
} plansys2_msgs__srv__GetPlan_Response;

// Struct for a sequence of plansys2_msgs__srv__GetPlan_Response.
typedef struct plansys2_msgs__srv__GetPlan_Response__Sequence
{
  plansys2_msgs__srv__GetPlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__srv__GetPlan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_H_
