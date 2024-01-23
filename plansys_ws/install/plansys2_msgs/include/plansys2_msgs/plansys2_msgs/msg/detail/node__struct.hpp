// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'parameters'
#include "plansys2_msgs/msg/detail/param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__msg__Node __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__msg__Node __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Node_
{
  using Type = Node_<ContainerAllocator>;

  explicit Node_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_type = 0;
      this->expression_type = 0;
      this->modifier_type = 0;
      this->node_id = 0ul;
      this->name = "";
      this->value = 0.0;
      this->negate = false;
    }
  }

  explicit Node_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_type = 0;
      this->expression_type = 0;
      this->modifier_type = 0;
      this->node_id = 0ul;
      this->name = "";
      this->value = 0.0;
      this->negate = false;
    }
  }

  // field types and members
  using _node_type_type =
    uint8_t;
  _node_type_type node_type;
  using _expression_type_type =
    uint8_t;
  _expression_type_type expression_type;
  using _modifier_type_type =
    uint8_t;
  _modifier_type_type modifier_type;
  using _node_id_type =
    uint32_t;
  _node_id_type node_id;
  using _children_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _children_type children;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _parameters_type =
    std::vector<plansys2_msgs::msg::Param_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<plansys2_msgs::msg::Param_<ContainerAllocator>>>;
  _parameters_type parameters;
  using _value_type =
    double;
  _value_type value;
  using _negate_type =
    bool;
  _negate_type negate;

  // setters for named parameter idiom
  Type & set__node_type(
    const uint8_t & _arg)
  {
    this->node_type = _arg;
    return *this;
  }
  Type & set__expression_type(
    const uint8_t & _arg)
  {
    this->expression_type = _arg;
    return *this;
  }
  Type & set__modifier_type(
    const uint8_t & _arg)
  {
    this->modifier_type = _arg;
    return *this;
  }
  Type & set__node_id(
    const uint32_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__children(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->children = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__parameters(
    const std::vector<plansys2_msgs::msg::Param_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<plansys2_msgs::msg::Param_<ContainerAllocator>>> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__negate(
    const bool & _arg)
  {
    this->negate = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t AND =
    1u;
  static constexpr uint8_t OR =
    2u;
  static constexpr uint8_t NOT =
    3u;
  static constexpr uint8_t ACTION =
    4u;
  static constexpr uint8_t PREDICATE =
    5u;
  static constexpr uint8_t FUNCTION =
    6u;
  static constexpr uint8_t EXPRESSION =
    7u;
  static constexpr uint8_t FUNCTION_MODIFIER =
    8u;
  static constexpr uint8_t NUMBER =
    9u;
  static constexpr uint8_t COMP_EQ =
    10u;
  static constexpr uint8_t COMP_GE =
    11u;
  static constexpr uint8_t COMP_GT =
    12u;
  static constexpr uint8_t COMP_LE =
    13u;
  static constexpr uint8_t COMP_LT =
    14u;
  static constexpr uint8_t ARITH_MULT =
    15u;
  static constexpr uint8_t ARITH_DIV =
    16u;
  static constexpr uint8_t ARITH_ADD =
    17u;
  static constexpr uint8_t ARITH_SUB =
    18u;
  static constexpr uint8_t ASSIGN =
    19u;
  static constexpr uint8_t INCREASE =
    20u;
  static constexpr uint8_t DECREASE =
    21u;
  static constexpr uint8_t SCALE_UP =
    22u;
  static constexpr uint8_t SCALE_DOWN =
    23u;

  // pointer types
  using RawPtr =
    plansys2_msgs::msg::Node_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::msg::Node_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::msg::Node_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::msg::Node_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::Node_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::Node_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::Node_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::Node_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::msg::Node_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::msg::Node_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__msg__Node
    std::shared_ptr<plansys2_msgs::msg::Node_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__msg__Node
    std::shared_ptr<plansys2_msgs::msg::Node_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Node_ & other) const
  {
    if (this->node_type != other.node_type) {
      return false;
    }
    if (this->expression_type != other.expression_type) {
      return false;
    }
    if (this->modifier_type != other.modifier_type) {
      return false;
    }
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->children != other.children) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->negate != other.negate) {
      return false;
    }
    return true;
  }
  bool operator!=(const Node_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Node_

// alias to use template instance with default allocator
using Node =
  plansys2_msgs::msg::Node_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::AND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::OR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::NOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::ACTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::PREDICATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::FUNCTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::EXPRESSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::FUNCTION_MODIFIER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::NUMBER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::COMP_EQ;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::COMP_GE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::COMP_GT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::COMP_LE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::COMP_LT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::ARITH_MULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::ARITH_DIV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::ARITH_ADD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::ARITH_SUB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::ASSIGN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::INCREASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::DECREASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::SCALE_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Node_<ContainerAllocator>::SCALE_DOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_
