// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:msg/ActuatorStatus.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__ACTUATOR_STATUS__BUILDER_HPP_
#define COMMUNICATION__MSG__DETAIL__ACTUATOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/msg/detail/actuator_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace msg
{

namespace builder
{

class Init_ActuatorStatus_status
{
public:
  explicit Init_ActuatorStatus_status(::communication::msg::ActuatorStatus & msg)
  : msg_(msg)
  {}
  ::communication::msg::ActuatorStatus status(::communication::msg::ActuatorStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::msg::ActuatorStatus msg_;
};

class Init_ActuatorStatus_name
{
public:
  explicit Init_ActuatorStatus_name(::communication::msg::ActuatorStatus & msg)
  : msg_(msg)
  {}
  Init_ActuatorStatus_status name(::communication::msg::ActuatorStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ActuatorStatus_status(msg_);
  }

private:
  ::communication::msg::ActuatorStatus msg_;
};

class Init_ActuatorStatus_header
{
public:
  Init_ActuatorStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorStatus_name header(::communication::msg::ActuatorStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActuatorStatus_name(msg_);
  }

private:
  ::communication::msg::ActuatorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::msg::ActuatorStatus>()
{
  return communication::msg::builder::Init_ActuatorStatus_header();
}

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__ACTUATOR_STATUS__BUILDER_HPP_
