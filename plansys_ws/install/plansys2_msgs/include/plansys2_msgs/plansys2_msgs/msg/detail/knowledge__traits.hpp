// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:msg/Knowledge.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__TRAITS_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plansys2_msgs/msg/detail/knowledge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace plansys2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Knowledge & msg,
  std::ostream & out)
{
  out << "{";
  // member: instances
  {
    if (msg.instances.size() == 0) {
      out << "instances: []";
    } else {
      out << "instances: [";
      size_t pending_items = msg.instances.size();
      for (auto item : msg.instances) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: predicates
  {
    if (msg.predicates.size() == 0) {
      out << "predicates: []";
    } else {
      out << "predicates: [";
      size_t pending_items = msg.predicates.size();
      for (auto item : msg.predicates) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: functions
  {
    if (msg.functions.size() == 0) {
      out << "functions: []";
    } else {
      out << "functions: [";
      size_t pending_items = msg.functions.size();
      for (auto item : msg.functions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    rosidl_generator_traits::value_to_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Knowledge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: instances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.instances.size() == 0) {
      out << "instances: []\n";
    } else {
      out << "instances:\n";
      for (auto item : msg.instances) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: predicates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.predicates.size() == 0) {
      out << "predicates: []\n";
    } else {
      out << "predicates:\n";
      for (auto item : msg.predicates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: functions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.functions.size() == 0) {
      out << "functions: []\n";
    } else {
      out << "functions:\n";
      for (auto item : msg.functions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal: ";
    rosidl_generator_traits::value_to_yaml(msg.goal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Knowledge & msg, bool use_flow_style = false)
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
  const plansys2_msgs::msg::Knowledge & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::msg::Knowledge & msg)
{
  return plansys2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::msg::Knowledge>()
{
  return "plansys2_msgs::msg::Knowledge";
}

template<>
inline const char * name<plansys2_msgs::msg::Knowledge>()
{
  return "plansys2_msgs/msg/Knowledge";
}

template<>
struct has_fixed_size<plansys2_msgs::msg::Knowledge>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::msg::Knowledge>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::msg::Knowledge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__TRAITS_HPP_
