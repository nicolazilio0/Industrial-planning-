// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:srv/GetDomainConstants.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_DOMAIN_CONSTANTS__BUILDER_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_DOMAIN_CONSTANTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "plansys2_msgs/srv/detail/get_domain_constants__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDomainConstants_Request_type
{
public:
  Init_GetDomainConstants_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::srv::GetDomainConstants_Request type(::plansys2_msgs::srv::GetDomainConstants_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainConstants_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::GetDomainConstants_Request>()
{
  return plansys2_msgs::srv::builder::Init_GetDomainConstants_Request_type();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDomainConstants_Response_error_info
{
public:
  explicit Init_GetDomainConstants_Response_error_info(::plansys2_msgs::srv::GetDomainConstants_Response & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::GetDomainConstants_Response error_info(::plansys2_msgs::srv::GetDomainConstants_Response::_error_info_type arg)
  {
    msg_.error_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainConstants_Response msg_;
};

class Init_GetDomainConstants_Response_constants
{
public:
  explicit Init_GetDomainConstants_Response_constants(::plansys2_msgs::srv::GetDomainConstants_Response & msg)
  : msg_(msg)
  {}
  Init_GetDomainConstants_Response_error_info constants(::plansys2_msgs::srv::GetDomainConstants_Response::_constants_type arg)
  {
    msg_.constants = std::move(arg);
    return Init_GetDomainConstants_Response_error_info(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainConstants_Response msg_;
};

class Init_GetDomainConstants_Response_success
{
public:
  Init_GetDomainConstants_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDomainConstants_Response_constants success(::plansys2_msgs::srv::GetDomainConstants_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetDomainConstants_Response_constants(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainConstants_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::GetDomainConstants_Response>()
{
  return plansys2_msgs::srv::builder::Init_GetDomainConstants_Response_success();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_DOMAIN_CONSTANTS__BUILDER_HPP_
