// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION__TRAITS_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plansys2_msgs/msg/detail/action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'parameters'
#include "plansys2_msgs/msg/detail/param__traits.hpp"
// Member 'preconditions'
// Member 'effects'
#include "plansys2_msgs/msg/detail/tree__traits.hpp"

namespace plansys2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Action & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: parameters
  {
    if (msg.parameters.size() == 0) {
      out << "parameters: []";
    } else {
      out << "parameters: [";
      size_t pending_items = msg.parameters.size();
      for (auto item : msg.parameters) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: preconditions
  {
    out << "preconditions: ";
    to_flow_style_yaml(msg.preconditions, out);
    out << ", ";
  }

  // member: effects
  {
    out << "effects: ";
    to_flow_style_yaml(msg.effects, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parameters.size() == 0) {
      out << "parameters: []\n";
    } else {
      out << "parameters:\n";
      for (auto item : msg.parameters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: preconditions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preconditions:\n";
    to_block_style_yaml(msg.preconditions, out, indentation + 2);
  }

  // member: effects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effects:\n";
    to_block_style_yaml(msg.effects, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace plansys2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use plansys2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plansys2_msgs::msg::Action & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::msg::Action & msg)
{
  return plansys2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::msg::Action>()
{
  return "plansys2_msgs::msg::Action";
}

template<>
inline const char * name<plansys2_msgs::msg::Action>()
{
  return "plansys2_msgs/msg/Action";
}

template<>
struct has_fixed_size<plansys2_msgs::msg::Action>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::msg::Action>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::msg::Action>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION__TRAITS_HPP_
