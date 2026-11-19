// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:msg/DiagnosticEvent.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__DIAGNOSTIC_EVENT__BUILDER_HPP_
#define COMMUNICATION__MSG__DETAIL__DIAGNOSTIC_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/msg/detail/diagnostic_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace msg
{

namespace builder
{

class Init_DiagnosticEvent_active
{
public:
  explicit Init_DiagnosticEvent_active(::communication::msg::DiagnosticEvent & msg)
  : msg_(msg)
  {}
  ::communication::msg::DiagnosticEvent active(::communication::msg::DiagnosticEvent::_active_type arg)
  {
    msg_.active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::msg::DiagnosticEvent msg_;
};

class Init_DiagnosticEvent_code
{
public:
  explicit Init_DiagnosticEvent_code(::communication::msg::DiagnosticEvent & msg)
  : msg_(msg)
  {}
  Init_DiagnosticEvent_active code(::communication::msg::DiagnosticEvent::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_DiagnosticEvent_active(msg_);
  }

private:
  ::communication::msg::DiagnosticEvent msg_;
};

class Init_DiagnosticEvent_source
{
public:
  Init_DiagnosticEvent_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticEvent_code source(::communication::msg::DiagnosticEvent::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_DiagnosticEvent_code(msg_);
  }

private:
  ::communication::msg::DiagnosticEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::msg::DiagnosticEvent>()
{
  return communication::msg::builder::Init_DiagnosticEvent_source();
}

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__DIAGNOSTIC_EVENT__BUILDER_HPP_
