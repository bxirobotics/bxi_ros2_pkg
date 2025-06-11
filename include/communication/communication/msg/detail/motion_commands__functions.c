// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication:msg/MotionCommands.idl
// generated code does not contain a copyright notice
#include "communication/msg/detail/motion_commands__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `vel_des`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
communication__msg__MotionCommands__init(communication__msg__MotionCommands * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    communication__msg__MotionCommands__fini(msg);
    return false;
  }
  // vel_des
  if (!geometry_msgs__msg__Vector3__init(&msg->vel_des)) {
    communication__msg__MotionCommands__fini(msg);
    return false;
  }
  // height_des
  // yawdot_des
  // mode
  // btn_1
  // btn_2
  // btn_3
  // btn_4
  // btn_5
  // btn_6
  // btn_7
  // btn_8
  // btn_9
  // btn_10
  // axis_1
  // axis_2
  // axis_3
  // axis_4
  // axis_5
  // axis_6
  // axis_7
  // axis_8
  // axis_9
  // axis_10
  return true;
}

void
communication__msg__MotionCommands__fini(communication__msg__MotionCommands * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vel_des
  geometry_msgs__msg__Vector3__fini(&msg->vel_des);
  // height_des
  // yawdot_des
  // mode
  // btn_1
  // btn_2
  // btn_3
  // btn_4
  // btn_5
  // btn_6
  // btn_7
  // btn_8
  // btn_9
  // btn_10
  // axis_1
  // axis_2
  // axis_3
  // axis_4
  // axis_5
  // axis_6
  // axis_7
  // axis_8
  // axis_9
  // axis_10
}

bool
communication__msg__MotionCommands__are_equal(const communication__msg__MotionCommands * lhs, const communication__msg__MotionCommands * rhs)
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
  // vel_des
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->vel_des), &(rhs->vel_des)))
  {
    return false;
  }
  // height_des
  if (lhs->height_des != rhs->height_des) {
    return false;
  }
  // yawdot_des
  if (lhs->yawdot_des != rhs->yawdot_des) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // btn_1
  if (lhs->btn_1 != rhs->btn_1) {
    return false;
  }
  // btn_2
  if (lhs->btn_2 != rhs->btn_2) {
    return false;
  }
  // btn_3
  if (lhs->btn_3 != rhs->btn_3) {
    return false;
  }
  // btn_4
  if (lhs->btn_4 != rhs->btn_4) {
    return false;
  }
  // btn_5
  if (lhs->btn_5 != rhs->btn_5) {
    return false;
  }
  // btn_6
  if (lhs->btn_6 != rhs->btn_6) {
    return false;
  }
  // btn_7
  if (lhs->btn_7 != rhs->btn_7) {
    return false;
  }
  // btn_8
  if (lhs->btn_8 != rhs->btn_8) {
    return false;
  }
  // btn_9
  if (lhs->btn_9 != rhs->btn_9) {
    return false;
  }
  // btn_10
  if (lhs->btn_10 != rhs->btn_10) {
    return false;
  }
  // axis_1
  if (lhs->axis_1 != rhs->axis_1) {
    return false;
  }
  // axis_2
  if (lhs->axis_2 != rhs->axis_2) {
    return false;
  }
  // axis_3
  if (lhs->axis_3 != rhs->axis_3) {
    return false;
  }
  // axis_4
  if (lhs->axis_4 != rhs->axis_4) {
    return false;
  }
  // axis_5
  if (lhs->axis_5 != rhs->axis_5) {
    return false;
  }
  // axis_6
  if (lhs->axis_6 != rhs->axis_6) {
    return false;
  }
  // axis_7
  if (lhs->axis_7 != rhs->axis_7) {
    return false;
  }
  // axis_8
  if (lhs->axis_8 != rhs->axis_8) {
    return false;
  }
  // axis_9
  if (lhs->axis_9 != rhs->axis_9) {
    return false;
  }
  // axis_10
  if (lhs->axis_10 != rhs->axis_10) {
    return false;
  }
  return true;
}

bool
communication__msg__MotionCommands__copy(
  const communication__msg__MotionCommands * input,
  communication__msg__MotionCommands * output)
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
  // vel_des
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->vel_des), &(output->vel_des)))
  {
    return false;
  }
  // height_des
  output->height_des = input->height_des;
  // yawdot_des
  output->yawdot_des = input->yawdot_des;
  // mode
  output->mode = input->mode;
  // btn_1
  output->btn_1 = input->btn_1;
  // btn_2
  output->btn_2 = input->btn_2;
  // btn_3
  output->btn_3 = input->btn_3;
  // btn_4
  output->btn_4 = input->btn_4;
  // btn_5
  output->btn_5 = input->btn_5;
  // btn_6
  output->btn_6 = input->btn_6;
  // btn_7
  output->btn_7 = input->btn_7;
  // btn_8
  output->btn_8 = input->btn_8;
  // btn_9
  output->btn_9 = input->btn_9;
  // btn_10
  output->btn_10 = input->btn_10;
  // axis_1
  output->axis_1 = input->axis_1;
  // axis_2
  output->axis_2 = input->axis_2;
  // axis_3
  output->axis_3 = input->axis_3;
  // axis_4
  output->axis_4 = input->axis_4;
  // axis_5
  output->axis_5 = input->axis_5;
  // axis_6
  output->axis_6 = input->axis_6;
  // axis_7
  output->axis_7 = input->axis_7;
  // axis_8
  output->axis_8 = input->axis_8;
  // axis_9
  output->axis_9 = input->axis_9;
  // axis_10
  output->axis_10 = input->axis_10;
  return true;
}

communication__msg__MotionCommands *
communication__msg__MotionCommands__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__MotionCommands * msg = (communication__msg__MotionCommands *)allocator.allocate(sizeof(communication__msg__MotionCommands), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication__msg__MotionCommands));
  bool success = communication__msg__MotionCommands__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication__msg__MotionCommands__destroy(communication__msg__MotionCommands * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication__msg__MotionCommands__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication__msg__MotionCommands__Sequence__init(communication__msg__MotionCommands__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__MotionCommands * data = NULL;

  if (size) {
    data = (communication__msg__MotionCommands *)allocator.zero_allocate(size, sizeof(communication__msg__MotionCommands), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication__msg__MotionCommands__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication__msg__MotionCommands__fini(&data[i - 1]);
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
communication__msg__MotionCommands__Sequence__fini(communication__msg__MotionCommands__Sequence * array)
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
      communication__msg__MotionCommands__fini(&array->data[i]);
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

communication__msg__MotionCommands__Sequence *
communication__msg__MotionCommands__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__MotionCommands__Sequence * array = (communication__msg__MotionCommands__Sequence *)allocator.allocate(sizeof(communication__msg__MotionCommands__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication__msg__MotionCommands__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication__msg__MotionCommands__Sequence__destroy(communication__msg__MotionCommands__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication__msg__MotionCommands__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication__msg__MotionCommands__Sequence__are_equal(const communication__msg__MotionCommands__Sequence * lhs, const communication__msg__MotionCommands__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication__msg__MotionCommands__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication__msg__MotionCommands__Sequence__copy(
  const communication__msg__MotionCommands__Sequence * input,
  communication__msg__MotionCommands__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication__msg__MotionCommands);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication__msg__MotionCommands * data =
      (communication__msg__MotionCommands *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication__msg__MotionCommands__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication__msg__MotionCommands__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication__msg__MotionCommands__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
