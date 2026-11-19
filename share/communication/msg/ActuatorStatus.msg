std_msgs/Header header
string[] name
# One status per name; values are defined in communication/actuator_status.hpp.
# 0 OK, 1 DISABLED, 2 FEEDBACK_TIMEOUT, 3 COMMAND_TIMEOUT,
# 4 ERROR_OVER_POSITION, 5 ERROR_OVER_VELOCITY, 6 ERROR_OVER_TORQUE,
# 7 ERROR_SAFE_MODE, 8 CAN_RX_DROP, 9 CAN_TX_ERROR, 10 ERROR_LATCHED,
# 255 ERROR_UNKNOWN. If multiple conditions apply, only the highest priority is sent.
uint8[] status
