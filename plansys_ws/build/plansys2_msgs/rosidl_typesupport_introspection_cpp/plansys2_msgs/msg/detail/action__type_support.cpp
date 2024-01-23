// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from plansys2_msgs:msg/Action.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "plansys2_msgs/msg/detail/action__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace plansys2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Action_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) plansys2_msgs::msg::Action(_init);
}

void Action_fini_function(void * message_memory)
{
  auto typed_message = static_cast<plansys2_msgs::msg::Action *>(message_memory);
  typed_message->~Action();
}

size_t size_function__Action__parameters(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<plansys2_msgs::msg::Param> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Action__parameters(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<plansys2_msgs::msg::Param> *>(untyped_member);
  return &member[index];
}

void * get_function__Action__parameters(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<plansys2_msgs::msg::Param> *>(untyped_member);
  return &member[index];
}

void fetch_function__Action__parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const plansys2_msgs::msg::Param *>(
    get_const_function__Action__parameters(untyped_member, index));
  auto & value = *reinterpret_cast<plansys2_msgs::msg::Param *>(untyped_value);
  value = item;
}

void assign_function__Action__parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<plansys2_msgs::msg::Param *>(
    get_function__Action__parameters(untyped_member, index));
  const auto & value = *reinterpret_cast<const plansys2_msgs::msg::Param *>(untyped_value);
  item = value;
}

void resize_function__Action__parameters(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<plansys2_msgs::msg::Param> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Action_message_member_array[4] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::Action, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parameters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<plansys2_msgs::msg::Param>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::Action, parameters),  // bytes offset in struct
    nullptr,  // default value
    size_function__Action__parameters,  // size() function pointer
    get_const_function__Action__parameters,  // get_const(index) function pointer
    get_function__Action__parameters,  // get(index) function pointer
    fetch_function__Action__parameters,  // fetch(index, &value) function pointer
    assign_function__Action__parameters,  // assign(index, value) function pointer
    resize_function__Action__parameters  // resize(index) function pointer
  },
  {
    "preconditions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<plansys2_msgs::msg::Tree>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::Action, preconditions),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "effects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<plansys2_msgs::msg::Tree>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::Action, effects),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Action_message_members = {
  "plansys2_msgs::msg",  // message namespace
  "Action",  // message name
  4,  // number of fields
  sizeof(plansys2_msgs::msg::Action),
  Action_message_member_array,  // message members
  Action_init_function,  // function to initialize message memory (memory has to be allocated)
  Action_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Action_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Action_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace plansys2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plansys2_msgs::msg::Action>()
{
  return &::plansys2_msgs::msg::rosidl_typesupport_introspection_cpp::Action_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plansys2_msgs, msg, Action)() {
  return &::plansys2_msgs::msg::rosidl_typesupport_introspection_cpp::Action_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
