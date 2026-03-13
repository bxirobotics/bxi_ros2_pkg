// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:msg/BatteryStates.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__BATTERY_STATES__BUILDER_HPP_
#define COMMUNICATION__MSG__DETAIL__BATTERY_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/msg/detail/battery_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace msg
{

namespace builder
{

class Init_BatteryStates_battery_temperature
{
public:
  explicit Init_BatteryStates_battery_temperature(::communication::msg::BatteryStates & msg)
  : msg_(msg)
  {}
  ::communication::msg::BatteryStates battery_temperature(::communication::msg::BatteryStates::_battery_temperature_type arg)
  {
    msg_.battery_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::msg::BatteryStates msg_;
};

class Init_BatteryStates_soc
{
public:
  explicit Init_BatteryStates_soc(::communication::msg::BatteryStates & msg)
  : msg_(msg)
  {}
  Init_BatteryStates_battery_temperature soc(::communication::msg::BatteryStates::_soc_type arg)
  {
    msg_.soc = std::move(arg);
    return Init_BatteryStates_battery_temperature(msg_);
  }

private:
  ::communication::msg::BatteryStates msg_;
};

class Init_BatteryStates_current
{
public:
  explicit Init_BatteryStates_current(::communication::msg::BatteryStates & msg)
  : msg_(msg)
  {}
  Init_BatteryStates_soc current(::communication::msg::BatteryStates::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_BatteryStates_soc(msg_);
  }

private:
  ::communication::msg::BatteryStates msg_;
};

class Init_BatteryStates_voltage
{
public:
  explicit Init_BatteryStates_voltage(::communication::msg::BatteryStates & msg)
  : msg_(msg)
  {}
  Init_BatteryStates_current voltage(::communication::msg::BatteryStates::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BatteryStates_current(msg_);
  }

private:
  ::communication::msg::BatteryStates msg_;
};

class Init_BatteryStates_name
{
public:
  explicit Init_BatteryStates_name(::communication::msg::BatteryStates & msg)
  : msg_(msg)
  {}
  Init_BatteryStates_voltage name(::communication::msg::BatteryStates::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_BatteryStates_voltage(msg_);
  }

private:
  ::communication::msg::BatteryStates msg_;
};

class Init_BatteryStates_header
{
public:
  Init_BatteryStates_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryStates_name header(::communication::msg::BatteryStates::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BatteryStates_name(msg_);
  }

private:
  ::communication::msg::BatteryStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::msg::BatteryStates>()
{
  return communication::msg::builder::Init_BatteryStates_header();
}

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__BATTERY_STATES__BUILDER_HPP_
