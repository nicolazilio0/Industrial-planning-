// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:action/ExecutePlan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__TRAITS_HPP_
#define PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plansys2_msgs/action/detail/execute_plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'plan'
#include "plansys2_msgs/msg/detail/plan__traits.hpp"

namespace plansys2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePlan_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: plan
  {
    out << "plan: ";
    to_flow_style_yaml(msg.plan, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutePlan_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: plan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan:\n";
    to_block_style_yaml(msg.plan, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePlan_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace plansys2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use plansys2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plansys2_msgs::action::ExecutePlan_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::action::ExecutePlan_Goal & msg)
{
  return plansys2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_Goal>()
{
  return "plansys2_msgs::action::ExecutePlan_Goal";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_Goal>()
{
  return "plansys2_msgs/action/ExecutePlan_Goal";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_Goal>
  : std::integral_constant<bool, has_fixed_size<plansys2_msgs::msg::Plan>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_Goal>
  : std::integral_constant<bool, has_bounded_size<plansys2_msgs::msg::Plan>::value> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'action_execution_status'
#include "plansys2_msgs/msg/detail/action_execution_info__traits.hpp"

namespace plansys2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePlan_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: action_execution_status
  {
    if (msg.action_execution_status.size() == 0) {
      out << "action_execution_status: []";
    } else {
      out << "action_execution_status: [";
      size_t pending_items = msg.action_execution_status.size();
      for (auto item : msg.action_execution_status) {
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
  const ExecutePlan_Result & msg,
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

  // member: action_execution_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.action_execution_status.size() == 0) {
      out << "action_execution_status: []\n";
    } else {
      out << "action_execution_status:\n";
      for (auto item : msg.action_execution_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePlan_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace plansys2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use plansys2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plansys2_msgs::action::ExecutePlan_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::action::ExecutePlan_Result & msg)
{
  return plansys2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_Result>()
{
  return "plansys2_msgs::action::ExecutePlan_Result";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_Result>()
{
  return "plansys2_msgs/action/ExecutePlan_Result";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'action_execution_status'
// already included above
// #include "plansys2_msgs/msg/detail/action_execution_info__traits.hpp"

namespace plansys2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePlan_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: action_execution_status
  {
    if (msg.action_execution_status.size() == 0) {
      out << "action_execution_status: []";
    } else {
      out << "action_execution_status: [";
      size_t pending_items = msg.action_execution_status.size();
      for (auto item : msg.action_execution_status) {
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
  const ExecutePlan_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action_execution_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.action_execution_status.size() == 0) {
      out << "action_execution_status: []\n";
    } else {
      out << "action_execution_status:\n";
      for (auto item : msg.action_execution_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePlan_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace plansys2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use plansys2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plansys2_msgs::action::ExecutePlan_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::action::ExecutePlan_Feedback & msg)
{
  return plansys2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_Feedback>()
{
  return "plansys2_msgs::action::ExecutePlan_Feedback";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_Feedback>()
{
  return "plansys2_msgs/action/ExecutePlan_Feedback";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "plansys2_msgs/action/detail/execute_plan__traits.hpp"

namespace plansys2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePlan_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutePlan_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePlan_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace plansys2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use plansys2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plansys2_msgs::action::ExecutePlan_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::action::ExecutePlan_SendGoal_Request & msg)
{
  return plansys2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_SendGoal_Request>()
{
  return "plansys2_msgs::action::ExecutePlan_SendGoal_Request";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_SendGoal_Request>()
{
  return "plansys2_msgs/action/ExecutePlan_SendGoal_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<plansys2_msgs::action::ExecutePlan_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<plansys2_msgs::action::ExecutePlan_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace plansys2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePlan_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutePlan_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePlan_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace plansys2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use plansys2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plansys2_msgs::action::ExecutePlan_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::action::ExecutePlan_SendGoal_Response & msg)
{
  return plansys2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_SendGoal_Response>()
{
  return "plansys2_msgs::action::ExecutePlan_SendGoal_Response";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_SendGoal_Response>()
{
  return "plansys2_msgs/action/ExecutePlan_SendGoal_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_SendGoal>()
{
  return "plansys2_msgs::action::ExecutePlan_SendGoal";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_SendGoal>()
{
  return "plansys2_msgs/action/ExecutePlan_SendGoal";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::action::ExecutePlan_SendGoal_Request>::value &&
    has_fixed_size<plansys2_msgs::action::ExecutePlan_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::action::ExecutePlan_SendGoal_Request>::value &&
    has_bounded_size<plansys2_msgs::action::ExecutePlan_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::action::ExecutePlan_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::action::ExecutePlan_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::action::ExecutePlan_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace plansys2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePlan_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutePlan_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePlan_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace plansys2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use plansys2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plansys2_msgs::action::ExecutePlan_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::action::ExecutePlan_GetResult_Request & msg)
{
  return plansys2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_GetResult_Request>()
{
  return "plansys2_msgs::action::ExecutePlan_GetResult_Request";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_GetResult_Request>()
{
  return "plansys2_msgs/action/ExecutePlan_GetResult_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__traits.hpp"

namespace plansys2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePlan_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutePlan_GetResult_Response & msg,
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

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePlan_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace plansys2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use plansys2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plansys2_msgs::action::ExecutePlan_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::action::ExecutePlan_GetResult_Response & msg)
{
  return plansys2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_GetResult_Response>()
{
  return "plansys2_msgs::action::ExecutePlan_GetResult_Response";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_GetResult_Response>()
{
  return "plansys2_msgs/action/ExecutePlan_GetResult_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<plansys2_msgs::action::ExecutePlan_Result>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<plansys2_msgs::action::ExecutePlan_Result>::value> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_GetResult>()
{
  return "plansys2_msgs::action::ExecutePlan_GetResult";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_GetResult>()
{
  return "plansys2_msgs/action/ExecutePlan_GetResult";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::action::ExecutePlan_GetResult_Request>::value &&
    has_fixed_size<plansys2_msgs::action::ExecutePlan_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::action::ExecutePlan_GetResult_Request>::value &&
    has_bounded_size<plansys2_msgs::action::ExecutePlan_GetResult_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::action::ExecutePlan_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::action::ExecutePlan_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::action::ExecutePlan_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__traits.hpp"

namespace plansys2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePlan_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutePlan_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePlan_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace plansys2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use plansys2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plansys2_msgs::action::ExecutePlan_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  plansys2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plansys2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const plansys2_msgs::action::ExecutePlan_FeedbackMessage & msg)
{
  return plansys2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_FeedbackMessage>()
{
  return "plansys2_msgs::action::ExecutePlan_FeedbackMessage";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_FeedbackMessage>()
{
  return "plansys2_msgs/action/ExecutePlan_FeedbackMessage";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<plansys2_msgs::action::ExecutePlan_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<plansys2_msgs::action::ExecutePlan_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<plansys2_msgs::action::ExecutePlan>
  : std::true_type
{
};

template<>
struct is_action_goal<plansys2_msgs::action::ExecutePlan_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<plansys2_msgs::action::ExecutePlan_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<plansys2_msgs::action::ExecutePlan_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__TRAITS_HPP_
