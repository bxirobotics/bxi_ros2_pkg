// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication:msg/DiagnosticEvent.idl
// generated code does not contain a copyright notice
#include "communication/msg/detail/diagnostic_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `source`
#include "rosidl_runtime_c/string_functions.h"

bool
communication__msg__DiagnosticEvent__init(communication__msg__DiagnosticEvent * msg)
{
  if (!msg) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    communication__msg__DiagnosticEvent__fini(msg);
    return false;
  }
  // code
  // active
  return true;
}

void
communication__msg__DiagnosticEvent__fini(communication__msg__DiagnosticEvent * msg)
{
  if (!msg) {
    return;
  }
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // code
  // active
}

bool
communication__msg__DiagnosticEvent__are_equal(const communication__msg__DiagnosticEvent * lhs, const communication__msg__DiagnosticEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  return true;
}

bool
communication__msg__DiagnosticEvent__copy(
  const communication__msg__DiagnosticEvent * input,
  communication__msg__DiagnosticEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // code
  output->code = input->code;
  // active
  output->active = input->active;
  return true;
}

communication__msg__DiagnosticEvent *
communication__msg__DiagnosticEvent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__DiagnosticEvent * msg = (communication__msg__DiagnosticEvent *)allocator.allocate(sizeof(communication__msg__DiagnosticEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication__msg__DiagnosticEvent));
  bool success = communication__msg__DiagnosticEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication__msg__DiagnosticEvent__destroy(communication__msg__DiagnosticEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication__msg__DiagnosticEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication__msg__DiagnosticEvent__Sequence__init(communication__msg__DiagnosticEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__DiagnosticEvent * data = NULL;

  if (size) {
    data = (communication__msg__DiagnosticEvent *)allocator.zero_allocate(size, sizeof(communication__msg__DiagnosticEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication__msg__DiagnosticEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication__msg__DiagnosticEvent__fini(&data[i - 1]);
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
communication__msg__DiagnosticEvent__Sequence__fini(communication__msg__DiagnosticEvent__Sequence * array)
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
      communication__msg__DiagnosticEvent__fini(&array->data[i]);
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

communication__msg__DiagnosticEvent__Sequence *
communication__msg__DiagnosticEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__DiagnosticEvent__Sequence * array = (communication__msg__DiagnosticEvent__Sequence *)allocator.allocate(sizeof(communication__msg__DiagnosticEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication__msg__DiagnosticEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication__msg__DiagnosticEvent__Sequence__destroy(communication__msg__DiagnosticEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication__msg__DiagnosticEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication__msg__DiagnosticEvent__Sequence__are_equal(const communication__msg__DiagnosticEvent__Sequence * lhs, const communication__msg__DiagnosticEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication__msg__DiagnosticEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication__msg__DiagnosticEvent__Sequence__copy(
  const communication__msg__DiagnosticEvent__Sequence * input,
  communication__msg__DiagnosticEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication__msg__DiagnosticEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication__msg__DiagnosticEvent * data =
      (communication__msg__DiagnosticEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication__msg__DiagnosticEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication__msg__DiagnosticEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication__msg__DiagnosticEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
