// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:msg/ActionExecutionInfo.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__TRAITS_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plansys2_msgs/msg/detail/action_execution_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_stamp'
// Member 'status_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace plansys2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionExecutionInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: start_stamp
  {
    out << "start_stamp: ";
    to_flow_style_yaml(msg.start_stamp, out);
    out << ", ";
  }

  // member: status_stamp
  {
    out << "status_stamp: ";
    to_flow_style_yaml(msg.status_stamp, out);
    out << ", ";
  }

  // member: action_full_name
  {
    out << "action_full_name: ";
    rosidl_generator_traits::value_to_yaml(msg.action_full_name, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: arguments
  {
    if (msg.arguments.size() == 0) {
      out << "arguments: []";
    } else {
      out << "arguments: [";
      size_t pending_items = msg.arguments.size();
      for (auto item : msg.arguments) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    to_flow_style_yaml(msg.duration, out);
    out << ", ";
  }

  // member: completion
  {
    out << "completion: ";
    rosidl_generator_traits::value_to_yaml(msg.completion, out);
    out << ", ";
  }

  // member: message_status
  {
    out << "message_status: ";
    rosidl_generator_traits::value_to_yaml(msg.message_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionExecutionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: start_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_stamp:\n";
    to_block_style_yaml(msg.start_stamp, out, indentation + 2);
  }

  // member: status_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_stamp:\n";
    to_block_style_yaml(msg.status_stamp, out, indentation + 2);
  }

  // member: action_full_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_full_name: ";
    rosidl_generator_traits::value_to_yaml(msg.action_full_name, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: arguments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arguments.size() == 0) {
      out << "arguments: []\n";
    } else {
      out << "arguments:\n";
      for (auto item : msg.arguments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_block_style_yaml(msg.duration, out, indentation + 2);
  }

  // member: completion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completion: ";
    rosidl_generator_traits::value_to_yaml(msg.completion, out);
    out << "\n";
  }

  // member: message_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_status: ";
    rosidl_generator_traits::value_to_yaml(msg.message_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionExecutionInfo & msg, bool use_flow_style = false)
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
  const plansys2_msgs::msg::ActionExecutionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::msg::ActionExecutionInfo & msg)
{
  return plansys2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::msg::ActionExecutionInfo>()
{
  return "plansys2_msgs::msg::ActionExecutionInfo";
}

template<>
inline const char * name<plansys2_msgs::msg::ActionExecutionInfo>()
{
  return "plansys2_msgs/msg/ActionExecutionInfo";
}

template<>
struct has_fixed_size<plansys2_msgs::msg::ActionExecutionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::msg::ActionExecutionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::msg::ActionExecutionInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__TRAITS_HPP_
