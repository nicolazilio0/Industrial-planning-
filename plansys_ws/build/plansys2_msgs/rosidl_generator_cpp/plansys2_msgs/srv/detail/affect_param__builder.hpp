// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:srv/AffectParam.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__AFFECT_PARAM__BUILDER_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__AFFECT_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "plansys2_msgs/srv/detail/affect_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_AffectParam_Request_param
{
public:
  Init_AffectParam_Request_param()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::srv::AffectParam_Request param(::plansys2_msgs::srv::AffectParam_Request::_param_type arg)
  {
    msg_.param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::AffectParam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::AffectParam_Request>()
{
  return plansys2_msgs::srv::builder::Init_AffectParam_Request_param();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_AffectParam_Response_error_info
{
public:
  explicit Init_AffectParam_Response_error_info(::plansys2_msgs::srv::AffectParam_Response & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::AffectParam_Response error_info(::plansys2_msgs::srv::AffectParam_Response::_error_info_type arg)
  {
    msg_.error_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::AffectParam_Response msg_;
};

class Init_AffectParam_Response_success
{
public:
  Init_AffectParam_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AffectParam_Response_error_info success(::plansys2_msgs::srv::AffectParam_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AffectParam_Response_error_info(msg_);
  }

private:
  ::plansys2_msgs::srv::AffectParam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::AffectParam_Response>()
{
  return plansys2_msgs::srv::builder::Init_AffectParam_Response_success();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__AFFECT_PARAM__BUILDER_HPP_
