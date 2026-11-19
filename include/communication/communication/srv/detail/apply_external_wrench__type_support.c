// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication:srv/ApplyExternalWrench.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication/srv/detail/apply_external_wrench__rosidl_typesupport_introspection_c.h"
#include "communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication/srv/detail/apply_external_wrench__functions.h"
#include "communication/srv/detail/apply_external_wrench__struct.h"


// Include directives for member types
// Member `wrench_id`
// Member `body_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `application_point`
#include "geometry_msgs/msg/point.h"
// Member `application_point`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `wrench`
#include "geometry_msgs/msg/wrench.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__rosidl_typesupport_introspection_c.h"
// Member `duration`
#include "builtin_interfaces/msg/duration.h"
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication__srv__ApplyExternalWrench_Request__init(message_memory);
}

void communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_fini_function(void * message_memory)
{
  communication__srv__ApplyExternalWrench_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_message_member_array[9] = {
  {
    "operation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__srv__ApplyExternalWrench_Request, operation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrench_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__srv__ApplyExternalWrench_Request, wrench_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "body_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__srv__ApplyExternalWrench_Request, body_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__srv__ApplyExternalWrench_Request, reference_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "at_center_of_mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__srv__ApplyExternalWrench_Request, at_center_of_mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "application_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__srv__ApplyExternalWrench_Request, application_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrench",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__srv__ApplyExternalWrench_Request, wrench),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "persistent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__srv__ApplyExternalWrench_Request, persistent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__srv__ApplyExternalWrench_Request, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_message_members = {
  "communication__srv",  // message namespace
  "ApplyExternalWrench_Request",  // message name
  9,  // number of fields
  sizeof(communication__srv__ApplyExternalWrench_Request),
  communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_message_member_array,  // message members
  communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_message_type_support_handle = {
  0,
  &communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication, srv, ApplyExternalWrench_Request)() {
  communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_message_type_support_handle.typesupport_identifier) {
    communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &communication__srv__ApplyExternalWrench_Request__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "communication/srv/detail/apply_external_wrench__rosidl_typesupport_introspection_c.h"
// already included above
// #include "communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "communication/srv/detail/apply_external_wrench__functions.h"
// already included above
// #include "communication/srv/detail/apply_external_wrench__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void communication__srv__ApplyExternalWrench_Response__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication__srv__ApplyExternalWrench_Response__init(message_memory);
}

void communication__srv__ApplyExternalWrench_Response__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_fini_function(void * message_memory)
{
  communication__srv__ApplyExternalWrench_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember communication__srv__ApplyExternalWrench_Response__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__srv__ApplyExternalWrench_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__srv__ApplyExternalWrench_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers communication__srv__ApplyExternalWrench_Response__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_message_members = {
  "communication__srv",  // message namespace
  "ApplyExternalWrench_Response",  // message name
  2,  // number of fields
  sizeof(communication__srv__ApplyExternalWrench_Response),
  communication__srv__ApplyExternalWrench_Response__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_message_member_array,  // message members
  communication__srv__ApplyExternalWrench_Response__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  communication__srv__ApplyExternalWrench_Response__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t communication__srv__ApplyExternalWrench_Response__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_message_type_support_handle = {
  0,
  &communication__srv__ApplyExternalWrench_Response__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication, srv, ApplyExternalWrench_Response)() {
  if (!communication__srv__ApplyExternalWrench_Response__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_message_type_support_handle.typesupport_identifier) {
    communication__srv__ApplyExternalWrench_Response__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &communication__srv__ApplyExternalWrench_Response__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "communication/srv/detail/apply_external_wrench__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers communication__srv__detail__apply_external_wrench__rosidl_typesupport_introspection_c__ApplyExternalWrench_service_members = {
  "communication__srv",  // service namespace
  "ApplyExternalWrench",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // communication__srv__detail__apply_external_wrench__rosidl_typesupport_introspection_c__ApplyExternalWrench_Request_message_type_support_handle,
  NULL  // response message
  // communication__srv__detail__apply_external_wrench__rosidl_typesupport_introspection_c__ApplyExternalWrench_Response_message_type_support_handle
};

static rosidl_service_type_support_t communication__srv__detail__apply_external_wrench__rosidl_typesupport_introspection_c__ApplyExternalWrench_service_type_support_handle = {
  0,
  &communication__srv__detail__apply_external_wrench__rosidl_typesupport_introspection_c__ApplyExternalWrench_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication, srv, ApplyExternalWrench_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication, srv, ApplyExternalWrench_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication, srv, ApplyExternalWrench)() {
  if (!communication__srv__detail__apply_external_wrench__rosidl_typesupport_introspection_c__ApplyExternalWrench_service_type_support_handle.typesupport_identifier) {
    communication__srv__detail__apply_external_wrench__rosidl_typesupport_introspection_c__ApplyExternalWrench_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)communication__srv__detail__apply_external_wrench__rosidl_typesupport_introspection_c__ApplyExternalWrench_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication, srv, ApplyExternalWrench_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication, srv, ApplyExternalWrench_Response)()->data;
  }

  return &communication__srv__detail__apply_external_wrench__rosidl_typesupport_introspection_c__ApplyExternalWrench_service_type_support_handle;
}
