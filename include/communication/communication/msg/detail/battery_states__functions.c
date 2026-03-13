// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication:msg/BatteryStates.idl
// generated code does not contain a copyright notice
#include "communication/msg/detail/battery_states__functions.h"

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

bool
communication__msg__BatteryStates__init(communication__msg__BatteryStates * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    communication__msg__BatteryStates__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    communication__msg__BatteryStates__fini(msg);
    return false;
  }
  // voltage
  // current
  // soc
  // battery_temperature
  return true;
}

void
communication__msg__BatteryStates__fini(communication__msg__BatteryStates * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // voltage
  // current
  // soc
  // battery_temperature
}

bool
communication__msg__BatteryStates__are_equal(const communication__msg__BatteryStates * lhs, const communication__msg__BatteryStates * rhs)
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
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // soc
  if (lhs->soc != rhs->soc) {
    return false;
  }
  // battery_temperature
  if (lhs->battery_temperature != rhs->battery_temperature) {
    return false;
  }
  return true;
}

bool
communication__msg__BatteryStates__copy(
  const communication__msg__BatteryStates * input,
  communication__msg__BatteryStates * output)
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
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // voltage
  output->voltage = input->voltage;
  // current
  output->current = input->current;
  // soc
  output->soc = input->soc;
  // battery_temperature
  output->battery_temperature = input->battery_temperature;
  return true;
}

communication__msg__BatteryStates *
communication__msg__BatteryStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__BatteryStates * msg = (communication__msg__BatteryStates *)allocator.allocate(sizeof(communication__msg__BatteryStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication__msg__BatteryStates));
  bool success = communication__msg__BatteryStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication__msg__BatteryStates__destroy(communication__msg__BatteryStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication__msg__BatteryStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication__msg__BatteryStates__Sequence__init(communication__msg__BatteryStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__BatteryStates * data = NULL;

  if (size) {
    data = (communication__msg__BatteryStates *)allocator.zero_allocate(size, sizeof(communication__msg__BatteryStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication__msg__BatteryStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication__msg__BatteryStates__fini(&data[i - 1]);
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
communication__msg__BatteryStates__Sequence__fini(communication__msg__BatteryStates__Sequence * array)
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
      communication__msg__BatteryStates__fini(&array->data[i]);
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

communication__msg__BatteryStates__Sequence *
communication__msg__BatteryStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__BatteryStates__Sequence * array = (communication__msg__BatteryStates__Sequence *)allocator.allocate(sizeof(communication__msg__BatteryStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication__msg__BatteryStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication__msg__BatteryStates__Sequence__destroy(communication__msg__BatteryStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication__msg__BatteryStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication__msg__BatteryStates__Sequence__are_equal(const communication__msg__BatteryStates__Sequence * lhs, const communication__msg__BatteryStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication__msg__BatteryStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication__msg__BatteryStates__Sequence__copy(
  const communication__msg__BatteryStates__Sequence * input,
  communication__msg__BatteryStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication__msg__BatteryStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication__msg__BatteryStates * data =
      (communication__msg__BatteryStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication__msg__BatteryStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication__msg__BatteryStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication__msg__BatteryStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
