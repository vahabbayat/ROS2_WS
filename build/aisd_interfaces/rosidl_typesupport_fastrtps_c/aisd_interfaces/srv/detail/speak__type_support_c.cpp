// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aisd_interfaces:srv/Speak.idl
// generated code does not contain a copyright notice
#include "aisd_interfaces/srv/detail/speak__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aisd_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aisd_interfaces/srv/detail/speak__struct.h"
#include "aisd_interfaces/srv/detail/speak__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // words
#include "rosidl_runtime_c/string_functions.h"  // words

// forward declare type support functions


using _Speak_Request__ros_msg_type = aisd_interfaces__srv__Speak_Request;

static bool _Speak_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Speak_Request__ros_msg_type * ros_message = static_cast<const _Speak_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: words
  {
    const rosidl_runtime_c__String * str = &ros_message->words;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Speak_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Speak_Request__ros_msg_type * ros_message = static_cast<_Speak_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: words
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->words.data) {
      rosidl_runtime_c__String__init(&ros_message->words);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->words,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'words'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aisd_interfaces
size_t get_serialized_size_aisd_interfaces__srv__Speak_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Speak_Request__ros_msg_type * ros_message = static_cast<const _Speak_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name words
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->words.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Speak_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aisd_interfaces__srv__Speak_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aisd_interfaces
size_t max_serialized_size_aisd_interfaces__srv__Speak_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: words
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Speak_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aisd_interfaces__srv__Speak_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Speak_Request = {
  "aisd_interfaces::srv",
  "Speak_Request",
  _Speak_Request__cdr_serialize,
  _Speak_Request__cdr_deserialize,
  _Speak_Request__get_serialized_size,
  _Speak_Request__max_serialized_size
};

static rosidl_message_type_support_t _Speak_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Speak_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aisd_interfaces, srv, Speak_Request)() {
  return &_Speak_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "aisd_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "aisd_interfaces/srv/detail/speak__struct.h"
// already included above
// #include "aisd_interfaces/srv/detail/speak__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // response
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // response

// forward declare type support functions


using _Speak_Response__ros_msg_type = aisd_interfaces__srv__Speak_Response;

static bool _Speak_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Speak_Response__ros_msg_type * ros_message = static_cast<const _Speak_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const rosidl_runtime_c__String * str = &ros_message->response;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Speak_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Speak_Response__ros_msg_type * ros_message = static_cast<_Speak_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->response.data) {
      rosidl_runtime_c__String__init(&ros_message->response);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->response,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'response'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aisd_interfaces
size_t get_serialized_size_aisd_interfaces__srv__Speak_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Speak_Response__ros_msg_type * ros_message = static_cast<const _Speak_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->response.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Speak_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aisd_interfaces__srv__Speak_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aisd_interfaces
size_t max_serialized_size_aisd_interfaces__srv__Speak_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: response
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Speak_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aisd_interfaces__srv__Speak_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Speak_Response = {
  "aisd_interfaces::srv",
  "Speak_Response",
  _Speak_Response__cdr_serialize,
  _Speak_Response__cdr_deserialize,
  _Speak_Response__get_serialized_size,
  _Speak_Response__max_serialized_size
};

static rosidl_message_type_support_t _Speak_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Speak_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aisd_interfaces, srv, Speak_Response)() {
  return &_Speak_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "aisd_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aisd_interfaces/srv/speak.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Speak__callbacks = {
  "aisd_interfaces::srv",
  "Speak",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aisd_interfaces, srv, Speak_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aisd_interfaces, srv, Speak_Response)(),
};

static rosidl_service_type_support_t Speak__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Speak__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aisd_interfaces, srv, Speak)() {
  return &Speak__handle;
}

#if defined(__cplusplus)
}
#endif
