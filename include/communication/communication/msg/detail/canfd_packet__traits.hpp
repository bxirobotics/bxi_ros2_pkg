// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication:msg/CANFDPacket.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__CANFD_PACKET__TRAITS_HPP_
#define COMMUNICATION__MSG__DETAIL__CANFD_PACKET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication/msg/detail/canfd_packet__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'frame'
#include "communication/msg/detail/canfd__traits.hpp"

namespace communication
{

namespace msg
{

inline void to_flow_style_yaml(
  const CANFDPacket & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bus
  {
    out << "bus: ";
    rosidl_generator_traits::value_to_yaml(msg.bus, out);
    out << ", ";
  }

  // member: frame
  {
    out << "frame: ";
    to_flow_style_yaml(msg.frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CANFDPacket & msg,
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

  // member: bus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus: ";
    rosidl_generator_traits::value_to_yaml(msg.bus, out);
    out << "\n";
  }

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame:\n";
    to_block_style_yaml(msg.frame, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CANFDPacket & msg, bool use_flow_style = false)
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
  const communication::msg::CANFDPacket & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::msg::to_yaml() instead")]]
inline std::string to_yaml(const communication::msg::CANFDPacket & msg)
{
  return communication::msg::to_yaml(msg);
}

template<>
inline const char * data_type<communication::msg::CANFDPacket>()
{
  return "communication::msg::CANFDPacket";
}

template<>
inline const char * name<communication::msg::CANFDPacket>()
{
  return "communication/msg/CANFDPacket";
}

template<>
struct has_fixed_size<communication::msg::CANFDPacket>
  : std::integral_constant<bool, has_fixed_size<communication::msg::CANFD>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<communication::msg::CANFDPacket>
  : std::integral_constant<bool, has_bounded_size<communication::msg::CANFD>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<communication::msg::CANFDPacket>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION__MSG__DETAIL__CANFD_PACKET__TRAITS_HPP_
