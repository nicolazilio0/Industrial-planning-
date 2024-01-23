// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:srv/GetDomainActionDetails.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_DOMAIN_ACTION_DETAILS__TRAITS_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_DOMAIN_ACTION_DETAILS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plansys2_msgs/srv/detail/get_domain_action_details__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace plansys2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDomainActionDetails_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
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
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const GetDomainActionDetails_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
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
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDomainActionDetails_Request & msg, bool use_flow_style = false)
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
  const plansys2_msgs::srv::GetDomainActionDetails_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::srv::GetDomainActionDetails_Request & msg)
{
  return plansys2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::srv::GetDomainActionDetails_Request>()
{
  return "plansys2_msgs::srv::GetDomainActionDetails_Request";
}

template<>
inline const char * name<plansys2_msgs::srv::GetDomainActionDetails_Request>()
{
  return "plansys2_msgs/srv/GetDomainActionDetails_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetDomainActionDetails_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetDomainActionDetails_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::srv::GetDomainActionDetails_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'action'
#include "plansys2_msgs/msg/detail/action__traits.hpp"

namespace plansys2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDomainActionDetails_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    to_flow_style_yaml(msg.action, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
  const GetDomainActionDetails_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action:\n";
    to_block_style_yaml(msg.action, out, indentation + 2);
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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

inline std::string to_yaml(const GetDomainActionDetails_Response & msg, bool use_flow_style = false)
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
  const plansys2_msgs::srv::GetDomainActionDetails_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::srv::GetDomainActionDetails_Response & msg)
{
  return plansys2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::srv::GetDomainActionDetails_Response>()
{
  return "plansys2_msgs::srv::GetDomainActionDetails_Response";
}

template<>
inline const char * name<plansys2_msgs::srv::GetDomainActionDetails_Response>()
{
  return "plansys2_msgs/srv/GetDomainActionDetails_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetDomainActionDetails_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetDomainActionDetails_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::srv::GetDomainActionDetails_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::GetDomainActionDetails>()
{
  return "plansys2_msgs::srv::GetDomainActionDetails";
}

template<>
inline const char * name<plansys2_msgs::srv::GetDomainActionDetails>()
{
  return "plansys2_msgs/srv/GetDomainActionDetails";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetDomainActionDetails>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::srv::GetDomainActionDetails_Request>::value &&
    has_fixed_size<plansys2_msgs::srv::GetDomainActionDetails_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetDomainActionDetails>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::srv::GetDomainActionDetails_Request>::value &&
    has_bounded_size<plansys2_msgs::srv::GetDomainActionDetails_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::srv::GetDomainActionDetails>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::srv::GetDomainActionDetails_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::srv::GetDomainActionDetails_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_DOMAIN_ACTION_DETAILS__TRAITS_HPP_
