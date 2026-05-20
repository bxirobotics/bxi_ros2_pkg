// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication:msg/CANFD.idl
// generated code does not contain a copyright notice
#include "communication/msg/detail/canfd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
communication__msg__CANFD__init(communication__msg__CANFD * msg)
{
  if (!msg) {
    return false;
  }
  // can_id
  // len
  // flags
  // res0
  // res1
  // data
  return true;
}

void
communication__msg__CANFD__fini(communication__msg__CANFD * msg)
{
  if (!msg) {
    return;
  }
  // can_id
  // len
  // flags
  // res0
  // res1
  // data
}

bool
communication__msg__CANFD__are_equal(const communication__msg__CANFD * lhs, const communication__msg__CANFD * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // can_id
  if (lhs->can_id != rhs->can_id) {
    return false;
  }
  // len
  if (lhs->len != rhs->len) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // res0
  if (lhs->res0 != rhs->res0) {
    return false;
  }
  // res1
  if (lhs->res1 != rhs->res1) {
    return false;
  }
  // data
  for (size_t i = 0; i < 64; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  return true;
}

bool
communication__msg__CANFD__copy(
  const communication__msg__CANFD * input,
  communication__msg__CANFD * output)
{
  if (!input || !output) {
    return false;
  }
  // can_id
  output->can_id = input->can_id;
  // len
  output->len = input->len;
  // flags
  output->flags = input->flags;
  // res0
  output->res0 = input->res0;
  // res1
  output->res1 = input->res1;
  // data
  for (size_t i = 0; i < 64; ++i) {
    output->data[i] = input->data[i];
  }
  return true;
}

communication__msg__CANFD *
communication__msg__CANFD__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__CANFD * msg = (communication__msg__CANFD *)allocator.allocate(sizeof(communication__msg__CANFD), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication__msg__CANFD));
  bool success = communication__msg__CANFD__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication__msg__CANFD__destroy(communication__msg__CANFD * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication__msg__CANFD__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication__msg__CANFD__Sequence__init(communication__msg__CANFD__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__CANFD * data = NULL;

  if (size) {
    data = (communication__msg__CANFD *)allocator.zero_allocate(size, sizeof(communication__msg__CANFD), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication__msg__CANFD__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication__msg__CANFD__fini(&data[i - 1]);
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
communication__msg__CANFD__Sequence__fini(communication__msg__CANFD__Sequence * array)
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
      communication__msg__CANFD__fini(&array->data[i]);
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

communication__msg__CANFD__Sequence *
communication__msg__CANFD__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__CANFD__Sequence * array = (communication__msg__CANFD__Sequence *)allocator.allocate(sizeof(communication__msg__CANFD__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication__msg__CANFD__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication__msg__CANFD__Sequence__destroy(communication__msg__CANFD__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication__msg__CANFD__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication__msg__CANFD__Sequence__are_equal(const communication__msg__CANFD__Sequence * lhs, const communication__msg__CANFD__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication__msg__CANFD__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication__msg__CANFD__Sequence__copy(
  const communication__msg__CANFD__Sequence * input,
  communication__msg__CANFD__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication__msg__CANFD);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication__msg__CANFD * data =
      (communication__msg__CANFD *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication__msg__CANFD__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication__msg__CANFD__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication__msg__CANFD__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
