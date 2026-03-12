// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from communication:msg/ActuatorStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "communication/msg/detail/actuator_states__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace communication
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ActuatorStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) communication::msg::ActuatorStates(_init);
}

void ActuatorStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<communication::msg::ActuatorStates *>(message_memory);
  typed_message->~ActuatorStates();
}

size_t size_function__ActuatorStates__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorStates__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorStates__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorStates__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ActuatorStates__name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ActuatorStates__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ActuatorStates__name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ActuatorStates__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActuatorStates__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorStates__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorStates__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorStates__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ActuatorStates__position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ActuatorStates__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ActuatorStates__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ActuatorStates__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActuatorStates__velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorStates__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorStates__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorStates__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ActuatorStates__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ActuatorStates__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ActuatorStates__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ActuatorStates__velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActuatorStates__effort(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorStates__effort(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorStates__effort(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorStates__effort(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ActuatorStates__effort(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ActuatorStates__effort(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ActuatorStates__effort(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ActuatorStates__effort(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActuatorStates__driver_temperature(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorStates__driver_temperature(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorStates__driver_temperature(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorStates__driver_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ActuatorStates__driver_temperature(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ActuatorStates__driver_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ActuatorStates__driver_temperature(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ActuatorStates__driver_temperature(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActuatorStates__motor_temperature(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorStates__motor_temperature(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorStates__motor_temperature(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorStates__motor_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ActuatorStates__motor_temperature(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ActuatorStates__motor_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ActuatorStates__motor_temperature(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ActuatorStates__motor_temperature(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActuatorStates_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorStates, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorStates, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorStates__name,  // size() function pointer
    get_const_function__ActuatorStates__name,  // get_const(index) function pointer
    get_function__ActuatorStates__name,  // get(index) function pointer
    fetch_function__ActuatorStates__name,  // fetch(index, &value) function pointer
    assign_function__ActuatorStates__name,  // assign(index, value) function pointer
    resize_function__ActuatorStates__name  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorStates, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorStates__position,  // size() function pointer
    get_const_function__ActuatorStates__position,  // get_const(index) function pointer
    get_function__ActuatorStates__position,  // get(index) function pointer
    fetch_function__ActuatorStates__position,  // fetch(index, &value) function pointer
    assign_function__ActuatorStates__position,  // assign(index, value) function pointer
    resize_function__ActuatorStates__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorStates, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorStates__velocity,  // size() function pointer
    get_const_function__ActuatorStates__velocity,  // get_const(index) function pointer
    get_function__ActuatorStates__velocity,  // get(index) function pointer
    fetch_function__ActuatorStates__velocity,  // fetch(index, &value) function pointer
    assign_function__ActuatorStates__velocity,  // assign(index, value) function pointer
    resize_function__ActuatorStates__velocity  // resize(index) function pointer
  },
  {
    "effort",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorStates, effort),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorStates__effort,  // size() function pointer
    get_const_function__ActuatorStates__effort,  // get_const(index) function pointer
    get_function__ActuatorStates__effort,  // get(index) function pointer
    fetch_function__ActuatorStates__effort,  // fetch(index, &value) function pointer
    assign_function__ActuatorStates__effort,  // assign(index, value) function pointer
    resize_function__ActuatorStates__effort  // resize(index) function pointer
  },
  {
    "driver_temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorStates, driver_temperature),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorStates__driver_temperature,  // size() function pointer
    get_const_function__ActuatorStates__driver_temperature,  // get_const(index) function pointer
    get_function__ActuatorStates__driver_temperature,  // get(index) function pointer
    fetch_function__ActuatorStates__driver_temperature,  // fetch(index, &value) function pointer
    assign_function__ActuatorStates__driver_temperature,  // assign(index, value) function pointer
    resize_function__ActuatorStates__driver_temperature  // resize(index) function pointer
  },
  {
    "motor_temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorStates, motor_temperature),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorStates__motor_temperature,  // size() function pointer
    get_const_function__ActuatorStates__motor_temperature,  // get_const(index) function pointer
    get_function__ActuatorStates__motor_temperature,  // get(index) function pointer
    fetch_function__ActuatorStates__motor_temperature,  // fetch(index, &value) function pointer
    assign_function__ActuatorStates__motor_temperature,  // assign(index, value) function pointer
    resize_function__ActuatorStates__motor_temperature  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActuatorStates_message_members = {
  "communication::msg",  // message namespace
  "ActuatorStates",  // message name
  7,  // number of fields
  sizeof(communication::msg::ActuatorStates),
  ActuatorStates_message_member_array,  // message members
  ActuatorStates_init_function,  // function to initialize message memory (memory has to be allocated)
  ActuatorStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActuatorStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActuatorStates_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace communication


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<communication::msg::ActuatorStates>()
{
  return &::communication::msg::rosidl_typesupport_introspection_cpp::ActuatorStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, communication, msg, ActuatorStates)() {
  return &::communication::msg::rosidl_typesupport_introspection_cpp::ActuatorStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
