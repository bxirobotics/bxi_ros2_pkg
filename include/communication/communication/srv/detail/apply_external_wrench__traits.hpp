// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication:srv/ApplyExternalWrench.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__APPLY_EXTERNAL_WRENCH__TRAITS_HPP_
#define COMMUNICATION__SRV__DETAIL__APPLY_EXTERNAL_WRENCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication/srv/detail/apply_external_wrench__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'application_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace communication
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApplyExternalWrench_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: operation
  {
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << ", ";
  }

  // member: wrench_id
  {
    out << "wrench_id: ";
    rosidl_generator_traits::value_to_yaml(msg.wrench_id, out);
    out << ", ";
  }

  // member: body_name
  {
    out << "body_name: ";
    rosidl_generator_traits::value_to_yaml(msg.body_name, out);
    out << ", ";
  }

  // member: reference_frame
  {
    out << "reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_frame, out);
    out << ", ";
  }

  // member: at_center_of_mass
  {
    out << "at_center_of_mass: ";
    rosidl_generator_traits::value_to_yaml(msg.at_center_of_mass, out);
    out << ", ";
  }

  // member: application_point
  {
    out << "application_point: ";
    to_flow_style_yaml(msg.application_point, out);
    out << ", ";
  }

  // member: wrench
  {
    out << "wrench: ";
    to_flow_style_yaml(msg.wrench, out);
    out << ", ";
  }

  // member: persistent
  {
    out << "persistent: ";
    rosidl_generator_traits::value_to_yaml(msg.persistent, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    to_flow_style_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApplyExternalWrench_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << "\n";
  }

  // member: wrench_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrench_id: ";
    rosidl_generator_traits::value_to_yaml(msg.wrench_id, out);
    out << "\n";
  }

  // member: body_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_name: ";
    rosidl_generator_traits::value_to_yaml(msg.body_name, out);
    out << "\n";
  }

  // member: reference_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_frame, out);
    out << "\n";
  }

  // member: at_center_of_mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "at_center_of_mass: ";
    rosidl_generator_traits::value_to_yaml(msg.at_center_of_mass, out);
    out << "\n";
  }

  // member: application_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "application_point:\n";
    to_block_style_yaml(msg.application_point, out, indentation + 2);
  }

  // member: wrench
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrench:\n";
    to_block_style_yaml(msg.wrench, out, indentation + 2);
  }

  // member: persistent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "persistent: ";
    rosidl_generator_traits::value_to_yaml(msg.persistent, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_block_style_yaml(msg.duration, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApplyExternalWrench_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace communication

namespace rosidl_generator_traits
{

[[deprecated("use communication::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const communication::srv::ApplyExternalWrench_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication::srv::ApplyExternalWrench_Request & msg)
{
  return communication::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication::srv::ApplyExternalWrench_Request>()
{
  return "communication::srv::ApplyExternalWrench_Request";
}

template<>
inline const char * name<communication::srv::ApplyExternalWrench_Request>()
{
  return "communication/srv/ApplyExternalWrench_Request";
}

template<>
struct has_fixed_size<communication::srv::ApplyExternalWrench_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<communication::srv::ApplyExternalWrench_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<communication::srv::ApplyExternalWrench_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace communication
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApplyExternalWrench_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApplyExternalWrench_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApplyExternalWrench_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace communication

namespace rosidl_generator_traits
{

[[deprecated("use communication::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const communication::srv::ApplyExternalWrench_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication::srv::ApplyExternalWrench_Response & msg)
{
  return communication::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication::srv::ApplyExternalWrench_Response>()
{
  return "communication::srv::ApplyExternalWrench_Response";
}

template<>
inline const char * name<communication::srv::ApplyExternalWrench_Response>()
{
  return "communication/srv/ApplyExternalWrench_Response";
}

template<>
struct has_fixed_size<communication::srv::ApplyExternalWrench_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<communication::srv::ApplyExternalWrench_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<communication::srv::ApplyExternalWrench_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication::srv::ApplyExternalWrench>()
{
  return "communication::srv::ApplyExternalWrench";
}

template<>
inline const char * name<communication::srv::ApplyExternalWrench>()
{
  return "communication/srv/ApplyExternalWrench";
}

template<>
struct has_fixed_size<communication::srv::ApplyExternalWrench>
  : std::integral_constant<
    bool,
    has_fixed_size<communication::srv::ApplyExternalWrench_Request>::value &&
    has_fixed_size<communication::srv::ApplyExternalWrench_Response>::value
  >
{
};

template<>
struct has_bounded_size<communication::srv::ApplyExternalWrench>
  : std::integral_constant<
    bool,
    has_bounded_size<communication::srv::ApplyExternalWrench_Request>::value &&
    has_bounded_size<communication::srv::ApplyExternalWrench_Response>::value
  >
{
};

template<>
struct is_service<communication::srv::ApplyExternalWrench>
  : std::true_type
{
};

template<>
struct is_service_request<communication::srv::ApplyExternalWrench_Request>
  : std::true_type
{
};

template<>
struct is_service_response<communication::srv::ApplyExternalWrench_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION__SRV__DETAIL__APPLY_EXTERNAL_WRENCH__TRAITS_HPP_
