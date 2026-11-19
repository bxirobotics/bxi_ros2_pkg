// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication:msg/ActuatorStatus.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__ACTUATOR_STATUS__STRUCT_H_
#define COMMUNICATION__MSG__DETAIL__ACTUATOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'status'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ActuatorStatus in the package communication.
typedef struct communication__msg__ActuatorStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  /// One status per name; values are defined in communication/actuator_status.hpp.
  /// 0 OK, 1 DISABLED, 2 FEEDBACK_TIMEOUT, 3 COMMAND_TIMEOUT,
  /// 4 ERROR_OVER_POSITION, 5 ERROR_OVER_VELOCITY, 6 ERROR_OVER_TORQUE,
  /// 7 ERROR_SAFE_MODE, 8 CAN_RX_DROP, 9 CAN_TX_ERROR, 10 ERROR_LATCHED,
  /// 255 ERROR_UNKNOWN. If multiple conditions apply, only the highest priority is sent.
  rosidl_runtime_c__uint8__Sequence status;
} communication__msg__ActuatorStatus;

// Struct for a sequence of communication__msg__ActuatorStatus.
typedef struct communication__msg__ActuatorStatus__Sequence
{
  communication__msg__ActuatorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__msg__ActuatorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__MSG__DETAIL__ACTUATOR_STATUS__STRUCT_H_
