// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication:msg/CANFD.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__CANFD__STRUCT_H_
#define COMMUNICATION__MSG__DETAIL__CANFD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CANFD in the package communication.
/**
  * Mirrors linux/can.h struct canfd_frame.
  * canid_t can_id: low bits contain the 11-bit or 29-bit CAN ID, high bits
  * contain CAN_EFF_FLAG, CAN_RTR_FLAG, and CAN_ERR_FLAG.
 */
typedef struct communication__msg__CANFD
{
  uint32_t can_id;
  /// Payload length in bytes, valid range: 0..64.
  uint8_t len;
  /// CAN FD flags: CANFD_BRS, CANFD_ESI, CANFD_FDF.
  uint8_t flags;
  /// Reserved fields matching struct canfd_frame layout.
  uint8_t res0;
  uint8_t res1;
  /// Fixed-size payload buffer. Only data is valid.
  uint8_t data[64];
} communication__msg__CANFD;

// Struct for a sequence of communication__msg__CANFD.
typedef struct communication__msg__CANFD__Sequence
{
  communication__msg__CANFD * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__msg__CANFD__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__MSG__DETAIL__CANFD__STRUCT_H_
