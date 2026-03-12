// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication:msg/ActuatorStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication/msg/detail/actuator_states__rosidl_typesupport_introspection_c.h"
#include "communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication/msg/detail/actuator_states__functions.h"
#include "communication/msg/detail/actuator_states__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `effort`
// Member `driver_temperature`
// Member `motor_temperature`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication__msg__ActuatorStates__init(message_memory);
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_fini_function(void * message_memory)
{
  communication__msg__ActuatorStates__fini(message_memory);
}

size_t communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__size_function__ActuatorStates__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__fetch_function__ActuatorStates__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__assign_function__ActuatorStates__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__resize_function__ActuatorStates__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__size_function__ActuatorStates__position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__fetch_function__ActuatorStates__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__assign_function__ActuatorStates__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__resize_function__ActuatorStates__position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__size_function__ActuatorStates__velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__fetch_function__ActuatorStates__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__assign_function__ActuatorStates__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__resize_function__ActuatorStates__velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__size_function__ActuatorStates__effort(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__effort(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__effort(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__fetch_function__ActuatorStates__effort(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__effort(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__assign_function__ActuatorStates__effort(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__effort(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__resize_function__ActuatorStates__effort(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__size_function__ActuatorStates__driver_temperature(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__driver_temperature(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__driver_temperature(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__fetch_function__ActuatorStates__driver_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__driver_temperature(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__assign_function__ActuatorStates__driver_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__driver_temperature(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__resize_function__ActuatorStates__driver_temperature(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__size_function__ActuatorStates__motor_temperature(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__motor_temperature(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__motor_temperature(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__fetch_function__ActuatorStates__motor_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__motor_temperature(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__assign_function__ActuatorStates__motor_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__motor_temperature(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__resize_function__ActuatorStates__motor_temperature(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__ActuatorStates, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__ActuatorStates, name),  // bytes offset in struct
    NULL,  // default value
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__size_function__ActuatorStates__name,  // size() function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__name,  // get_const(index) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__name,  // get(index) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__fetch_function__ActuatorStates__name,  // fetch(index, &value) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__assign_function__ActuatorStates__name,  // assign(index, value) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__resize_function__ActuatorStates__name  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__ActuatorStates, position),  // bytes offset in struct
    NULL,  // default value
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__size_function__ActuatorStates__position,  // size() function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__position,  // get_const(index) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__position,  // get(index) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__fetch_function__ActuatorStates__position,  // fetch(index, &value) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__assign_function__ActuatorStates__position,  // assign(index, value) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__resize_function__ActuatorStates__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__ActuatorStates, velocity),  // bytes offset in struct
    NULL,  // default value
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__size_function__ActuatorStates__velocity,  // size() function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__velocity,  // get_const(index) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__velocity,  // get(index) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__fetch_function__ActuatorStates__velocity,  // fetch(index, &value) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__assign_function__ActuatorStates__velocity,  // assign(index, value) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__resize_function__ActuatorStates__velocity  // resize(index) function pointer
  },
  {
    "effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__ActuatorStates, effort),  // bytes offset in struct
    NULL,  // default value
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__size_function__ActuatorStates__effort,  // size() function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__effort,  // get_const(index) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__effort,  // get(index) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__fetch_function__ActuatorStates__effort,  // fetch(index, &value) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__assign_function__ActuatorStates__effort,  // assign(index, value) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__resize_function__ActuatorStates__effort  // resize(index) function pointer
  },
  {
    "driver_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__ActuatorStates, driver_temperature),  // bytes offset in struct
    NULL,  // default value
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__size_function__ActuatorStates__driver_temperature,  // size() function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__driver_temperature,  // get_const(index) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__driver_temperature,  // get(index) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__fetch_function__ActuatorStates__driver_temperature,  // fetch(index, &value) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__assign_function__ActuatorStates__driver_temperature,  // assign(index, value) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__resize_function__ActuatorStates__driver_temperature  // resize(index) function pointer
  },
  {
    "motor_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__ActuatorStates, motor_temperature),  // bytes offset in struct
    NULL,  // default value
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__size_function__ActuatorStates__motor_temperature,  // size() function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_const_function__ActuatorStates__motor_temperature,  // get_const(index) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__get_function__ActuatorStates__motor_temperature,  // get(index) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__fetch_function__ActuatorStates__motor_temperature,  // fetch(index, &value) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__assign_function__ActuatorStates__motor_temperature,  // assign(index, value) function pointer
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__resize_function__ActuatorStates__motor_temperature  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_message_members = {
  "communication__msg",  // message namespace
  "ActuatorStates",  // message name
  7,  // number of fields
  sizeof(communication__msg__ActuatorStates),
  communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_message_member_array,  // message members
  communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_init_function,  // function to initialize message memory (memory has to be allocated)
  communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_message_type_support_handle = {
  0,
  &communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication, msg, ActuatorStates)() {
  communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_message_type_support_handle.typesupport_identifier) {
    communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &communication__msg__ActuatorStates__rosidl_typesupport_introspection_c__ActuatorStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
