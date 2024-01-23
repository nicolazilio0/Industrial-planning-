// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:msg/Param.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__PARAM__STRUCT_H_
#define PLANSYS2_MSGS__MSG__DETAIL__PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'type'
// Member 'sub_types'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Param in the package plansys2_msgs.
typedef struct plansys2_msgs__msg__Param
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String__Sequence sub_types;
} plansys2_msgs__msg__Param;

// Struct for a sequence of plansys2_msgs__msg__Param.
typedef struct plansys2_msgs__msg__Param__Sequence
{
  plansys2_msgs__msg__Param * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__msg__Param__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__PARAM__STRUCT_H_
