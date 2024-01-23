// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:srv/GetNodeDetails.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_NODE_DETAILS__TRAITS_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_NODE_DETAILS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plansys2_msgs/srv/detail/get_node_details__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace plansys2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNodeDetails_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: expression
  {
    out << "expression: ";
    rosidl_generator_traits::value_to_yaml(msg.expression, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetNodeDetails_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: expression
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expression: ";
    rosidl_generator_traits::value_to_yaml(msg.expression, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetNodeDetails_Request & msg, bool use_flow_style = false)
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
  const plansys2_msgs::srv::GetNodeDetails_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::srv::GetNodeDetails_Request & msg)
{
  return plansys2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::srv::GetNodeDetails_Request>()
{
  return "plansys2_msgs::srv::GetNodeDetails_Request";
}

template<>
inline const char * name<plansys2_msgs::srv::GetNodeDetails_Request>()
{
  return "plansys2_msgs/srv/GetNodeDetails_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetNodeDetails_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetNodeDetails_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::srv::GetNodeDetails_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'node'
#include "plansys2_msgs/msg/detail/node__traits.hpp"

namespace plansys2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNodeDetails_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: node
  {
    out << "node: ";
    to_flow_style_yaml(msg.node, out);
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
  const GetNodeDetails_Response & msg,
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

  // member: node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node:\n";
    to_block_style_yaml(msg.node, out, indentation + 2);
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

inline std::string to_yaml(const GetNodeDetails_Response & msg, bool use_flow_style = false)
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
  const plansys2_msgs::srv::GetNodeDetails_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::srv::GetNodeDetails_Response & msg)
{
  return plansys2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::srv::GetNodeDetails_Response>()
{
  return "plansys2_msgs::srv::GetNodeDetails_Response";
}

template<>
inline const char * name<plansys2_msgs::srv::GetNodeDetails_Response>()
{
  return "plansys2_msgs/srv/GetNodeDetails_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetNodeDetails_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetNodeDetails_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::srv::GetNodeDetails_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::GetNodeDetails>()
{
  return "plansys2_msgs::srv::GetNodeDetails";
}

template<>
inline const char * name<plansys2_msgs::srv::GetNodeDetails>()
{
  return "plansys2_msgs/srv/GetNodeDetails";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetNodeDetails>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::srv::GetNodeDetails_Request>::value &&
    has_fixed_size<plansys2_msgs::srv::GetNodeDetails_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetNodeDetails>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::srv::GetNodeDetails_Request>::value &&
    has_bounded_size<plansys2_msgs::srv::GetNodeDetails_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::srv::GetNodeDetails>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::srv::GetNodeDetails_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::srv::GetNodeDetails_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_NODE_DETAILS__TRAITS_HPP_
