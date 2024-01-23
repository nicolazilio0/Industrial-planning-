// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from plansys2_msgs:msg/PlanItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "plansys2_msgs/msg/detail/plan_item__rosidl_typesupport_introspection_c.h"
#include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "plansys2_msgs/msg/detail/plan_item__functions.h"
#include "plansys2_msgs/msg/detail/plan_item__struct.h"


// Include directives for member types
// Member `action`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void plansys2_msgs__msg__PlanItem__rosidl_typesupport_introspection_c__PlanItem_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__msg__PlanItem__init(message_memory);
}

void plansys2_msgs__msg__PlanItem__rosidl_typesupport_introspection_c__PlanItem_fini_function(void * message_memory)
{
  plansys2_msgs__msg__PlanItem__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember plansys2_msgs__msg__PlanItem__rosidl_typesupport_introspection_c__PlanItem_message_member_array[3] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__PlanItem, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__PlanItem, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__PlanItem, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers plansys2_msgs__msg__PlanItem__rosidl_typesupport_introspection_c__PlanItem_message_members = {
  "plansys2_msgs__msg",  // message namespace
  "PlanItem",  // message name
  3,  // number of fields
  sizeof(plansys2_msgs__msg__PlanItem),
  plansys2_msgs__msg__PlanItem__rosidl_typesupport_introspection_c__PlanItem_message_member_array,  // message members
  plansys2_msgs__msg__PlanItem__rosidl_typesupport_introspection_c__PlanItem_init_function,  // function to initialize message memory (memory has to be allocated)
  plansys2_msgs__msg__PlanItem__rosidl_typesupport_introspection_c__PlanItem_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t plansys2_msgs__msg__PlanItem__rosidl_typesupport_introspection_c__PlanItem_message_type_support_handle = {
  0,
  &plansys2_msgs__msg__PlanItem__rosidl_typesupport_introspection_c__PlanItem_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, PlanItem)() {
  if (!plansys2_msgs__msg__PlanItem__rosidl_typesupport_introspection_c__PlanItem_message_type_support_handle.typesupport_identifier) {
    plansys2_msgs__msg__PlanItem__rosidl_typesupport_introspection_c__PlanItem_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &plansys2_msgs__msg__PlanItem__rosidl_typesupport_introspection_c__PlanItem_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
