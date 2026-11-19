// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication:msg/DiagnosticEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication/msg/detail/diagnostic_event__rosidl_typesupport_introspection_c.h"
#include "communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication/msg/detail/diagnostic_event__functions.h"
#include "communication/msg/detail/diagnostic_event__struct.h"


// Include directives for member types
// Member `source`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void communication__msg__DiagnosticEvent__rosidl_typesupport_introspection_c__DiagnosticEvent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication__msg__DiagnosticEvent__init(message_memory);
}

void communication__msg__DiagnosticEvent__rosidl_typesupport_introspection_c__DiagnosticEvent_fini_function(void * message_memory)
{
  communication__msg__DiagnosticEvent__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember communication__msg__DiagnosticEvent__rosidl_typesupport_introspection_c__DiagnosticEvent_message_member_array[3] = {
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__DiagnosticEvent, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__DiagnosticEvent, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__DiagnosticEvent, active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers communication__msg__DiagnosticEvent__rosidl_typesupport_introspection_c__DiagnosticEvent_message_members = {
  "communication__msg",  // message namespace
  "DiagnosticEvent",  // message name
  3,  // number of fields
  sizeof(communication__msg__DiagnosticEvent),
  communication__msg__DiagnosticEvent__rosidl_typesupport_introspection_c__DiagnosticEvent_message_member_array,  // message members
  communication__msg__DiagnosticEvent__rosidl_typesupport_introspection_c__DiagnosticEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  communication__msg__DiagnosticEvent__rosidl_typesupport_introspection_c__DiagnosticEvent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t communication__msg__DiagnosticEvent__rosidl_typesupport_introspection_c__DiagnosticEvent_message_type_support_handle = {
  0,
  &communication__msg__DiagnosticEvent__rosidl_typesupport_introspection_c__DiagnosticEvent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication, msg, DiagnosticEvent)() {
  if (!communication__msg__DiagnosticEvent__rosidl_typesupport_introspection_c__DiagnosticEvent_message_type_support_handle.typesupport_identifier) {
    communication__msg__DiagnosticEvent__rosidl_typesupport_introspection_c__DiagnosticEvent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &communication__msg__DiagnosticEvent__rosidl_typesupport_introspection_c__DiagnosticEvent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
