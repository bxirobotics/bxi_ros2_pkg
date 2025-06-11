// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication:msg/MotionCommands.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__STRUCT_HPP_
#define COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'vel_des'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__communication__msg__MotionCommands __attribute__((deprecated))
#else
# define DEPRECATED__communication__msg__MotionCommands __declspec(deprecated)
#endif

namespace communication
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionCommands_
{
  using Type = MotionCommands_<ContainerAllocator>;

  explicit MotionCommands_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    vel_des(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height_des = 0.0f;
      this->yawdot_des = 0.0f;
      this->mode = 0l;
      this->btn_1 = 0l;
      this->btn_2 = 0l;
      this->btn_3 = 0l;
      this->btn_4 = 0l;
      this->btn_5 = 0l;
      this->btn_6 = 0l;
      this->btn_7 = 0l;
      this->btn_8 = 0l;
      this->btn_9 = 0l;
      this->btn_10 = 0l;
      this->axis_1 = 0l;
      this->axis_2 = 0l;
      this->axis_3 = 0l;
      this->axis_4 = 0l;
      this->axis_5 = 0l;
      this->axis_6 = 0l;
      this->axis_7 = 0l;
      this->axis_8 = 0l;
      this->axis_9 = 0l;
      this->axis_10 = 0l;
    }
  }

  explicit MotionCommands_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    vel_des(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height_des = 0.0f;
      this->yawdot_des = 0.0f;
      this->mode = 0l;
      this->btn_1 = 0l;
      this->btn_2 = 0l;
      this->btn_3 = 0l;
      this->btn_4 = 0l;
      this->btn_5 = 0l;
      this->btn_6 = 0l;
      this->btn_7 = 0l;
      this->btn_8 = 0l;
      this->btn_9 = 0l;
      this->btn_10 = 0l;
      this->axis_1 = 0l;
      this->axis_2 = 0l;
      this->axis_3 = 0l;
      this->axis_4 = 0l;
      this->axis_5 = 0l;
      this->axis_6 = 0l;
      this->axis_7 = 0l;
      this->axis_8 = 0l;
      this->axis_9 = 0l;
      this->axis_10 = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vel_des_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _vel_des_type vel_des;
  using _height_des_type =
    float;
  _height_des_type height_des;
  using _yawdot_des_type =
    float;
  _yawdot_des_type yawdot_des;
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _btn_1_type =
    int32_t;
  _btn_1_type btn_1;
  using _btn_2_type =
    int32_t;
  _btn_2_type btn_2;
  using _btn_3_type =
    int32_t;
  _btn_3_type btn_3;
  using _btn_4_type =
    int32_t;
  _btn_4_type btn_4;
  using _btn_5_type =
    int32_t;
  _btn_5_type btn_5;
  using _btn_6_type =
    int32_t;
  _btn_6_type btn_6;
  using _btn_7_type =
    int32_t;
  _btn_7_type btn_7;
  using _btn_8_type =
    int32_t;
  _btn_8_type btn_8;
  using _btn_9_type =
    int32_t;
  _btn_9_type btn_9;
  using _btn_10_type =
    int32_t;
  _btn_10_type btn_10;
  using _axis_1_type =
    int32_t;
  _axis_1_type axis_1;
  using _axis_2_type =
    int32_t;
  _axis_2_type axis_2;
  using _axis_3_type =
    int32_t;
  _axis_3_type axis_3;
  using _axis_4_type =
    int32_t;
  _axis_4_type axis_4;
  using _axis_5_type =
    int32_t;
  _axis_5_type axis_5;
  using _axis_6_type =
    int32_t;
  _axis_6_type axis_6;
  using _axis_7_type =
    int32_t;
  _axis_7_type axis_7;
  using _axis_8_type =
    int32_t;
  _axis_8_type axis_8;
  using _axis_9_type =
    int32_t;
  _axis_9_type axis_9;
  using _axis_10_type =
    int32_t;
  _axis_10_type axis_10;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vel_des(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->vel_des = _arg;
    return *this;
  }
  Type & set__height_des(
    const float & _arg)
  {
    this->height_des = _arg;
    return *this;
  }
  Type & set__yawdot_des(
    const float & _arg)
  {
    this->yawdot_des = _arg;
    return *this;
  }
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__btn_1(
    const int32_t & _arg)
  {
    this->btn_1 = _arg;
    return *this;
  }
  Type & set__btn_2(
    const int32_t & _arg)
  {
    this->btn_2 = _arg;
    return *this;
  }
  Type & set__btn_3(
    const int32_t & _arg)
  {
    this->btn_3 = _arg;
    return *this;
  }
  Type & set__btn_4(
    const int32_t & _arg)
  {
    this->btn_4 = _arg;
    return *this;
  }
  Type & set__btn_5(
    const int32_t & _arg)
  {
    this->btn_5 = _arg;
    return *this;
  }
  Type & set__btn_6(
    const int32_t & _arg)
  {
    this->btn_6 = _arg;
    return *this;
  }
  Type & set__btn_7(
    const int32_t & _arg)
  {
    this->btn_7 = _arg;
    return *this;
  }
  Type & set__btn_8(
    const int32_t & _arg)
  {
    this->btn_8 = _arg;
    return *this;
  }
  Type & set__btn_9(
    const int32_t & _arg)
  {
    this->btn_9 = _arg;
    return *this;
  }
  Type & set__btn_10(
    const int32_t & _arg)
  {
    this->btn_10 = _arg;
    return *this;
  }
  Type & set__axis_1(
    const int32_t & _arg)
  {
    this->axis_1 = _arg;
    return *this;
  }
  Type & set__axis_2(
    const int32_t & _arg)
  {
    this->axis_2 = _arg;
    return *this;
  }
  Type & set__axis_3(
    const int32_t & _arg)
  {
    this->axis_3 = _arg;
    return *this;
  }
  Type & set__axis_4(
    const int32_t & _arg)
  {
    this->axis_4 = _arg;
    return *this;
  }
  Type & set__axis_5(
    const int32_t & _arg)
  {
    this->axis_5 = _arg;
    return *this;
  }
  Type & set__axis_6(
    const int32_t & _arg)
  {
    this->axis_6 = _arg;
    return *this;
  }
  Type & set__axis_7(
    const int32_t & _arg)
  {
    this->axis_7 = _arg;
    return *this;
  }
  Type & set__axis_8(
    const int32_t & _arg)
  {
    this->axis_8 = _arg;
    return *this;
  }
  Type & set__axis_9(
    const int32_t & _arg)
  {
    this->axis_9 = _arg;
    return *this;
  }
  Type & set__axis_10(
    const int32_t & _arg)
  {
    this->axis_10 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication::msg::MotionCommands_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::msg::MotionCommands_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::msg::MotionCommands_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::msg::MotionCommands_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::msg::MotionCommands_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::msg::MotionCommands_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::msg::MotionCommands_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::msg::MotionCommands_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::msg::MotionCommands_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::msg::MotionCommands_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__msg__MotionCommands
    std::shared_ptr<communication::msg::MotionCommands_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__msg__MotionCommands
    std::shared_ptr<communication::msg::MotionCommands_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionCommands_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vel_des != other.vel_des) {
      return false;
    }
    if (this->height_des != other.height_des) {
      return false;
    }
    if (this->yawdot_des != other.yawdot_des) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->btn_1 != other.btn_1) {
      return false;
    }
    if (this->btn_2 != other.btn_2) {
      return false;
    }
    if (this->btn_3 != other.btn_3) {
      return false;
    }
    if (this->btn_4 != other.btn_4) {
      return false;
    }
    if (this->btn_5 != other.btn_5) {
      return false;
    }
    if (this->btn_6 != other.btn_6) {
      return false;
    }
    if (this->btn_7 != other.btn_7) {
      return false;
    }
    if (this->btn_8 != other.btn_8) {
      return false;
    }
    if (this->btn_9 != other.btn_9) {
      return false;
    }
    if (this->btn_10 != other.btn_10) {
      return false;
    }
    if (this->axis_1 != other.axis_1) {
      return false;
    }
    if (this->axis_2 != other.axis_2) {
      return false;
    }
    if (this->axis_3 != other.axis_3) {
      return false;
    }
    if (this->axis_4 != other.axis_4) {
      return false;
    }
    if (this->axis_5 != other.axis_5) {
      return false;
    }
    if (this->axis_6 != other.axis_6) {
      return false;
    }
    if (this->axis_7 != other.axis_7) {
      return false;
    }
    if (this->axis_8 != other.axis_8) {
      return false;
    }
    if (this->axis_9 != other.axis_9) {
      return false;
    }
    if (this->axis_10 != other.axis_10) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionCommands_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionCommands_

// alias to use template instance with default allocator
using MotionCommands =
  communication::msg::MotionCommands_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__STRUCT_HPP_
