// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication:msg/ActuatorStates.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__ACTUATOR_STATES__STRUCT_H_
#define COMMUNICATION__MSG__DETAIL__ACTUATOR_STATES__STRUCT_H_

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
// Member 'position'
// Member 'velocity'
// Member 'effort'
// Member 'driver_temperature'
// Member 'motor_temperature'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ActuatorStates in the package communication.
typedef struct communication__msg__ActuatorStates
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__double__Sequence position;
  rosidl_runtime_c__double__Sequence velocity;
  rosidl_runtime_c__double__Sequence effort;
  rosidl_runtime_c__double__Sequence driver_temperature;
  rosidl_runtime_c__double__Sequence motor_temperature;
} communication__msg__ActuatorStates;

// Struct for a sequence of communication__msg__ActuatorStates.
typedef struct communication__msg__ActuatorStates__Sequence
{
  communication__msg__ActuatorStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__msg__ActuatorStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__MSG__DETAIL__ACTUATOR_STATES__STRUCT_H_
