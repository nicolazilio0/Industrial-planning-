// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from plansys2_msgs:msg/Param.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "plansys2_msgs/msg/detail/param__rosidl_typesupport_introspection_c.h"
#include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "plansys2_msgs/msg/detail/param__functions.h"
#include "plansys2_msgs/msg/detail/param__struct.h"


// Include directives for member types
// Member `name`
// Member `type`
// Member `sub_types`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__msg__Param__init(message_memory);
}

void plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_fini_function(void * message_memory)
{
  plansys2_msgs__msg__Param__fini(message_memory);
}

size_t plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__size_function__Param__sub_types(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__get_const_function__Param__sub_types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__get_function__Param__sub_types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__fetch_function__Param__sub_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__get_const_function__Param__sub_types(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__assign_function__Param__sub_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__get_function__Param__sub_types(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__resize_function__Param__sub_types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Param, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Param, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sub_types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Param, sub_types),  // bytes offset in struct
    NULL,  // default value
    plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__size_function__Param__sub_types,  // size() function pointer
    plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__get_const_function__Param__sub_types,  // get_const(index) function pointer
    plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__get_function__Param__sub_types,  // get(index) function pointer
    plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__fetch_function__Param__sub_types,  // fetch(index, &value) function pointer
    plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__assign_function__Param__sub_types,  // assign(index, value) function pointer
    plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__resize_function__Param__sub_types  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_members = {
  "plansys2_msgs__msg",  // message namespace
  "Param",  // message name
  3,  // number of fields
  sizeof(plansys2_msgs__msg__Param),
  plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_member_array,  // message members
  plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_init_function,  // function to initialize message memory (memory has to be allocated)
  plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_type_support_handle = {
  0,
  &plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Param)() {
  if (!plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_type_support_handle.typesupport_identifier) {
    plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &plansys2_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif