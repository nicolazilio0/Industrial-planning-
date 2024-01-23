// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:srv/RemoveProblemGoal.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__REMOVE_PROBLEM_GOAL__BUILDER_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__REMOVE_PROBLEM_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "plansys2_msgs/srv/detail/remove_problem_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_RemoveProblemGoal_Request_request
{
public:
  Init_RemoveProblemGoal_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::srv::RemoveProblemGoal_Request request(::plansys2_msgs::srv::RemoveProblemGoal_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::RemoveProblemGoal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::RemoveProblemGoal_Request>()
{
  return plansys2_msgs::srv::builder::Init_RemoveProblemGoal_Request_request();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_RemoveProblemGoal_Response_error_info
{
public:
  explicit Init_RemoveProblemGoal_Response_error_info(::plansys2_msgs::srv::RemoveProblemGoal_Response & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::RemoveProblemGoal_Response error_info(::plansys2_msgs::srv::RemoveProblemGoal_Response::_error_info_type arg)
  {
    msg_.error_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::RemoveProblemGoal_Response msg_;
};

class Init_RemoveProblemGoal_Response_success
{
public:
  Init_RemoveProblemGoal_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoveProblemGoal_Response_error_info success(::plansys2_msgs::srv::RemoveProblemGoal_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RemoveProblemGoal_Response_error_info(msg_);
  }

private:
  ::plansys2_msgs::srv::RemoveProblemGoal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::RemoveProblemGoal_Response>()
{
  return plansys2_msgs::srv::builder::Init_RemoveProblemGoal_Response_success();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__REMOVE_PROBLEM_GOAL__BUILDER_HPP_
