// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication:msg/CANFD.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__CANFD__TRAITS_HPP_
#define COMMUNICATION__MSG__DETAIL__CANFD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication/msg/detail/canfd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace communication
{

namespace msg
{

inline void to_flow_style_yaml(
  const CANFD & msg,
  std::ostream & out)
{
  out << "{";
  // member: can_id
  {
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << ", ";
  }

  // member: len
  {
    out << "len: ";
    rosidl_generator_traits::value_to_yaml(msg.len, out);
    out << ", ";
  }

  // member: flags
  {
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << ", ";
  }

  // member: res0
  {
    out << "res0: ";
    rosidl_generator_traits::value_to_yaml(msg.res0, out);
    out << ", ";
  }

  // member: res1
  {
    out << "res1: ";
    rosidl_generator_traits::value_to_yaml(msg.res1, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CANFD & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: can_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << "\n";
  }

  // member: len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "len: ";
    rosidl_generator_traits::value_to_yaml(msg.len, out);
    out << "\n";
  }

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << "\n";
  }

  // member: res0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res0: ";
    rosidl_generator_traits::value_to_yaml(msg.res0, out);
    out << "\n";
  }

  // member: res1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res1: ";
    rosidl_generator_traits::value_to_yaml(msg.res1, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CANFD & msg, bool use_flow_style = false)
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
  const communication::msg::CANFD & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::msg::to_yaml() instead")]]
inline std::string to_yaml(const communication::msg::CANFD & msg)
{
  return communication::msg::to_yaml(msg);
}

template<>
inline const char * data_type<communication::msg::CANFD>()
{
  return "communication::msg::CANFD";
}

template<>
inline const char * name<communication::msg::CANFD>()
{
  return "communication/msg/CANFD";
}

template<>
struct has_fixed_size<communication::msg::CANFD>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<communication::msg::CANFD>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<communication::msg::CANFD>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION__MSG__DETAIL__CANFD__TRAITS_HPP_
