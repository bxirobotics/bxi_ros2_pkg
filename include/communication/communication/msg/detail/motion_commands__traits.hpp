// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication:msg/MotionCommands.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__TRAITS_HPP_
#define COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication/msg/detail/motion_commands__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'vel_des'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace communication
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionCommands & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vel_des
  {
    out << "vel_des: ";
    to_flow_style_yaml(msg.vel_des, out);
    out << ", ";
  }

  // member: height_des
  {
    out << "height_des: ";
    rosidl_generator_traits::value_to_yaml(msg.height_des, out);
    out << ", ";
  }

  // member: yawdot_des
  {
    out << "yawdot_des: ";
    rosidl_generator_traits::value_to_yaml(msg.yawdot_des, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: btn_1
  {
    out << "btn_1: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_1, out);
    out << ", ";
  }

  // member: btn_2
  {
    out << "btn_2: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_2, out);
    out << ", ";
  }

  // member: btn_3
  {
    out << "btn_3: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_3, out);
    out << ", ";
  }

  // member: btn_4
  {
    out << "btn_4: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_4, out);
    out << ", ";
  }

  // member: btn_5
  {
    out << "btn_5: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_5, out);
    out << ", ";
  }

  // member: btn_6
  {
    out << "btn_6: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_6, out);
    out << ", ";
  }

  // member: btn_7
  {
    out << "btn_7: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_7, out);
    out << ", ";
  }

  // member: btn_8
  {
    out << "btn_8: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_8, out);
    out << ", ";
  }

  // member: btn_9
  {
    out << "btn_9: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_9, out);
    out << ", ";
  }

  // member: btn_10
  {
    out << "btn_10: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_10, out);
    out << ", ";
  }

  // member: axis_1
  {
    out << "axis_1: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_1, out);
    out << ", ";
  }

  // member: axis_2
  {
    out << "axis_2: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_2, out);
    out << ", ";
  }

  // member: axis_3
  {
    out << "axis_3: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_3, out);
    out << ", ";
  }

  // member: axis_4
  {
    out << "axis_4: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_4, out);
    out << ", ";
  }

  // member: axis_5
  {
    out << "axis_5: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_5, out);
    out << ", ";
  }

  // member: axis_6
  {
    out << "axis_6: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_6, out);
    out << ", ";
  }

  // member: axis_7
  {
    out << "axis_7: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_7, out);
    out << ", ";
  }

  // member: axis_8
  {
    out << "axis_8: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_8, out);
    out << ", ";
  }

  // member: axis_9
  {
    out << "axis_9: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_9, out);
    out << ", ";
  }

  // member: axis_10
  {
    out << "axis_10: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_10, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionCommands & msg,
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

  // member: vel_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_des:\n";
    to_block_style_yaml(msg.vel_des, out, indentation + 2);
  }

  // member: height_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_des: ";
    rosidl_generator_traits::value_to_yaml(msg.height_des, out);
    out << "\n";
  }

  // member: yawdot_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawdot_des: ";
    rosidl_generator_traits::value_to_yaml(msg.yawdot_des, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: btn_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_1: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_1, out);
    out << "\n";
  }

  // member: btn_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_2: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_2, out);
    out << "\n";
  }

  // member: btn_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_3: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_3, out);
    out << "\n";
  }

  // member: btn_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_4: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_4, out);
    out << "\n";
  }

  // member: btn_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_5: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_5, out);
    out << "\n";
  }

  // member: btn_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_6: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_6, out);
    out << "\n";
  }

  // member: btn_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_7: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_7, out);
    out << "\n";
  }

  // member: btn_8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_8: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_8, out);
    out << "\n";
  }

  // member: btn_9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_9: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_9, out);
    out << "\n";
  }

  // member: btn_10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_10: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_10, out);
    out << "\n";
  }

  // member: axis_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_1: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_1, out);
    out << "\n";
  }

  // member: axis_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_2: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_2, out);
    out << "\n";
  }

  // member: axis_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_3: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_3, out);
    out << "\n";
  }

  // member: axis_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_4: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_4, out);
    out << "\n";
  }

  // member: axis_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_5: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_5, out);
    out << "\n";
  }

  // member: axis_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_6: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_6, out);
    out << "\n";
  }

  // member: axis_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_7: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_7, out);
    out << "\n";
  }

  // member: axis_8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_8: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_8, out);
    out << "\n";
  }

  // member: axis_9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_9: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_9, out);
    out << "\n";
  }

  // member: axis_10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_10: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_10, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionCommands & msg, bool use_flow_style = false)
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
  const communication::msg::MotionCommands & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::msg::to_yaml() instead")]]
inline std::string to_yaml(const communication::msg::MotionCommands & msg)
{
  return communication::msg::to_yaml(msg);
}

template<>
inline const char * data_type<communication::msg::MotionCommands>()
{
  return "communication::msg::MotionCommands";
}

template<>
inline const char * name<communication::msg::MotionCommands>()
{
  return "communication/msg/MotionCommands";
}

template<>
struct has_fixed_size<communication::msg::MotionCommands>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<communication::msg::MotionCommands>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<communication::msg::MotionCommands>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__TRAITS_HPP_
