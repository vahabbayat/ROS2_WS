// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from aisd_interfaces:msg/Hand.idl
// generated code does not contain a copyright notice
#include "aisd_interfaces/msg/detail/hand__rosidl_typesupport_fastrtps_cpp.hpp"
#include "aisd_interfaces/msg/detail/hand__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace aisd_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aisd_interfaces
cdr_serialize(
  const aisd_interfaces::msg::Hand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: xpinky
  cdr << ros_message.xpinky;
  // Member: xindex
  cdr << ros_message.xindex;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aisd_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aisd_interfaces::msg::Hand & ros_message)
{
  // Member: xpinky
  cdr >> ros_message.xpinky;

  // Member: xindex
  cdr >> ros_message.xindex;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aisd_interfaces
get_serialized_size(
  const aisd_interfaces::msg::Hand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: xpinky
  {
    size_t item_size = sizeof(ros_message.xpinky);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: xindex
  {
    size_t item_size = sizeof(ros_message.xindex);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aisd_interfaces
max_serialized_size_Hand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: xpinky
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: xindex
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Hand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const aisd_interfaces::msg::Hand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Hand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<aisd_interfaces::msg::Hand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Hand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const aisd_interfaces::msg::Hand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Hand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Hand(full_bounded, 0);
}

static message_type_support_callbacks_t _Hand__callbacks = {
  "aisd_interfaces::msg",
  "Hand",
  _Hand__cdr_serialize,
  _Hand__cdr_deserialize,
  _Hand__get_serialized_size,
  _Hand__max_serialized_size
};

static rosidl_message_type_support_t _Hand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Hand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace aisd_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_aisd_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<aisd_interfaces::msg::Hand>()
{
  return &aisd_interfaces::msg::typesupport_fastrtps_cpp::_Hand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aisd_interfaces, msg, Hand)() {
  return &aisd_interfaces::msg::typesupport_fastrtps_cpp::_Hand__handle;
}

#ifdef __cplusplus
}
#endif
