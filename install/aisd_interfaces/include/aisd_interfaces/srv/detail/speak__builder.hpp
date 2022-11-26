// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aisd_interfaces:srv/Speak.idl
// generated code does not contain a copyright notice

#ifndef AISD_INTERFACES__SRV__DETAIL__SPEAK__BUILDER_HPP_
#define AISD_INTERFACES__SRV__DETAIL__SPEAK__BUILDER_HPP_

#include "aisd_interfaces/srv/detail/speak__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aisd_interfaces
{

namespace srv
{

namespace builder
{

class Init_Speak_Request_words
{
public:
  Init_Speak_Request_words()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aisd_interfaces::srv::Speak_Request words(::aisd_interfaces::srv::Speak_Request::_words_type arg)
  {
    msg_.words = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aisd_interfaces::srv::Speak_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aisd_interfaces::srv::Speak_Request>()
{
  return aisd_interfaces::srv::builder::Init_Speak_Request_words();
}

}  // namespace aisd_interfaces


namespace aisd_interfaces
{

namespace srv
{

namespace builder
{

class Init_Speak_Response_response
{
public:
  Init_Speak_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aisd_interfaces::srv::Speak_Response response(::aisd_interfaces::srv::Speak_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aisd_interfaces::srv::Speak_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aisd_interfaces::srv::Speak_Response>()
{
  return aisd_interfaces::srv::builder::Init_Speak_Response_response();
}

}  // namespace aisd_interfaces

#endif  // AISD_INTERFACES__SRV__DETAIL__SPEAK__BUILDER_HPP_
