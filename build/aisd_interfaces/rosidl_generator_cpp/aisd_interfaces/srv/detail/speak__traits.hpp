// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aisd_interfaces:srv/Speak.idl
// generated code does not contain a copyright notice

#ifndef AISD_INTERFACES__SRV__DETAIL__SPEAK__TRAITS_HPP_
#define AISD_INTERFACES__SRV__DETAIL__SPEAK__TRAITS_HPP_

#include "aisd_interfaces/srv/detail/speak__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const aisd_interfaces::srv::Speak_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: words
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "words: ";
    value_to_yaml(msg.words, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const aisd_interfaces::srv::Speak_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<aisd_interfaces::srv::Speak_Request>()
{
  return "aisd_interfaces::srv::Speak_Request";
}

template<>
inline const char * name<aisd_interfaces::srv::Speak_Request>()
{
  return "aisd_interfaces/srv/Speak_Request";
}

template<>
struct has_fixed_size<aisd_interfaces::srv::Speak_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aisd_interfaces::srv::Speak_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aisd_interfaces::srv::Speak_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const aisd_interfaces::srv::Speak_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const aisd_interfaces::srv::Speak_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<aisd_interfaces::srv::Speak_Response>()
{
  return "aisd_interfaces::srv::Speak_Response";
}

template<>
inline const char * name<aisd_interfaces::srv::Speak_Response>()
{
  return "aisd_interfaces/srv/Speak_Response";
}

template<>
struct has_fixed_size<aisd_interfaces::srv::Speak_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aisd_interfaces::srv::Speak_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aisd_interfaces::srv::Speak_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aisd_interfaces::srv::Speak>()
{
  return "aisd_interfaces::srv::Speak";
}

template<>
inline const char * name<aisd_interfaces::srv::Speak>()
{
  return "aisd_interfaces/srv/Speak";
}

template<>
struct has_fixed_size<aisd_interfaces::srv::Speak>
  : std::integral_constant<
    bool,
    has_fixed_size<aisd_interfaces::srv::Speak_Request>::value &&
    has_fixed_size<aisd_interfaces::srv::Speak_Response>::value
  >
{
};

template<>
struct has_bounded_size<aisd_interfaces::srv::Speak>
  : std::integral_constant<
    bool,
    has_bounded_size<aisd_interfaces::srv::Speak_Request>::value &&
    has_bounded_size<aisd_interfaces::srv::Speak_Response>::value
  >
{
};

template<>
struct is_service<aisd_interfaces::srv::Speak>
  : std::true_type
{
};

template<>
struct is_service_request<aisd_interfaces::srv::Speak_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aisd_interfaces::srv::Speak_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AISD_INTERFACES__SRV__DETAIL__SPEAK__TRAITS_HPP_
