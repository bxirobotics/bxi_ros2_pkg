// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:srv/ApplyExternalWrench.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__APPLY_EXTERNAL_WRENCH__BUILDER_HPP_
#define COMMUNICATION__SRV__DETAIL__APPLY_EXTERNAL_WRENCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/srv/detail/apply_external_wrench__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace srv
{

namespace builder
{

class Init_ApplyExternalWrench_Request_duration
{
public:
  explicit Init_ApplyExternalWrench_Request_duration(::communication::srv::ApplyExternalWrench_Request & msg)
  : msg_(msg)
  {}
  ::communication::srv::ApplyExternalWrench_Request duration(::communication::srv::ApplyExternalWrench_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::srv::ApplyExternalWrench_Request msg_;
};

class Init_ApplyExternalWrench_Request_persistent
{
public:
  explicit Init_ApplyExternalWrench_Request_persistent(::communication::srv::ApplyExternalWrench_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyExternalWrench_Request_duration persistent(::communication::srv::ApplyExternalWrench_Request::_persistent_type arg)
  {
    msg_.persistent = std::move(arg);
    return Init_ApplyExternalWrench_Request_duration(msg_);
  }

private:
  ::communication::srv::ApplyExternalWrench_Request msg_;
};

class Init_ApplyExternalWrench_Request_wrench
{
public:
  explicit Init_ApplyExternalWrench_Request_wrench(::communication::srv::ApplyExternalWrench_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyExternalWrench_Request_persistent wrench(::communication::srv::ApplyExternalWrench_Request::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return Init_ApplyExternalWrench_Request_persistent(msg_);
  }

private:
  ::communication::srv::ApplyExternalWrench_Request msg_;
};

class Init_ApplyExternalWrench_Request_application_point
{
public:
  explicit Init_ApplyExternalWrench_Request_application_point(::communication::srv::ApplyExternalWrench_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyExternalWrench_Request_wrench application_point(::communication::srv::ApplyExternalWrench_Request::_application_point_type arg)
  {
    msg_.application_point = std::move(arg);
    return Init_ApplyExternalWrench_Request_wrench(msg_);
  }

private:
  ::communication::srv::ApplyExternalWrench_Request msg_;
};

class Init_ApplyExternalWrench_Request_at_center_of_mass
{
public:
  explicit Init_ApplyExternalWrench_Request_at_center_of_mass(::communication::srv::ApplyExternalWrench_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyExternalWrench_Request_application_point at_center_of_mass(::communication::srv::ApplyExternalWrench_Request::_at_center_of_mass_type arg)
  {
    msg_.at_center_of_mass = std::move(arg);
    return Init_ApplyExternalWrench_Request_application_point(msg_);
  }

private:
  ::communication::srv::ApplyExternalWrench_Request msg_;
};

class Init_ApplyExternalWrench_Request_reference_frame
{
public:
  explicit Init_ApplyExternalWrench_Request_reference_frame(::communication::srv::ApplyExternalWrench_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyExternalWrench_Request_at_center_of_mass reference_frame(::communication::srv::ApplyExternalWrench_Request::_reference_frame_type arg)
  {
    msg_.reference_frame = std::move(arg);
    return Init_ApplyExternalWrench_Request_at_center_of_mass(msg_);
  }

private:
  ::communication::srv::ApplyExternalWrench_Request msg_;
};

class Init_ApplyExternalWrench_Request_body_name
{
public:
  explicit Init_ApplyExternalWrench_Request_body_name(::communication::srv::ApplyExternalWrench_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyExternalWrench_Request_reference_frame body_name(::communication::srv::ApplyExternalWrench_Request::_body_name_type arg)
  {
    msg_.body_name = std::move(arg);
    return Init_ApplyExternalWrench_Request_reference_frame(msg_);
  }

private:
  ::communication::srv::ApplyExternalWrench_Request msg_;
};

class Init_ApplyExternalWrench_Request_wrench_id
{
public:
  explicit Init_ApplyExternalWrench_Request_wrench_id(::communication::srv::ApplyExternalWrench_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyExternalWrench_Request_body_name wrench_id(::communication::srv::ApplyExternalWrench_Request::_wrench_id_type arg)
  {
    msg_.wrench_id = std::move(arg);
    return Init_ApplyExternalWrench_Request_body_name(msg_);
  }

private:
  ::communication::srv::ApplyExternalWrench_Request msg_;
};

class Init_ApplyExternalWrench_Request_operation
{
public:
  Init_ApplyExternalWrench_Request_operation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplyExternalWrench_Request_wrench_id operation(::communication::srv::ApplyExternalWrench_Request::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return Init_ApplyExternalWrench_Request_wrench_id(msg_);
  }

private:
  ::communication::srv::ApplyExternalWrench_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::srv::ApplyExternalWrench_Request>()
{
  return communication::srv::builder::Init_ApplyExternalWrench_Request_operation();
}

}  // namespace communication


namespace communication
{

namespace srv
{

namespace builder
{

class Init_ApplyExternalWrench_Response_message
{
public:
  explicit Init_ApplyExternalWrench_Response_message(::communication::srv::ApplyExternalWrench_Response & msg)
  : msg_(msg)
  {}
  ::communication::srv::ApplyExternalWrench_Response message(::communication::srv::ApplyExternalWrench_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::srv::ApplyExternalWrench_Response msg_;
};

class Init_ApplyExternalWrench_Response_success
{
public:
  Init_ApplyExternalWrench_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplyExternalWrench_Response_message success(::communication::srv::ApplyExternalWrench_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ApplyExternalWrench_Response_message(msg_);
  }

private:
  ::communication::srv::ApplyExternalWrench_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::srv::ApplyExternalWrench_Response>()
{
  return communication::srv::builder::Init_ApplyExternalWrench_Response_success();
}

}  // namespace communication

#endif  // COMMUNICATION__SRV__DETAIL__APPLY_EXTERNAL_WRENCH__BUILDER_HPP_
