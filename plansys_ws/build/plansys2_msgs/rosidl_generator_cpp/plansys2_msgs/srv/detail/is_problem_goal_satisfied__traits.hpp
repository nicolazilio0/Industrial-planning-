// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:srv/IsProblemGoalSatisfied.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__IS_PROBLEM_GOAL_SATISFIED__TRAITS_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__IS_PROBLEM_GOAL_SATISFIED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plansys2_msgs/srv/detail/is_problem_goal_satisfied__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tree'
#include "plansys2_msgs/msg/detail/tree__traits.hpp"

namespace plansys2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsProblemGoalSatisfied_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: tree
  {
    out << "tree: ";
    to_flow_style_yaml(msg.tree, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsProblemGoalSatisfied_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tree:\n";
    to_block_style_yaml(msg.tree, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsProblemGoalSatisfied_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace plansys2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use plansys2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plansys2_msgs::srv::IsProblemGoalSatisfied_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::srv::IsProblemGoalSatisfied_Request & msg)
{
  return plansys2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>()
{
  return "plansys2_msgs::srv::IsProblemGoalSatisfied_Request";
}

template<>
inline const char * name<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>()
{
  return "plansys2_msgs/srv/IsProblemGoalSatisfied_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>
  : std::integral_constant<bool, has_fixed_size<plansys2_msgs::msg::Tree>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>
  : std::integral_constant<bool, has_bounded_size<plansys2_msgs::msg::Tree>::value> {};

template<>
struct is_message<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace plansys2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsProblemGoalSatisfied_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: satisfied
  {
    out << "satisfied: ";
    rosidl_generator_traits::value_to_yaml(msg.satisfied, out);
    out << ", ";
  }

  // member: error_info
  {
    out << "error_info: ";
    rosidl_generator_traits::value_to_yaml(msg.error_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsProblemGoalSatisfied_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: satisfied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "satisfied: ";
    rosidl_generator_traits::value_to_yaml(msg.satisfied, out);
    out << "\n";
  }

  // member: error_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_info: ";
    rosidl_generator_traits::value_to_yaml(msg.error_info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsProblemGoalSatisfied_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace plansys2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use plansys2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plansys2_msgs::srv::IsProblemGoalSatisfied_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::srv::IsProblemGoalSatisfied_Response & msg)
{
  return plansys2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>()
{
  return "plansys2_msgs::srv::IsProblemGoalSatisfied_Response";
}

template<>
inline const char * name<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>()
{
  return "plansys2_msgs/srv/IsProblemGoalSatisfied_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::IsProblemGoalSatisfied>()
{
  return "plansys2_msgs::srv::IsProblemGoalSatisfied";
}

template<>
inline const char * name<plansys2_msgs::srv::IsProblemGoalSatisfied>()
{
  return "plansys2_msgs/srv/IsProblemGoalSatisfied";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::IsProblemGoalSatisfied>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>::value &&
    has_fixed_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::srv::IsProblemGoalSatisfied>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>::value &&
    has_bounded_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::srv::IsProblemGoalSatisfied>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__SRV__DETAIL__IS_PROBLEM_GOAL_SATISFIED__TRAITS_HPP_
