// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:msg/CANFD.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__CANFD__BUILDER_HPP_
#define COMMUNICATION__MSG__DETAIL__CANFD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/msg/detail/canfd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace msg
{

namespace builder
{

class Init_CANFD_data
{
public:
  explicit Init_CANFD_data(::communication::msg::CANFD & msg)
  : msg_(msg)
  {}
  ::communication::msg::CANFD data(::communication::msg::CANFD::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::msg::CANFD msg_;
};

class Init_CANFD_res1
{
public:
  explicit Init_CANFD_res1(::communication::msg::CANFD & msg)
  : msg_(msg)
  {}
  Init_CANFD_data res1(::communication::msg::CANFD::_res1_type arg)
  {
    msg_.res1 = std::move(arg);
    return Init_CANFD_data(msg_);
  }

private:
  ::communication::msg::CANFD msg_;
};

class Init_CANFD_res0
{
public:
  explicit Init_CANFD_res0(::communication::msg::CANFD & msg)
  : msg_(msg)
  {}
  Init_CANFD_res1 res0(::communication::msg::CANFD::_res0_type arg)
  {
    msg_.res0 = std::move(arg);
    return Init_CANFD_res1(msg_);
  }

private:
  ::communication::msg::CANFD msg_;
};

class Init_CANFD_flags
{
public:
  explicit Init_CANFD_flags(::communication::msg::CANFD & msg)
  : msg_(msg)
  {}
  Init_CANFD_res0 flags(::communication::msg::CANFD::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_CANFD_res0(msg_);
  }

private:
  ::communication::msg::CANFD msg_;
};

class Init_CANFD_len
{
public:
  explicit Init_CANFD_len(::communication::msg::CANFD & msg)
  : msg_(msg)
  {}
  Init_CANFD_flags len(::communication::msg::CANFD::_len_type arg)
  {
    msg_.len = std::move(arg);
    return Init_CANFD_flags(msg_);
  }

private:
  ::communication::msg::CANFD msg_;
};

class Init_CANFD_can_id
{
public:
  Init_CANFD_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CANFD_len can_id(::communication::msg::CANFD::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_CANFD_len(msg_);
  }

private:
  ::communication::msg::CANFD msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::msg::CANFD>()
{
  return communication::msg::builder::Init_CANFD_can_id();
}

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__CANFD__BUILDER_HPP_
