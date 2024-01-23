// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:msg/Tree.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__TREE__TRAITS_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__TREE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plansys2_msgs/msg/detail/tree__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'nodes'
#include "plansys2_msgs/msg/detail/node__traits.hpp"

namespace plansys2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Tree & msg,
  std::ostream & out)
{
  out << "{";
  // member: nodes
  {
    if (msg.nodes.size() == 0) {
      out << "nodes: []";
    } else {
      out << "nodes: [";
      size_t pending_items = msg.nodes.size();
      for (auto item : msg.nodes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Tree & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nodes.size() == 0) {
      out << "nodes: []\n";
    } else {
      out << "nodes:\n";
      for (auto item : msg.nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Tree & msg, bool use_flow_style = false)
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
  const plansys2_msgs::msg::Tree & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::msg::Tree & msg)
{
  return plansys2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::msg::Tree>()
{
  return "plansys2_msgs::msg::Tree";
}

template<>
inline const char * name<plansys2_msgs::msg::Tree>()
{
  return "plansys2_msgs/msg/Tree";
}

template<>
struct has_fixed_size<plansys2_msgs::msg::Tree>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::msg::Tree>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::msg::Tree>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__MSG__DETAIL__TREE__TRAITS_HPP_
