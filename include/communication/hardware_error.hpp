#pragma once
#include <cstdint>
#include <stdexcept>

namespace communication {
enum class DiagnosticPriority : std::uint16_t { Info, Warning, Error, Emergency };

// Bits 15..14 priority; 13..12 reserved; 11..5 type; 4..0 state.
// State 0 is reserved. DiagnosticEvent recovery keeps the code and sets active=false.
inline std::uint16_t diagnostic_code(DiagnosticPriority priority, unsigned type, unsigned state)
{
  const auto level = static_cast<unsigned>(priority);
  if (level > 3 || type == 0 || type > 127 || state > 31)
    throw std::invalid_argument("invalid diagnostic priority/type/state");
  return static_cast<std::uint16_t>((level << 14) | (type << 5) | state);
}
}  // namespace communication
