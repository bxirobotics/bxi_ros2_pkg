// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication:msg/DiagnosticEvent.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__DIAGNOSTIC_EVENT__TRAITS_HPP_
#define COMMUNICATION__MSG__DETAIL__DIAGNOSTIC_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication/msg/detail/diagnostic_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace communication
{

namespace msg
{

inline void to_flow_style_yaml(
  const DiagnosticEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DiagnosticEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DiagnosticEvent & msg, bool use_flow_style = false)
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
  const communication::msg::DiagnosticEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::msg::to_yaml() instead")]]
inline std::string to_yaml(const communication::msg::DiagnosticEvent & msg)
{
  return communication::msg::to_yaml(msg);
}

template<>
inline const char * data_type<communication::msg::DiagnosticEvent>()
{
  return "communication::msg::DiagnosticEvent";
}

template<>
inline const char * name<communication::msg::DiagnosticEvent>()
{
  return "communication/msg/DiagnosticEvent";
}

template<>
struct has_fixed_size<communication::msg::DiagnosticEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<communication::msg::DiagnosticEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<communication::msg::DiagnosticEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION__MSG__DETAIL__DIAGNOSTIC_EVENT__TRAITS_HPP_
