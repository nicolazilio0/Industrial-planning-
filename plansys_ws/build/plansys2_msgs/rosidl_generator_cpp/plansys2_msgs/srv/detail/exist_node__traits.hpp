// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:srv/ExistNode.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__EXIST_NODE__TRAITS_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__EXIST_NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plansys2_msgs/srv/detail/exist_node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'node'
#include "plansys2_msgs/msg/detail/node__traits.hpp"

namespace plansys2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExistNode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: node
  {
    out << "node: ";
    to_flow_style_yaml(msg.node, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExistNode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node:\n";
    to_block_style_yaml(msg.node, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExistNode_Request & msg, bool use_flow_style = false)
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
  const plansys2_msgs::srv::ExistNode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::srv::ExistNode_Request & msg)
{
  return plansys2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::srv::ExistNode_Request>()
{
  return "plansys2_msgs::srv::ExistNode_Request";
}

template<>
inline const char * name<plansys2_msgs::srv::ExistNode_Request>()
{
  return "plansys2_msgs/srv/ExistNode_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::ExistNode_Request>
  : std::integral_constant<bool, has_fixed_size<plansys2_msgs::msg::Node>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::ExistNode_Request>
  : std::integral_constant<bool, has_bounded_size<plansys2_msgs::msg::Node>::value> {};

template<>
struct is_message<plansys2_msgs::srv::ExistNode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace plansys2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExistNode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: exist
  {
    out << "exist: ";
    rosidl_generator_traits::value_to_yaml(msg.exist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExistNode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exist: ";
    rosidl_generator_traits::value_to_yaml(msg.exist, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExistNode_Response & msg, bool use_flow_style = false)
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
  const plansys2_msgs::srv::ExistNode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::srv::ExistNode_Response & msg)
{
  return plansys2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::srv::ExistNode_Response>()
{
  return "plansys2_msgs::srv::ExistNode_Response";
}

template<>
inline const char * name<plansys2_msgs::srv::ExistNode_Response>()
{
  return "plansys2_msgs/srv/ExistNode_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::ExistNode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::ExistNode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<plansys2_msgs::srv::ExistNode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::ExistNode>()
{
  return "plansys2_msgs::srv::ExistNode";
}

template<>
inline const char * name<plansys2_msgs::srv::ExistNode>()
{
  return "plansys2_msgs/srv/ExistNode";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::ExistNode>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::srv::ExistNode_Request>::value &&
    has_fixed_size<plansys2_msgs::srv::ExistNode_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::srv::ExistNode>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::srv::ExistNode_Request>::value &&
    has_bounded_size<plansys2_msgs::srv::ExistNode_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::srv::ExistNode>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::srv::ExistNode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::srv::ExistNode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__SRV__DETAIL__EXIST_NODE__TRAITS_HPP_
