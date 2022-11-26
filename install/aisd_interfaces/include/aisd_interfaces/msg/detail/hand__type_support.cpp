// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aisd_interfaces:msg/Hand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aisd_interfaces/msg/detail/hand__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aisd_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Hand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aisd_interfaces::msg::Hand(_init);
}

void Hand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aisd_interfaces::msg::Hand *>(message_memory);
  typed_message->~Hand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Hand_message_member_array[2] = {
  {
    "xpinky",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aisd_interfaces::msg::Hand, xpinky),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "xindex",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aisd_interfaces::msg::Hand, xindex),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Hand_message_members = {
  "aisd_interfaces::msg",  // message namespace
  "Hand",  // message name
  2,  // number of fields
  sizeof(aisd_interfaces::msg::Hand),
  Hand_message_member_array,  // message members
  Hand_init_function,  // function to initialize message memory (memory has to be allocated)
  Hand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Hand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Hand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aisd_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aisd_interfaces::msg::Hand>()
{
  return &::aisd_interfaces::msg::rosidl_typesupport_introspection_cpp::Hand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aisd_interfaces, msg, Hand)() {
  return &::aisd_interfaces::msg::rosidl_typesupport_introspection_cpp::Hand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
