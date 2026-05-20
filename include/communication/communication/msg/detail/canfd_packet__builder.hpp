// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:msg/CANFDPacket.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__CANFD_PACKET__BUILDER_HPP_
#define COMMUNICATION__MSG__DETAIL__CANFD_PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/msg/detail/canfd_packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace msg
{

namespace builder
{

class Init_CANFDPacket_frame
{
public:
  explicit Init_CANFDPacket_frame(::communication::msg::CANFDPacket & msg)
  : msg_(msg)
  {}
  ::communication::msg::CANFDPacket frame(::communication::msg::CANFDPacket::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::msg::CANFDPacket msg_;
};

class Init_CANFDPacket_bus
{
public:
  explicit Init_CANFDPacket_bus(::communication::msg::CANFDPacket & msg)
  : msg_(msg)
  {}
  Init_CANFDPacket_frame bus(::communication::msg::CANFDPacket::_bus_type arg)
  {
    msg_.bus = std::move(arg);
    return Init_CANFDPacket_frame(msg_);
  }

private:
  ::communication::msg::CANFDPacket msg_;
};

class Init_CANFDPacket_header
{
public:
  Init_CANFDPacket_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CANFDPacket_bus header(::communication::msg::CANFDPacket::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CANFDPacket_bus(msg_);
  }

private:
  ::communication::msg::CANFDPacket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::msg::CANFDPacket>()
{
  return communication::msg::builder::Init_CANFDPacket_header();
}

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__CANFD_PACKET__BUILDER_HPP_
