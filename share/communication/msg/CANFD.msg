# Mirrors linux/can.h struct canfd_frame.
# canid_t can_id: low bits contain the 11-bit or 29-bit CAN ID, high bits
# contain CAN_EFF_FLAG, CAN_RTR_FLAG, and CAN_ERR_FLAG.
uint32 can_id

# Payload length in bytes, valid range: 0..64.
uint8 len

# CAN FD flags: CANFD_BRS, CANFD_ESI, CANFD_FDF.
uint8 flags

# Reserved fields matching struct canfd_frame layout.
uint8 res0
uint8 res1

# Fixed-size payload buffer. Only data[0:len] is valid.
uint8[64] data
