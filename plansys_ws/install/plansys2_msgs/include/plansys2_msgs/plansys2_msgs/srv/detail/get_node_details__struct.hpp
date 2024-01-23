// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:srv/GetNodeDetails.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_NODE_DETAILS__STRUCT_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_NODE_DETAILS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__srv__GetNodeDetails_Request __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__srv__GetNodeDetails_Request __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetNodeDetails_Request_
{
  using Type = GetNodeDetails_Request_<ContainerAllocator>;

  explicit GetNodeDetails_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->expression = "";
    }
  }

  explicit GetNodeDetails_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : expression(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->expression = "";
    }
  }

  // field types and members
  using _expression_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _expression_type expression;

  // setters for named parameter idiom
  Type & set__expression(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->expression = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::srv::GetNodeDetails_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::srv::GetNodeDetails_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::srv::GetNodeDetails_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::srv::GetNodeDetails_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::GetNodeDetails_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::GetNodeDetails_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::GetNodeDetails_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::GetNodeDetails_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::srv::GetNodeDetails_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::srv::GetNodeDetails_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__srv__GetNodeDetails_Request
    std::shared_ptr<plansys2_msgs::srv::GetNodeDetails_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__srv__GetNodeDetails_Request
    std::shared_ptr<plansys2_msgs::srv::GetNodeDetails_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetNodeDetails_Request_ & other) const
  {
    if (this->expression != other.expression) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetNodeDetails_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetNodeDetails_Request_

// alias to use template instance with default allocator
using GetNodeDetails_Request =
  plansys2_msgs::srv::GetNodeDetails_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace plansys2_msgs


// Include directives for member types
// Member 'node'
#include "plansys2_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__srv__GetNodeDetails_Response __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__srv__GetNodeDetails_Response __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetNodeDetails_Response_
{
  using Type = GetNodeDetails_Response_<ContainerAllocator>;

  explicit GetNodeDetails_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_info = "";
    }
  }

  explicit GetNodeDetails_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node(_alloc, _init),
    error_info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_info = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _node_type =
    plansys2_msgs::msg::Node_<ContainerAllocator>;
  _node_type node;
  using _error_info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_info_type error_info;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__node(
    const plansys2_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->node = _arg;
    return *this;
  }
  Type & set__error_info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::srv::GetNodeDetails_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::srv::GetNodeDetails_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::srv::GetNodeDetails_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::srv::GetNodeDetails_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::GetNodeDetails_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::GetNodeDetails_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::GetNodeDetails_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::GetNodeDetails_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::srv::GetNodeDetails_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::srv::GetNodeDetails_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__srv__GetNodeDetails_Response
    std::shared_ptr<plansys2_msgs::srv::GetNodeDetails_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__srv__GetNodeDetails_Response
    std::shared_ptr<plansys2_msgs::srv::GetNodeDetails_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetNodeDetails_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->node != other.node) {
      return false;
    }
    if (this->error_info != other.error_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetNodeDetails_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetNodeDetails_Response_

// alias to use template instance with default allocator
using GetNodeDetails_Response =
  plansys2_msgs::srv::GetNodeDetails_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace plansys2_msgs

namespace plansys2_msgs
{

namespace srv
{

struct GetNodeDetails
{
  using Request = plansys2_msgs::srv::GetNodeDetails_Request;
  using Response = plansys2_msgs::srv::GetNodeDetails_Response;
};

}  // namespace srv

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_NODE_DETAILS__STRUCT_HPP_
