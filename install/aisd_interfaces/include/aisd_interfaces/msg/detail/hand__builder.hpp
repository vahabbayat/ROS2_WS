// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aisd_interfaces:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef AISD_INTERFACES__MSG__DETAIL__HAND__BUILDER_HPP_
#define AISD_INTERFACES__MSG__DETAIL__HAND__BUILDER_HPP_

#include "aisd_interfaces/msg/detail/hand__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aisd_interfaces
{

namespace msg
{

namespace builder
{

class Init_Hand_xindex
{
public:
  explicit Init_Hand_xindex(::aisd_interfaces::msg::Hand & msg)
  : msg_(msg)
  {}
  ::aisd_interfaces::msg::Hand xindex(::aisd_interfaces::msg::Hand::_xindex_type arg)
  {
    msg_.xindex = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aisd_interfaces::msg::Hand msg_;
};

class Init_Hand_xpinky
{
public:
  Init_Hand_xpinky()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hand_xindex xpinky(::aisd_interfaces::msg::Hand::_xpinky_type arg)
  {
    msg_.xpinky = std::move(arg);
    return Init_Hand_xindex(msg_);
  }

private:
  ::aisd_interfaces::msg::Hand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aisd_interfaces::msg::Hand>()
{
  return aisd_interfaces::msg::builder::Init_Hand_xpinky();
}

}  // namespace aisd_interfaces

#endif  // AISD_INTERFACES__MSG__DETAIL__HAND__BUILDER_HPP_
