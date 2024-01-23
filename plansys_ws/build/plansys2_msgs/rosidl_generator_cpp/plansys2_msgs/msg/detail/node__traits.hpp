// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plansys2_msgs/msg/detail/node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'parameters'
#include "plansys2_msgs/msg/detail/param__traits.hpp"

namespace plansys2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Node & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_type
  {
    out << "node_type: ";
    rosidl_generator_traits::value_to_yaml(msg.node_type, out);
    out << ", ";
  }

  // member: expression_type
  {
    out << "expression_type: ";
    rosidl_generator_traits::value_to_yaml(msg.expression_type, out);
    out << ", ";
  }

  // member: modifier_type
  {
    out << "modifier_type: ";
    rosidl_generator_traits::value_to_yaml(msg.modifier_type, out);
    out << ", ";
  }

  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: children
  {
    if (msg.children.size() == 0) {
      out << "children: []";
    } else {
      out << "children: [";
      size_t pending_items = msg.children.size();
      for (auto item : msg.children) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

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

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: negate
  {
    out << "negate: ";
    rosidl_generator_traits::value_to_yaml(msg.negate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Node & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_type: ";
    rosidl_generator_traits::value_to_yaml(msg.node_type, out);
    out << "\n";
  }

  // member: expression_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expression_type: ";
    rosidl_generator_traits::value_to_yaml(msg.expression_type, out);
    out << "\n";
  }

  // member: modifier_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "modifier_type: ";
    rosidl_generator_traits::value_to_yaml(msg.modifier_type, out);
    out << "\n";
  }

  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: children
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.children.size() == 0) {
      out << "children: []\n";
    } else {
      out << "children:\n";
      for (auto item : msg.children) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

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

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: negate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "negate: ";
    rosidl_generator_traits::value_to_yaml(msg.negate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Node & msg, bool use_flow_style = false)
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
  const plansys2_msgs::msg::Node & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::msg::Node & msg)
{
  return plansys2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::msg::Node>()
{
  return "plansys2_msgs::msg::Node";
}

template<>
inline const char * name<plansys2_msgs::msg::Node>()
{
  return "plansys2_msgs/msg/Node";
}

template<>
struct has_fixed_size<plansys2_msgs::msg::Node>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::msg::Node>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::msg::Node>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_
