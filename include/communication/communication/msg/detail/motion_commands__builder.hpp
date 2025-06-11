// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:msg/MotionCommands.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__BUILDER_HPP_
#define COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/msg/detail/motion_commands__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace msg
{

namespace builder
{

class Init_MotionCommands_axis_10
{
public:
  explicit Init_MotionCommands_axis_10(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  ::communication::msg::MotionCommands axis_10(::communication::msg::MotionCommands::_axis_10_type arg)
  {
    msg_.axis_10 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_axis_9
{
public:
  explicit Init_MotionCommands_axis_9(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_axis_10 axis_9(::communication::msg::MotionCommands::_axis_9_type arg)
  {
    msg_.axis_9 = std::move(arg);
    return Init_MotionCommands_axis_10(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_axis_8
{
public:
  explicit Init_MotionCommands_axis_8(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_axis_9 axis_8(::communication::msg::MotionCommands::_axis_8_type arg)
  {
    msg_.axis_8 = std::move(arg);
    return Init_MotionCommands_axis_9(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_axis_7
{
public:
  explicit Init_MotionCommands_axis_7(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_axis_8 axis_7(::communication::msg::MotionCommands::_axis_7_type arg)
  {
    msg_.axis_7 = std::move(arg);
    return Init_MotionCommands_axis_8(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_axis_6
{
public:
  explicit Init_MotionCommands_axis_6(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_axis_7 axis_6(::communication::msg::MotionCommands::_axis_6_type arg)
  {
    msg_.axis_6 = std::move(arg);
    return Init_MotionCommands_axis_7(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_axis_5
{
public:
  explicit Init_MotionCommands_axis_5(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_axis_6 axis_5(::communication::msg::MotionCommands::_axis_5_type arg)
  {
    msg_.axis_5 = std::move(arg);
    return Init_MotionCommands_axis_6(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_axis_4
{
public:
  explicit Init_MotionCommands_axis_4(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_axis_5 axis_4(::communication::msg::MotionCommands::_axis_4_type arg)
  {
    msg_.axis_4 = std::move(arg);
    return Init_MotionCommands_axis_5(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_axis_3
{
public:
  explicit Init_MotionCommands_axis_3(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_axis_4 axis_3(::communication::msg::MotionCommands::_axis_3_type arg)
  {
    msg_.axis_3 = std::move(arg);
    return Init_MotionCommands_axis_4(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_axis_2
{
public:
  explicit Init_MotionCommands_axis_2(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_axis_3 axis_2(::communication::msg::MotionCommands::_axis_2_type arg)
  {
    msg_.axis_2 = std::move(arg);
    return Init_MotionCommands_axis_3(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_axis_1
{
public:
  explicit Init_MotionCommands_axis_1(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_axis_2 axis_1(::communication::msg::MotionCommands::_axis_1_type arg)
  {
    msg_.axis_1 = std::move(arg);
    return Init_MotionCommands_axis_2(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_btn_10
{
public:
  explicit Init_MotionCommands_btn_10(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_axis_1 btn_10(::communication::msg::MotionCommands::_btn_10_type arg)
  {
    msg_.btn_10 = std::move(arg);
    return Init_MotionCommands_axis_1(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_btn_9
{
public:
  explicit Init_MotionCommands_btn_9(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_btn_10 btn_9(::communication::msg::MotionCommands::_btn_9_type arg)
  {
    msg_.btn_9 = std::move(arg);
    return Init_MotionCommands_btn_10(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_btn_8
{
public:
  explicit Init_MotionCommands_btn_8(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_btn_9 btn_8(::communication::msg::MotionCommands::_btn_8_type arg)
  {
    msg_.btn_8 = std::move(arg);
    return Init_MotionCommands_btn_9(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_btn_7
{
public:
  explicit Init_MotionCommands_btn_7(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_btn_8 btn_7(::communication::msg::MotionCommands::_btn_7_type arg)
  {
    msg_.btn_7 = std::move(arg);
    return Init_MotionCommands_btn_8(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_btn_6
{
public:
  explicit Init_MotionCommands_btn_6(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_btn_7 btn_6(::communication::msg::MotionCommands::_btn_6_type arg)
  {
    msg_.btn_6 = std::move(arg);
    return Init_MotionCommands_btn_7(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_btn_5
{
public:
  explicit Init_MotionCommands_btn_5(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_btn_6 btn_5(::communication::msg::MotionCommands::_btn_5_type arg)
  {
    msg_.btn_5 = std::move(arg);
    return Init_MotionCommands_btn_6(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_btn_4
{
public:
  explicit Init_MotionCommands_btn_4(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_btn_5 btn_4(::communication::msg::MotionCommands::_btn_4_type arg)
  {
    msg_.btn_4 = std::move(arg);
    return Init_MotionCommands_btn_5(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_btn_3
{
public:
  explicit Init_MotionCommands_btn_3(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_btn_4 btn_3(::communication::msg::MotionCommands::_btn_3_type arg)
  {
    msg_.btn_3 = std::move(arg);
    return Init_MotionCommands_btn_4(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_btn_2
{
public:
  explicit Init_MotionCommands_btn_2(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_btn_3 btn_2(::communication::msg::MotionCommands::_btn_2_type arg)
  {
    msg_.btn_2 = std::move(arg);
    return Init_MotionCommands_btn_3(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_btn_1
{
public:
  explicit Init_MotionCommands_btn_1(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_btn_2 btn_1(::communication::msg::MotionCommands::_btn_1_type arg)
  {
    msg_.btn_1 = std::move(arg);
    return Init_MotionCommands_btn_2(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_mode
{
public:
  explicit Init_MotionCommands_mode(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_btn_1 mode(::communication::msg::MotionCommands::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotionCommands_btn_1(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_yawdot_des
{
public:
  explicit Init_MotionCommands_yawdot_des(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_mode yawdot_des(::communication::msg::MotionCommands::_yawdot_des_type arg)
  {
    msg_.yawdot_des = std::move(arg);
    return Init_MotionCommands_mode(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_height_des
{
public:
  explicit Init_MotionCommands_height_des(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_yawdot_des height_des(::communication::msg::MotionCommands::_height_des_type arg)
  {
    msg_.height_des = std::move(arg);
    return Init_MotionCommands_yawdot_des(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_vel_des
{
public:
  explicit Init_MotionCommands_vel_des(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_height_des vel_des(::communication::msg::MotionCommands::_vel_des_type arg)
  {
    msg_.vel_des = std::move(arg);
    return Init_MotionCommands_height_des(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_header
{
public:
  Init_MotionCommands_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionCommands_vel_des header(::communication::msg::MotionCommands::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotionCommands_vel_des(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::msg::MotionCommands>()
{
  return communication::msg::builder::Init_MotionCommands_header();
}

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__BUILDER_HPP_
