// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication:msg/DiagnosticEvent.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__DIAGNOSTIC_EVENT__STRUCT_H_
#define COMMUNICATION__MSG__DETAIL__DIAGNOSTIC_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DiagnosticEvent in the package communication.
/**
  * One problem transition. Receiver key: (source, code).
  * Source scope without a leading/trailing slash or the problem name.
 */
typedef struct communication__msg__DiagnosticEvent
{
  rosidl_runtime_c__String source;
  /// Bits 15..14 priority, 13..12 reserved=0, 11..5 type, 4..0 problem.
  /// Keep the original code on recovery; problem 0 is reserved.
  uint16_t code;
  /// true: occurred, false: recovered. Unchanged problems are not repeated.
  bool active;
} communication__msg__DiagnosticEvent;

// Struct for a sequence of communication__msg__DiagnosticEvent.
typedef struct communication__msg__DiagnosticEvent__Sequence
{
  communication__msg__DiagnosticEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__msg__DiagnosticEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__MSG__DETAIL__DIAGNOSTIC_EVENT__STRUCT_H_
