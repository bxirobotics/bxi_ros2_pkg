// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication:msg/CANFD.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__CANFD__STRUCT_HPP_
#define COMMUNICATION__MSG__DETAIL__CANFD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__communication__msg__CANFD __attribute__((deprecated))
#else
# define DEPRECATED__communication__msg__CANFD __declspec(deprecated)
#endif

namespace communication
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CANFD_
{
  using Type = CANFD_<ContainerAllocator>;

  explicit CANFD_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0ul;
      this->len = 0;
      this->flags = 0;
      this->res0 = 0;
      this->res1 = 0;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit CANFD_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0ul;
      this->len = 0;
      this->flags = 0;
      this->res0 = 0;
      this->res1 = 0;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _can_id_type =
    uint32_t;
  _can_id_type can_id;
  using _len_type =
    uint8_t;
  _len_type len;
  using _flags_type =
    uint8_t;
  _flags_type flags;
  using _res0_type =
    uint8_t;
  _res0_type res0;
  using _res1_type =
    uint8_t;
  _res1_type res1;
  using _data_type =
    std::array<uint8_t, 64>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__can_id(
    const uint32_t & _arg)
  {
    this->can_id = _arg;
    return *this;
  }
  Type & set__len(
    const uint8_t & _arg)
  {
    this->len = _arg;
    return *this;
  }
  Type & set__flags(
    const uint8_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__res0(
    const uint8_t & _arg)
  {
    this->res0 = _arg;
    return *this;
  }
  Type & set__res1(
    const uint8_t & _arg)
  {
    this->res1 = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 64> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication::msg::CANFD_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::msg::CANFD_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::msg::CANFD_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::msg::CANFD_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::msg::CANFD_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::msg::CANFD_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::msg::CANFD_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::msg::CANFD_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::msg::CANFD_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::msg::CANFD_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__msg__CANFD
    std::shared_ptr<communication::msg::CANFD_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__msg__CANFD
    std::shared_ptr<communication::msg::CANFD_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CANFD_ & other) const
  {
    if (this->can_id != other.can_id) {
      return false;
    }
    if (this->len != other.len) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->res0 != other.res0) {
      return false;
    }
    if (this->res1 != other.res1) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CANFD_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CANFD_

// alias to use template instance with default allocator
using CANFD =
  communication::msg::CANFD_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__CANFD__STRUCT_HPP_
