// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication:msg/DiagnosticEvent.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__DIAGNOSTIC_EVENT__STRUCT_HPP_
#define COMMUNICATION__MSG__DETAIL__DIAGNOSTIC_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__communication__msg__DiagnosticEvent __attribute__((deprecated))
#else
# define DEPRECATED__communication__msg__DiagnosticEvent __declspec(deprecated)
#endif

namespace communication
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticEvent_
{
  using Type = DiagnosticEvent_<ContainerAllocator>;

  explicit DiagnosticEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->code = 0;
      this->active = false;
    }
  }

  explicit DiagnosticEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->code = 0;
      this->active = false;
    }
  }

  // field types and members
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _code_type =
    uint16_t;
  _code_type code;
  using _active_type =
    bool;
  _active_type active;

  // setters for named parameter idiom
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__code(
    const uint16_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication::msg::DiagnosticEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::msg::DiagnosticEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::msg::DiagnosticEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::msg::DiagnosticEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::msg::DiagnosticEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::msg::DiagnosticEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::msg::DiagnosticEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::msg::DiagnosticEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::msg::DiagnosticEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::msg::DiagnosticEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__msg__DiagnosticEvent
    std::shared_ptr<communication::msg::DiagnosticEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__msg__DiagnosticEvent
    std::shared_ptr<communication::msg::DiagnosticEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticEvent_ & other) const
  {
    if (this->source != other.source) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticEvent_

// alias to use template instance with default allocator
using DiagnosticEvent =
  communication::msg::DiagnosticEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__DIAGNOSTIC_EVENT__STRUCT_HPP_
