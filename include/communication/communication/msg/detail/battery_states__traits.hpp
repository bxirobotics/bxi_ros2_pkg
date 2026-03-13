// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication:msg/BatteryStates.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__BATTERY_STATES__TRAITS_HPP_
#define COMMUNICATION__MSG__DETAIL__BATTERY_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication/msg/detail/battery_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace communication
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: soc
  {
    out << "soc: ";
    rosidl_generator_traits::value_to_yaml(msg.soc, out);
    out << ", ";
  }

  // member: battery_temperature
  {
    out << "battery_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soc: ";
    rosidl_generator_traits::value_to_yaml(msg.soc, out);
    out << "\n";
  }

  // member: battery_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryStates & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace communication

namespace rosidl_generator_traits
{

[[deprecated("use communication::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const communication::msg::BatteryStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::msg::to_yaml() instead")]]
inline std::string to_yaml(const communication::msg::BatteryStates & msg)
{
  return communication::msg::to_yaml(msg);
}

template<>
inline const char * data_type<communication::msg::BatteryStates>()
{
  return "communication::msg::BatteryStates";
}

template<>
inline const char * name<communication::msg::BatteryStates>()
{
  return "communication/msg/BatteryStates";
}

template<>
struct has_fixed_size<communication::msg::BatteryStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<communication::msg::BatteryStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<communication::msg::BatteryStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION__MSG__DETAIL__BATTERY_STATES__TRAITS_HPP_
