// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from plansys2_msgs:msg/Knowledge.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "plansys2_msgs/msg/detail/knowledge__rosidl_typesupport_introspection_c.h"
#include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "plansys2_msgs/msg/detail/knowledge__functions.h"
#include "plansys2_msgs/msg/detail/knowledge__struct.h"


// Include directives for member types
// Member `instances`
// Member `predicates`
// Member `functions`
// Member `goal`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__Knowledge_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__msg__Knowledge__init(message_memory);
}

void plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__Knowledge_fini_function(void * message_memory)
{
  plansys2_msgs__msg__Knowledge__fini(message_memory);
}

size_t plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__size_function__Knowledge__instances(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_const_function__Knowledge__instances(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_function__Knowledge__instances(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__fetch_function__Knowledge__instances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_const_function__Knowledge__instances(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__assign_function__Knowledge__instances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_function__Knowledge__instances(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__resize_function__Knowledge__instances(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__size_function__Knowledge__predicates(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_const_function__Knowledge__predicates(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_function__Knowledge__predicates(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__fetch_function__Knowledge__predicates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_const_function__Knowledge__predicates(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__assign_function__Knowledge__predicates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_function__Knowledge__predicates(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__resize_function__Knowledge__predicates(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__size_function__Knowledge__functions(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_const_function__Knowledge__functions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_function__Knowledge__functions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__fetch_function__Knowledge__functions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_const_function__Knowledge__functions(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__assign_function__Knowledge__functions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_function__Knowledge__functions(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__resize_function__Knowledge__functions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__Knowledge_message_member_array[4] = {
  {
    "instances",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Knowledge, instances),  // bytes offset in struct
    NULL,  // default value
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__size_function__Knowledge__instances,  // size() function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_const_function__Knowledge__instances,  // get_const(index) function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_function__Knowledge__instances,  // get(index) function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__fetch_function__Knowledge__instances,  // fetch(index, &value) function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__assign_function__Knowledge__instances,  // assign(index, value) function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__resize_function__Knowledge__instances  // resize(index) function pointer
  },
  {
    "predicates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Knowledge, predicates),  // bytes offset in struct
    NULL,  // default value
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__size_function__Knowledge__predicates,  // size() function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_const_function__Knowledge__predicates,  // get_const(index) function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_function__Knowledge__predicates,  // get(index) function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__fetch_function__Knowledge__predicates,  // fetch(index, &value) function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__assign_function__Knowledge__predicates,  // assign(index, value) function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__resize_function__Knowledge__predicates  // resize(index) function pointer
  },
  {
    "functions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Knowledge, functions),  // bytes offset in struct
    NULL,  // default value
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__size_function__Knowledge__functions,  // size() function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_const_function__Knowledge__functions,  // get_const(index) function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__get_function__Knowledge__functions,  // get(index) function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__fetch_function__Knowledge__functions,  // fetch(index, &value) function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__assign_function__Knowledge__functions,  // assign(index, value) function pointer
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__resize_function__Knowledge__functions  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Knowledge, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__Knowledge_message_members = {
  "plansys2_msgs__msg",  // message namespace
  "Knowledge",  // message name
  4,  // number of fields
  sizeof(plansys2_msgs__msg__Knowledge),
  plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__Knowledge_message_member_array,  // message members
  plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__Knowledge_init_function,  // function to initialize message memory (memory has to be allocated)
  plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__Knowledge_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__Knowledge_message_type_support_handle = {
  0,
  &plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__Knowledge_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Knowledge)() {
  if (!plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__Knowledge_message_type_support_handle.typesupport_identifier) {
    plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__Knowledge_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &plansys2_msgs__msg__Knowledge__rosidl_typesupport_introspection_c__Knowledge_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
