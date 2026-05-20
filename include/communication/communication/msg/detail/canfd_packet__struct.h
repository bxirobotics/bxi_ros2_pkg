// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication:msg/CANFDPacket.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__CANFD_PACKET__STRUCT_H_
#define COMMUNICATION__MSG__DETAIL__CANFD_PACKET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'frame'
#include "communication/msg/detail/canfd__struct.h"

/// Struct defined in msg/CANFDPacket in the package communication.
/**
  * ROS wrapper for a CAN FD frame carried by a physical CAN bus.
 */
typedef struct communication__msg__CANFDPacket
{
  std_msgs__msg__Header header;
  /// Physical CAN bus index.
  uint8_t bus;
  communication__msg__CANFD frame;
} communication__msg__CANFDPacket;

// Struct for a sequence of communication__msg__CANFDPacket.
typedef struct communication__msg__CANFDPacket__Sequence
{
  communication__msg__CANFDPacket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__msg__CANFDPacket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__MSG__DETAIL__CANFD_PACKET__STRUCT_H_
