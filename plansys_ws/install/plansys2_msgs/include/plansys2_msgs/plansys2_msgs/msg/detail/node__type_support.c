// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from plansys2_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "plansys2_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"
#include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "plansys2_msgs/msg/detail/node__functions.h"
#include "plansys2_msgs/msg/detail/node__struct.h"


// Include directives for member types
// Member `children`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `parameters`
#include "plansys2_msgs/msg/param.h"
// Member `parameters`
#include "plansys2_msgs/msg/detail/param__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__msg__Node__init(message_memory);
}

void plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_fini_function(void * message_memory)
{
  plansys2_msgs__msg__Node__fini(message_memory);
}

size_t plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__children(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__children(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__children(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__children(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__children(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__children(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__children(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__children(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__parameters(
  const void * untyped_member)
{
  const plansys2_msgs__msg__Param__Sequence * member =
    (const plansys2_msgs__msg__Param__Sequence *)(untyped_member);
  return member->size;
}

const void * plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__parameters(
  const void * untyped_member, size_t index)
{
  const plansys2_msgs__msg__Param__Sequence * member =
    (const plansys2_msgs__msg__Param__Sequence *)(untyped_member);
  return &member->data[index];
}

void * plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__parameters(
  void * untyped_member, size_t index)
{
  plansys2_msgs__msg__Param__Sequence * member =
    (plansys2_msgs__msg__Param__Sequence *)(untyped_member);
  return &member->data[index];
}

void plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const plansys2_msgs__msg__Param * item =
    ((const plansys2_msgs__msg__Param *)
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__parameters(untyped_member, index));
  plansys2_msgs__msg__Param * value =
    (plansys2_msgs__msg__Param *)(untyped_value);
  *value = *item;
}

void plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  plansys2_msgs__msg__Param * item =
    ((plansys2_msgs__msg__Param *)
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__parameters(untyped_member, index));
  const plansys2_msgs__msg__Param * value =
    (const plansys2_msgs__msg__Param *)(untyped_value);
  *item = *value;
}

bool plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__parameters(
  void * untyped_member, size_t size)
{
  plansys2_msgs__msg__Param__Sequence * member =
    (plansys2_msgs__msg__Param__Sequence *)(untyped_member);
  plansys2_msgs__msg__Param__Sequence__fini(member);
  return plansys2_msgs__msg__Param__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[9] = {
  {
    "node_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Node, node_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "expression_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Node, expression_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "modifier_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Node, modifier_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Node, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "children",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Node, children),  // bytes offset in struct
    NULL,  // default value
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__children,  // size() function pointer
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__children,  // get_const(index) function pointer
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__children,  // get(index) function pointer
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__children,  // fetch(index, &value) function pointer
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__children,  // assign(index, value) function pointer
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__children  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Node, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Node, parameters),  // bytes offset in struct
    NULL,  // default value
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__parameters,  // size() function pointer
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__parameters,  // get_const(index) function pointer
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__parameters,  // get(index) function pointer
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__parameters,  // fetch(index, &value) function pointer
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__parameters,  // assign(index, value) function pointer
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__parameters  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Node, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "negate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Node, negate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_members = {
  "plansys2_msgs__msg",  // message namespace
  "Node",  // message name
  9,  // number of fields
  sizeof(plansys2_msgs__msg__Node),
  plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array,  // message members
  plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_init_function,  // function to initialize message memory (memory has to be allocated)
  plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle = {
  0,
  &plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Node)() {
  plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Param)();
  if (!plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle.typesupport_identifier) {
    plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &plansys2_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
