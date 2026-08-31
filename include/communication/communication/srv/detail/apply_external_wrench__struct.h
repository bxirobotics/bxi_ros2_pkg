// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication:srv/ApplyExternalWrench.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__APPLY_EXTERNAL_WRENCH__STRUCT_H_
#define COMMUNICATION__SRV__DETAIL__APPLY_EXTERNAL_WRENCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'APPLY'.
enum
{
  communication__srv__ApplyExternalWrench_Request__APPLY = 0
};

/// Constant 'CLEAR'.
enum
{
  communication__srv__ApplyExternalWrench_Request__CLEAR = 1
};

/// Constant 'CLEAR_ALL'.
enum
{
  communication__srv__ApplyExternalWrench_Request__CLEAR_ALL = 2
};

/// Constant 'WORLD_FRAME'.
/**
  * The frame in which wrench and application_point are expressed.
 */
enum
{
  communication__srv__ApplyExternalWrench_Request__WORLD_FRAME = 0
};

/// Constant 'BODY_FRAME'.
enum
{
  communication__srv__ApplyExternalWrench_Request__BODY_FRAME = 1
};

// Include directives for member types
// Member 'wrench_id'
// Member 'body_name'
#include "rosidl_runtime_c/string.h"
// Member 'application_point'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in srv/ApplyExternalWrench in the package communication.
typedef struct communication__srv__ApplyExternalWrench_Request
{
  uint8_t operation;
  /// Caller-provided identifier. APPLY replaces an existing command with the same
  /// identifier; CLEAR removes it. It is ignored by CLEAR_ALL.
  rosidl_runtime_c__String wrench_id;
  /// MuJoCo body name. Required by APPLY.
  rosidl_runtime_c__String body_name;
  uint8_t reference_frame;
  /// If true, application_point is ignored and the wrench is applied at the body
  /// center of mass. Otherwise, the point is interpreted in reference_frame.
  bool at_center_of_mass;
  geometry_msgs__msg__Point application_point;
  geometry_msgs__msg__Wrench wrench;
  /// A persistent wrench remains active until CLEAR, CLEAR_ALL, reset, or model
  /// reload. For a non-persistent wrench, zero duration means one simulation step.
  bool persistent;
  builtin_interfaces__msg__Duration duration;
} communication__srv__ApplyExternalWrench_Request;

// Struct for a sequence of communication__srv__ApplyExternalWrench_Request.
typedef struct communication__srv__ApplyExternalWrench_Request__Sequence
{
  communication__srv__ApplyExternalWrench_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__srv__ApplyExternalWrench_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ApplyExternalWrench in the package communication.
typedef struct communication__srv__ApplyExternalWrench_Response
{
  bool success;
  rosidl_runtime_c__String message;
} communication__srv__ApplyExternalWrench_Response;

// Struct for a sequence of communication__srv__ApplyExternalWrench_Response.
typedef struct communication__srv__ApplyExternalWrench_Response__Sequence
{
  communication__srv__ApplyExternalWrench_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__srv__ApplyExternalWrench_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__SRV__DETAIL__APPLY_EXTERNAL_WRENCH__STRUCT_H_
