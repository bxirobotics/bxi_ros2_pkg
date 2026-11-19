#pragma once

#include <cstdint>

namespace communication
{

// One value is published for each entry in ActuatorStatus.name.
// If several conditions are true, the hardware node publishes the first
// matching value in this order: disabled, motor error, feedback timeout,
// command timeout, CAN error, then OK.
enum class ActuatorStatus : std::uint8_t
{
  OK = 0,                    // Feedback is current and no error is latched.
  DISABLED = 1,              // Motor is masked, power is disabled, or mode is off.
  FEEDBACK_TIMEOUT = 2,      // Enabled motor did not answer this control cycle.
  COMMAND_TIMEOUT = 3,      // The actuator command stream is stale for over 1 s.
  ERROR_OVER_POSITION = 4,  // Feedback position exceeded the configured limit.
  ERROR_OVER_VELOCITY = 5,  // Feedback velocity exceeded the configured limit.
  ERROR_OVER_TORQUE = 6,    // Feedback torque exceeded the configured limit.
  ERROR_SAFE_MODE = 7,      // The hardware library entered its safe error state.
  CAN_RX_DROP = 8,          // A user CAN-FD receive queue drop was observed.
  CAN_TX_ERROR = 9,         // A user CAN-FD transmit error was observed.
  ERROR_LATCHED = 10,       // A latched motor error is present.
  ERROR_UNKNOWN = 255       // An error exists without a more specific category.
};

constexpr std::uint8_t actuator_status_value(ActuatorStatus status) noexcept
{
  return static_cast<std::uint8_t>(status);
}

}  // namespace communication
