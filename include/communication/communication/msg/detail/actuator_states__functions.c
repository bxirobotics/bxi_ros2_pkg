// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication:msg/ActuatorStates.idl
// generated code does not contain a copyright notice
#include "communication/msg/detail/actuator_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `effort`
// Member `driver_temperature`
// Member `motor_temperature`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
communication__msg__ActuatorStates__init(communication__msg__ActuatorStates * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    communication__msg__ActuatorStates__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    communication__msg__ActuatorStates__fini(msg);
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    communication__msg__ActuatorStates__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity, 0)) {
    communication__msg__ActuatorStates__fini(msg);
    return false;
  }
  // effort
  if (!rosidl_runtime_c__double__Sequence__init(&msg->effort, 0)) {
    communication__msg__ActuatorStates__fini(msg);
    return false;
  }
  // driver_temperature
  if (!rosidl_runtime_c__double__Sequence__init(&msg->driver_temperature, 0)) {
    communication__msg__ActuatorStates__fini(msg);
    return false;
  }
  // motor_temperature
  if (!rosidl_runtime_c__double__Sequence__init(&msg->motor_temperature, 0)) {
    communication__msg__ActuatorStates__fini(msg);
    return false;
  }
  return true;
}

void
communication__msg__ActuatorStates__fini(communication__msg__ActuatorStates * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
  // velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity);
  // effort
  rosidl_runtime_c__double__Sequence__fini(&msg->effort);
  // driver_temperature
  rosidl_runtime_c__double__Sequence__fini(&msg->driver_temperature);
  // motor_temperature
  rosidl_runtime_c__double__Sequence__fini(&msg->motor_temperature);
}

bool
communication__msg__ActuatorStates__are_equal(const communication__msg__ActuatorStates * lhs, const communication__msg__ActuatorStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // effort
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->effort), &(rhs->effort)))
  {
    return false;
  }
  // driver_temperature
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->driver_temperature), &(rhs->driver_temperature)))
  {
    return false;
  }
  // motor_temperature
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->motor_temperature), &(rhs->motor_temperature)))
  {
    return false;
  }
  return true;
}

bool
communication__msg__ActuatorStates__copy(
  const communication__msg__ActuatorStates * input,
  communication__msg__ActuatorStates * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // effort
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->effort), &(output->effort)))
  {
    return false;
  }
  // driver_temperature
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->driver_temperature), &(output->driver_temperature)))
  {
    return false;
  }
  // motor_temperature
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->motor_temperature), &(output->motor_temperature)))
  {
    return false;
  }
  return true;
}

communication__msg__ActuatorStates *
communication__msg__ActuatorStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__ActuatorStates * msg = (communication__msg__ActuatorStates *)allocator.allocate(sizeof(communication__msg__ActuatorStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication__msg__ActuatorStates));
  bool success = communication__msg__ActuatorStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication__msg__ActuatorStates__destroy(communication__msg__ActuatorStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication__msg__ActuatorStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication__msg__ActuatorStates__Sequence__init(communication__msg__ActuatorStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__ActuatorStates * data = NULL;

  if (size) {
    data = (communication__msg__ActuatorStates *)allocator.zero_allocate(size, sizeof(communication__msg__ActuatorStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication__msg__ActuatorStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication__msg__ActuatorStates__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
communication__msg__ActuatorStates__Sequence__fini(communication__msg__ActuatorStates__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      communication__msg__ActuatorStates__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

communication__msg__ActuatorStates__Sequence *
communication__msg__ActuatorStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__ActuatorStates__Sequence * array = (communication__msg__ActuatorStates__Sequence *)allocator.allocate(sizeof(communication__msg__ActuatorStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication__msg__ActuatorStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication__msg__ActuatorStates__Sequence__destroy(communication__msg__ActuatorStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication__msg__ActuatorStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication__msg__ActuatorStates__Sequence__are_equal(const communication__msg__ActuatorStates__Sequence * lhs, const communication__msg__ActuatorStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication__msg__ActuatorStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication__msg__ActuatorStates__Sequence__copy(
  const communication__msg__ActuatorStates__Sequence * input,
  communication__msg__ActuatorStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication__msg__ActuatorStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication__msg__ActuatorStates * data =
      (communication__msg__ActuatorStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication__msg__ActuatorStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication__msg__ActuatorStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication__msg__ActuatorStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
