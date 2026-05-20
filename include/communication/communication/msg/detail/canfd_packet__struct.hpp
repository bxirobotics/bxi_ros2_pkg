// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication:msg/CANFDPacket.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__CANFD_PACKET__STRUCT_HPP_
#define COMMUNICATION__MSG__DETAIL__CANFD_PACKET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'frame'
#include "communication/msg/detail/canfd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__communication__msg__CANFDPacket __attribute__((deprecated))
#else
# define DEPRECATED__communication__msg__CANFDPacket __declspec(deprecated)
#endif

namespace communication
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CANFDPacket_
{
  using Type = CANFDPacket_<ContainerAllocator>;

  explicit CANFDPacket_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    frame(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bus = 0;
    }
  }

  explicit CANFDPacket_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    frame(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bus = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bus_type =
    uint8_t;
  _bus_type bus;
  using _frame_type =
    communication::msg::CANFD_<ContainerAllocator>;
  _frame_type frame;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bus(
    const uint8_t & _arg)
  {
    this->bus = _arg;
    return *this;
  }
  Type & set__frame(
    const communication::msg::CANFD_<ContainerAllocator> & _arg)
  {
    this->frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication::msg::CANFDPacket_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::msg::CANFDPacket_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::msg::CANFDPacket_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::msg::CANFDPacket_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::msg::CANFDPacket_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::msg::CANFDPacket_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::msg::CANFDPacket_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::msg::CANFDPacket_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::msg::CANFDPacket_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::msg::CANFDPacket_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__msg__CANFDPacket
    std::shared_ptr<communication::msg::CANFDPacket_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__msg__CANFDPacket
    std::shared_ptr<communication::msg::CANFDPacket_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CANFDPacket_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bus != other.bus) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const CANFDPacket_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CANFDPacket_

// alias to use template instance with default allocator
using CANFDPacket =
  communication::msg::CANFDPacket_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__CANFD_PACKET__STRUCT_HPP_
