// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aisd_interfaces:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef AISD_INTERFACES__MSG__DETAIL__HAND__TRAITS_HPP_
#define AISD_INTERFACES__MSG__DETAIL__HAND__TRAITS_HPP_

#include "aisd_interfaces/msg/detail/hand__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const aisd_interfaces::msg::Hand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xpinky
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xpinky: ";
    value_to_yaml(msg.xpinky, out);
    out << "\n";
  }

  // member: xindex
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xindex: ";
    value_to_yaml(msg.xindex, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const aisd_interfaces::msg::Hand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<aisd_interfaces::msg::Hand>()
{
  return "aisd_interfaces::msg::Hand";
}

template<>
inline const char * name<aisd_interfaces::msg::Hand>()
{
  return "aisd_interfaces/msg/Hand";
}

template<>
struct has_fixed_size<aisd_interfaces::msg::Hand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aisd_interfaces::msg::Hand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aisd_interfaces::msg::Hand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AISD_INTERFACES__MSG__DETAIL__HAND__TRAITS_HPP_
