// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication:srv/ApplyExternalWrench.idl
// generated code does not contain a copyright notice
#include "communication/srv/detail/apply_external_wrench__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `wrench_id`
// Member `body_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `application_point`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__functions.h"
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
communication__srv__ApplyExternalWrench_Request__init(communication__srv__ApplyExternalWrench_Request * msg)
{
  if (!msg) {
    return false;
  }
  // operation
  // wrench_id
  if (!rosidl_runtime_c__String__init(&msg->wrench_id)) {
    communication__srv__ApplyExternalWrench_Request__fini(msg);
    return false;
  }
  // body_name
  if (!rosidl_runtime_c__String__init(&msg->body_name)) {
    communication__srv__ApplyExternalWrench_Request__fini(msg);
    return false;
  }
  // reference_frame
  // at_center_of_mass
  // application_point
  if (!geometry_msgs__msg__Point__init(&msg->application_point)) {
    communication__srv__ApplyExternalWrench_Request__fini(msg);
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__init(&msg->wrench)) {
    communication__srv__ApplyExternalWrench_Request__fini(msg);
    return false;
  }
  // persistent
  // duration
  if (!builtin_interfaces__msg__Duration__init(&msg->duration)) {
    communication__srv__ApplyExternalWrench_Request__fini(msg);
    return false;
  }
  return true;
}

void
communication__srv__ApplyExternalWrench_Request__fini(communication__srv__ApplyExternalWrench_Request * msg)
{
  if (!msg) {
    return;
  }
  // operation
  // wrench_id
  rosidl_runtime_c__String__fini(&msg->wrench_id);
  // body_name
  rosidl_runtime_c__String__fini(&msg->body_name);
  // reference_frame
  // at_center_of_mass
  // application_point
  geometry_msgs__msg__Point__fini(&msg->application_point);
  // wrench
  geometry_msgs__msg__Wrench__fini(&msg->wrench);
  // persistent
  // duration
  builtin_interfaces__msg__Duration__fini(&msg->duration);
}

bool
communication__srv__ApplyExternalWrench_Request__are_equal(const communication__srv__ApplyExternalWrench_Request * lhs, const communication__srv__ApplyExternalWrench_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // operation
  if (lhs->operation != rhs->operation) {
    return false;
  }
  // wrench_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->wrench_id), &(rhs->wrench_id)))
  {
    return false;
  }
  // body_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->body_name), &(rhs->body_name)))
  {
    return false;
  }
  // reference_frame
  if (lhs->reference_frame != rhs->reference_frame) {
    return false;
  }
  // at_center_of_mass
  if (lhs->at_center_of_mass != rhs->at_center_of_mass) {
    return false;
  }
  // application_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->application_point), &(rhs->application_point)))
  {
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->wrench), &(rhs->wrench)))
  {
    return false;
  }
  // persistent
  if (lhs->persistent != rhs->persistent) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->duration), &(rhs->duration)))
  {
    return false;
  }
  return true;
}

bool
communication__srv__ApplyExternalWrench_Request__copy(
  const communication__srv__ApplyExternalWrench_Request * input,
  communication__srv__ApplyExternalWrench_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // operation
  output->operation = input->operation;
  // wrench_id
  if (!rosidl_runtime_c__String__copy(
      &(input->wrench_id), &(output->wrench_id)))
  {
    return false;
  }
  // body_name
  if (!rosidl_runtime_c__String__copy(
      &(input->body_name), &(output->body_name)))
  {
    return false;
  }
  // reference_frame
  output->reference_frame = input->reference_frame;
  // at_center_of_mass
  output->at_center_of_mass = input->at_center_of_mass;
  // application_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->application_point), &(output->application_point)))
  {
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->wrench), &(output->wrench)))
  {
    return false;
  }
  // persistent
  output->persistent = input->persistent;
  // duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->duration), &(output->duration)))
  {
    return false;
  }
  return true;
}

communication__srv__ApplyExternalWrench_Request *
communication__srv__ApplyExternalWrench_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__srv__ApplyExternalWrench_Request * msg = (communication__srv__ApplyExternalWrench_Request *)allocator.allocate(sizeof(communication__srv__ApplyExternalWrench_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication__srv__ApplyExternalWrench_Request));
  bool success = communication__srv__ApplyExternalWrench_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication__srv__ApplyExternalWrench_Request__destroy(communication__srv__ApplyExternalWrench_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication__srv__ApplyExternalWrench_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication__srv__ApplyExternalWrench_Request__Sequence__init(communication__srv__ApplyExternalWrench_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__srv__ApplyExternalWrench_Request * data = NULL;

  if (size) {
    data = (communication__srv__ApplyExternalWrench_Request *)allocator.zero_allocate(size, sizeof(communication__srv__ApplyExternalWrench_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication__srv__ApplyExternalWrench_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication__srv__ApplyExternalWrench_Request__fini(&data[i - 1]);
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
communication__srv__ApplyExternalWrench_Request__Sequence__fini(communication__srv__ApplyExternalWrench_Request__Sequence * array)
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
      communication__srv__ApplyExternalWrench_Request__fini(&array->data[i]);
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

communication__srv__ApplyExternalWrench_Request__Sequence *
communication__srv__ApplyExternalWrench_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__srv__ApplyExternalWrench_Request__Sequence * array = (communication__srv__ApplyExternalWrench_Request__Sequence *)allocator.allocate(sizeof(communication__srv__ApplyExternalWrench_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication__srv__ApplyExternalWrench_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication__srv__ApplyExternalWrench_Request__Sequence__destroy(communication__srv__ApplyExternalWrench_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication__srv__ApplyExternalWrench_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication__srv__ApplyExternalWrench_Request__Sequence__are_equal(const communication__srv__ApplyExternalWrench_Request__Sequence * lhs, const communication__srv__ApplyExternalWrench_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication__srv__ApplyExternalWrench_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication__srv__ApplyExternalWrench_Request__Sequence__copy(
  const communication__srv__ApplyExternalWrench_Request__Sequence * input,
  communication__srv__ApplyExternalWrench_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication__srv__ApplyExternalWrench_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication__srv__ApplyExternalWrench_Request * data =
      (communication__srv__ApplyExternalWrench_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication__srv__ApplyExternalWrench_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication__srv__ApplyExternalWrench_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication__srv__ApplyExternalWrench_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
communication__srv__ApplyExternalWrench_Response__init(communication__srv__ApplyExternalWrench_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    communication__srv__ApplyExternalWrench_Response__fini(msg);
    return false;
  }
  return true;
}

void
communication__srv__ApplyExternalWrench_Response__fini(communication__srv__ApplyExternalWrench_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
communication__srv__ApplyExternalWrench_Response__are_equal(const communication__srv__ApplyExternalWrench_Response * lhs, const communication__srv__ApplyExternalWrench_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
communication__srv__ApplyExternalWrench_Response__copy(
  const communication__srv__ApplyExternalWrench_Response * input,
  communication__srv__ApplyExternalWrench_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

communication__srv__ApplyExternalWrench_Response *
communication__srv__ApplyExternalWrench_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__srv__ApplyExternalWrench_Response * msg = (communication__srv__ApplyExternalWrench_Response *)allocator.allocate(sizeof(communication__srv__ApplyExternalWrench_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication__srv__ApplyExternalWrench_Response));
  bool success = communication__srv__ApplyExternalWrench_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication__srv__ApplyExternalWrench_Response__destroy(communication__srv__ApplyExternalWrench_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication__srv__ApplyExternalWrench_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication__srv__ApplyExternalWrench_Response__Sequence__init(communication__srv__ApplyExternalWrench_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__srv__ApplyExternalWrench_Response * data = NULL;

  if (size) {
    data = (communication__srv__ApplyExternalWrench_Response *)allocator.zero_allocate(size, sizeof(communication__srv__ApplyExternalWrench_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication__srv__ApplyExternalWrench_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication__srv__ApplyExternalWrench_Response__fini(&data[i - 1]);
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
communication__srv__ApplyExternalWrench_Response__Sequence__fini(communication__srv__ApplyExternalWrench_Response__Sequence * array)
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
      communication__srv__ApplyExternalWrench_Response__fini(&array->data[i]);
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

communication__srv__ApplyExternalWrench_Response__Sequence *
communication__srv__ApplyExternalWrench_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__srv__ApplyExternalWrench_Response__Sequence * array = (communication__srv__ApplyExternalWrench_Response__Sequence *)allocator.allocate(sizeof(communication__srv__ApplyExternalWrench_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication__srv__ApplyExternalWrench_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication__srv__ApplyExternalWrench_Response__Sequence__destroy(communication__srv__ApplyExternalWrench_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication__srv__ApplyExternalWrench_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication__srv__ApplyExternalWrench_Response__Sequence__are_equal(const communication__srv__ApplyExternalWrench_Response__Sequence * lhs, const communication__srv__ApplyExternalWrench_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication__srv__ApplyExternalWrench_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication__srv__ApplyExternalWrench_Response__Sequence__copy(
  const communication__srv__ApplyExternalWrench_Response__Sequence * input,
  communication__srv__ApplyExternalWrench_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication__srv__ApplyExternalWrench_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication__srv__ApplyExternalWrench_Response * data =
      (communication__srv__ApplyExternalWrench_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication__srv__ApplyExternalWrench_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication__srv__ApplyExternalWrench_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication__srv__ApplyExternalWrench_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
