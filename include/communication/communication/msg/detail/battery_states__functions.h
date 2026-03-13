// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from communication:msg/BatteryStates.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__BATTERY_STATES__FUNCTIONS_H_
#define COMMUNICATION__MSG__DETAIL__BATTERY_STATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "communication/msg/rosidl_generator_c__visibility_control.h"

#include "communication/msg/detail/battery_states__struct.h"

/// Initialize msg/BatteryStates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * communication__msg__BatteryStates
 * )) before or use
 * communication__msg__BatteryStates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__msg__BatteryStates__init(communication__msg__BatteryStates * msg);

/// Finalize msg/BatteryStates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
void
communication__msg__BatteryStates__fini(communication__msg__BatteryStates * msg);

/// Create msg/BatteryStates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * communication__msg__BatteryStates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
communication__msg__BatteryStates *
communication__msg__BatteryStates__create();

/// Destroy msg/BatteryStates message.
/**
 * It calls
 * communication__msg__BatteryStates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
void
communication__msg__BatteryStates__destroy(communication__msg__BatteryStates * msg);

/// Check for msg/BatteryStates message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__msg__BatteryStates__are_equal(const communication__msg__BatteryStates * lhs, const communication__msg__BatteryStates * rhs);

/// Copy a msg/BatteryStates message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__msg__BatteryStates__copy(
  const communication__msg__BatteryStates * input,
  communication__msg__BatteryStates * output);

/// Initialize array of msg/BatteryStates messages.
/**
 * It allocates the memory for the number of elements and calls
 * communication__msg__BatteryStates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__msg__BatteryStates__Sequence__init(communication__msg__BatteryStates__Sequence * array, size_t size);

/// Finalize array of msg/BatteryStates messages.
/**
 * It calls
 * communication__msg__BatteryStates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
void
communication__msg__BatteryStates__Sequence__fini(communication__msg__BatteryStates__Sequence * array);

/// Create array of msg/BatteryStates messages.
/**
 * It allocates the memory for the array and calls
 * communication__msg__BatteryStates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
communication__msg__BatteryStates__Sequence *
communication__msg__BatteryStates__Sequence__create(size_t size);

/// Destroy array of msg/BatteryStates messages.
/**
 * It calls
 * communication__msg__BatteryStates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
void
communication__msg__BatteryStates__Sequence__destroy(communication__msg__BatteryStates__Sequence * array);

/// Check for msg/BatteryStates message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__msg__BatteryStates__Sequence__are_equal(const communication__msg__BatteryStates__Sequence * lhs, const communication__msg__BatteryStates__Sequence * rhs);

/// Copy an array of msg/BatteryStates messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__msg__BatteryStates__Sequence__copy(
  const communication__msg__BatteryStates__Sequence * input,
  communication__msg__BatteryStates__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__MSG__DETAIL__BATTERY_STATES__FUNCTIONS_H_
