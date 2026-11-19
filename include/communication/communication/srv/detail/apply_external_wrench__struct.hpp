// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication:srv/ApplyExternalWrench.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__APPLY_EXTERNAL_WRENCH__STRUCT_HPP_
#define COMMUNICATION__SRV__DETAIL__APPLY_EXTERNAL_WRENCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'application_point'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__communication__srv__ApplyExternalWrench_Request __attribute__((deprecated))
#else
# define DEPRECATED__communication__srv__ApplyExternalWrench_Request __declspec(deprecated)
#endif

namespace communication
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplyExternalWrench_Request_
{
  using Type = ApplyExternalWrench_Request_<ContainerAllocator>;

  explicit ApplyExternalWrench_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : application_point(_init),
    wrench(_init),
    duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operation = 0;
      this->wrench_id = "";
      this->body_name = "";
      this->reference_frame = 0;
      this->at_center_of_mass = false;
      this->persistent = false;
    }
  }

  explicit ApplyExternalWrench_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wrench_id(_alloc),
    body_name(_alloc),
    application_point(_alloc, _init),
    wrench(_alloc, _init),
    duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operation = 0;
      this->wrench_id = "";
      this->body_name = "";
      this->reference_frame = 0;
      this->at_center_of_mass = false;
      this->persistent = false;
    }
  }

  // field types and members
  using _operation_type =
    uint8_t;
  _operation_type operation;
  using _wrench_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _wrench_id_type wrench_id;
  using _body_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _body_name_type body_name;
  using _reference_frame_type =
    uint8_t;
  _reference_frame_type reference_frame;
  using _at_center_of_mass_type =
    bool;
  _at_center_of_mass_type at_center_of_mass;
  using _application_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _application_point_type application_point;
  using _wrench_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _wrench_type wrench;
  using _persistent_type =
    bool;
  _persistent_type persistent;
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__operation(
    const uint8_t & _arg)
  {
    this->operation = _arg;
    return *this;
  }
  Type & set__wrench_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->wrench_id = _arg;
    return *this;
  }
  Type & set__body_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->body_name = _arg;
    return *this;
  }
  Type & set__reference_frame(
    const uint8_t & _arg)
  {
    this->reference_frame = _arg;
    return *this;
  }
  Type & set__at_center_of_mass(
    const bool & _arg)
  {
    this->at_center_of_mass = _arg;
    return *this;
  }
  Type & set__application_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->application_point = _arg;
    return *this;
  }
  Type & set__wrench(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->wrench = _arg;
    return *this;
  }
  Type & set__persistent(
    const bool & _arg)
  {
    this->persistent = _arg;
    return *this;
  }
  Type & set__duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t APPLY =
    0u;
  static constexpr uint8_t CLEAR =
    1u;
  static constexpr uint8_t CLEAR_ALL =
    2u;
  static constexpr uint8_t WORLD_FRAME =
    0u;
  static constexpr uint8_t BODY_FRAME =
    1u;

  // pointer types
  using RawPtr =
    communication::srv::ApplyExternalWrench_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::srv::ApplyExternalWrench_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::srv::ApplyExternalWrench_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::srv::ApplyExternalWrench_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::srv::ApplyExternalWrench_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::srv::ApplyExternalWrench_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::srv::ApplyExternalWrench_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::srv::ApplyExternalWrench_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::srv::ApplyExternalWrench_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::srv::ApplyExternalWrench_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__srv__ApplyExternalWrench_Request
    std::shared_ptr<communication::srv::ApplyExternalWrench_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__srv__ApplyExternalWrench_Request
    std::shared_ptr<communication::srv::ApplyExternalWrench_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyExternalWrench_Request_ & other) const
  {
    if (this->operation != other.operation) {
      return false;
    }
    if (this->wrench_id != other.wrench_id) {
      return false;
    }
    if (this->body_name != other.body_name) {
      return false;
    }
    if (this->reference_frame != other.reference_frame) {
      return false;
    }
    if (this->at_center_of_mass != other.at_center_of_mass) {
      return false;
    }
    if (this->application_point != other.application_point) {
      return false;
    }
    if (this->wrench != other.wrench) {
      return false;
    }
    if (this->persistent != other.persistent) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyExternalWrench_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyExternalWrench_Request_

// alias to use template instance with default allocator
using ApplyExternalWrench_Request =
  communication::srv::ApplyExternalWrench_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ApplyExternalWrench_Request_<ContainerAllocator>::APPLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ApplyExternalWrench_Request_<ContainerAllocator>::CLEAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ApplyExternalWrench_Request_<ContainerAllocator>::CLEAR_ALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ApplyExternalWrench_Request_<ContainerAllocator>::WORLD_FRAME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ApplyExternalWrench_Request_<ContainerAllocator>::BODY_FRAME;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace communication


#ifndef _WIN32
# define DEPRECATED__communication__srv__ApplyExternalWrench_Response __attribute__((deprecated))
#else
# define DEPRECATED__communication__srv__ApplyExternalWrench_Response __declspec(deprecated)
#endif

namespace communication
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplyExternalWrench_Response_
{
  using Type = ApplyExternalWrench_Response_<ContainerAllocator>;

  explicit ApplyExternalWrench_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ApplyExternalWrench_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication::srv::ApplyExternalWrench_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::srv::ApplyExternalWrench_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::srv::ApplyExternalWrench_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::srv::ApplyExternalWrench_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::srv::ApplyExternalWrench_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::srv::ApplyExternalWrench_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::srv::ApplyExternalWrench_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::srv::ApplyExternalWrench_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::srv::ApplyExternalWrench_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::srv::ApplyExternalWrench_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__srv__ApplyExternalWrench_Response
    std::shared_ptr<communication::srv::ApplyExternalWrench_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__srv__ApplyExternalWrench_Response
    std::shared_ptr<communication::srv::ApplyExternalWrench_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyExternalWrench_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyExternalWrench_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyExternalWrench_Response_

// alias to use template instance with default allocator
using ApplyExternalWrench_Response =
  communication::srv::ApplyExternalWrench_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication

namespace communication
{

namespace srv
{

struct ApplyExternalWrench
{
  using Request = communication::srv::ApplyExternalWrench_Request;
  using Response = communication::srv::ApplyExternalWrench_Response;
};

}  // namespace srv

}  // namespace communication

#endif  // COMMUNICATION__SRV__DETAIL__APPLY_EXTERNAL_WRENCH__STRUCT_HPP_
