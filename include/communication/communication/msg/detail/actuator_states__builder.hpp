// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:msg/ActuatorStates.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__ACTUATOR_STATES__BUILDER_HPP_
#define COMMUNICATION__MSG__DETAIL__ACTUATOR_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/msg/detail/actuator_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace msg
{

namespace builder
{

class Init_ActuatorStates_motor_temperature
{
public:
  explicit Init_ActuatorStates_motor_temperature(::communication::msg::ActuatorStates & msg)
  : msg_(msg)
  {}
  ::communication::msg::ActuatorStates motor_temperature(::communication::msg::ActuatorStates::_motor_temperature_type arg)
  {
    msg_.motor_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::msg::ActuatorStates msg_;
};

class Init_ActuatorStates_driver_temperature
{
public:
  explicit Init_ActuatorStates_driver_temperature(::communication::msg::ActuatorStates & msg)
  : msg_(msg)
  {}
  Init_ActuatorStates_motor_temperature driver_temperature(::communication::msg::ActuatorStates::_driver_temperature_type arg)
  {
    msg_.driver_temperature = std::move(arg);
    return Init_ActuatorStates_motor_temperature(msg_);
  }

private:
  ::communication::msg::ActuatorStates msg_;
};

class Init_ActuatorStates_effort
{
public:
  explicit Init_ActuatorStates_effort(::communication::msg::ActuatorStates & msg)
  : msg_(msg)
  {}
  Init_ActuatorStates_driver_temperature effort(::communication::msg::ActuatorStates::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return Init_ActuatorStates_driver_temperature(msg_);
  }

private:
  ::communication::msg::ActuatorStates msg_;
};

class Init_ActuatorStates_velocity
{
public:
  explicit Init_ActuatorStates_velocity(::communication::msg::ActuatorStates & msg)
  : msg_(msg)
  {}
  Init_ActuatorStates_effort velocity(::communication::msg::ActuatorStates::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ActuatorStates_effort(msg_);
  }

private:
  ::communication::msg::ActuatorStates msg_;
};

class Init_ActuatorStates_position
{
public:
  explicit Init_ActuatorStates_position(::communication::msg::ActuatorStates & msg)
  : msg_(msg)
  {}
  Init_ActuatorStates_velocity position(::communication::msg::ActuatorStates::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ActuatorStates_velocity(msg_);
  }

private:
  ::communication::msg::ActuatorStates msg_;
};

class Init_ActuatorStates_name
{
public:
  explicit Init_ActuatorStates_name(::communication::msg::ActuatorStates & msg)
  : msg_(msg)
  {}
  Init_ActuatorStates_position name(::communication::msg::ActuatorStates::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ActuatorStates_position(msg_);
  }

private:
  ::communication::msg::ActuatorStates msg_;
};

class Init_ActuatorStates_header
{
public:
  Init_ActuatorStates_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorStates_name header(::communication::msg::ActuatorStates::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActuatorStates_name(msg_);
  }

private:
  ::communication::msg::ActuatorStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::msg::ActuatorStates>()
{
  return communication::msg::builder::Init_ActuatorStates_header();
}

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__ACTUATOR_STATES__BUILDER_HPP_
