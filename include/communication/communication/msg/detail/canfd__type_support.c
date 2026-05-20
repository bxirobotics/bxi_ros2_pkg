// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication:msg/CANFD.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication/msg/detail/canfd__rosidl_typesupport_introspection_c.h"
#include "communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication/msg/detail/canfd__functions.h"
#include "communication/msg/detail/canfd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void communication__msg__CANFD__rosidl_typesupport_introspection_c__CANFD_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication__msg__CANFD__init(message_memory);
}

void communication__msg__CANFD__rosidl_typesupport_introspection_c__CANFD_fini_function(void * message_memory)
{
  communication__msg__CANFD__fini(message_memory);
}

size_t communication__msg__CANFD__rosidl_typesupport_introspection_c__size_function__CANFD__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * communication__msg__CANFD__rosidl_typesupport_introspection_c__get_const_function__CANFD__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * communication__msg__CANFD__rosidl_typesupport_introspection_c__get_function__CANFD__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void communication__msg__CANFD__rosidl_typesupport_introspection_c__fetch_function__CANFD__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    communication__msg__CANFD__rosidl_typesupport_introspection_c__get_const_function__CANFD__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void communication__msg__CANFD__rosidl_typesupport_introspection_c__assign_function__CANFD__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    communication__msg__CANFD__rosidl_typesupport_introspection_c__get_function__CANFD__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember communication__msg__CANFD__rosidl_typesupport_introspection_c__CANFD_message_member_array[6] = {
  {
    "can_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__CANFD, can_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "len",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__CANFD, len),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__CANFD, flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "res0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__CANFD, res0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "res1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__CANFD, res1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(communication__msg__CANFD, data),  // bytes offset in struct
    NULL,  // default value
    communication__msg__CANFD__rosidl_typesupport_introspection_c__size_function__CANFD__data,  // size() function pointer
    communication__msg__CANFD__rosidl_typesupport_introspection_c__get_const_function__CANFD__data,  // get_const(index) function pointer
    communication__msg__CANFD__rosidl_typesupport_introspection_c__get_function__CANFD__data,  // get(index) function pointer
    communication__msg__CANFD__rosidl_typesupport_introspection_c__fetch_function__CANFD__data,  // fetch(index, &value) function pointer
    communication__msg__CANFD__rosidl_typesupport_introspection_c__assign_function__CANFD__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers communication__msg__CANFD__rosidl_typesupport_introspection_c__CANFD_message_members = {
  "communication__msg",  // message namespace
  "CANFD",  // message name
  6,  // number of fields
  sizeof(communication__msg__CANFD),
  communication__msg__CANFD__rosidl_typesupport_introspection_c__CANFD_message_member_array,  // message members
  communication__msg__CANFD__rosidl_typesupport_introspection_c__CANFD_init_function,  // function to initialize message memory (memory has to be allocated)
  communication__msg__CANFD__rosidl_typesupport_introspection_c__CANFD_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t communication__msg__CANFD__rosidl_typesupport_introspection_c__CANFD_message_type_support_handle = {
  0,
  &communication__msg__CANFD__rosidl_typesupport_introspection_c__CANFD_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication, msg, CANFD)() {
  if (!communication__msg__CANFD__rosidl_typesupport_introspection_c__CANFD_message_type_support_handle.typesupport_identifier) {
    communication__msg__CANFD__rosidl_typesupport_introspection_c__CANFD_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &communication__msg__CANFD__rosidl_typesupport_introspection_c__CANFD_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
