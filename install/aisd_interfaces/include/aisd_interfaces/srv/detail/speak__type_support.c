// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aisd_interfaces:srv/Speak.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aisd_interfaces/srv/detail/speak__rosidl_typesupport_introspection_c.h"
#include "aisd_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aisd_interfaces/srv/detail/speak__functions.h"
#include "aisd_interfaces/srv/detail/speak__struct.h"


// Include directives for member types
// Member `words`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Speak_Request__rosidl_typesupport_introspection_c__Speak_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aisd_interfaces__srv__Speak_Request__init(message_memory);
}

void Speak_Request__rosidl_typesupport_introspection_c__Speak_Request_fini_function(void * message_memory)
{
  aisd_interfaces__srv__Speak_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Speak_Request__rosidl_typesupport_introspection_c__Speak_Request_message_member_array[1] = {
  {
    "words",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aisd_interfaces__srv__Speak_Request, words),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Speak_Request__rosidl_typesupport_introspection_c__Speak_Request_message_members = {
  "aisd_interfaces__srv",  // message namespace
  "Speak_Request",  // message name
  1,  // number of fields
  sizeof(aisd_interfaces__srv__Speak_Request),
  Speak_Request__rosidl_typesupport_introspection_c__Speak_Request_message_member_array,  // message members
  Speak_Request__rosidl_typesupport_introspection_c__Speak_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Speak_Request__rosidl_typesupport_introspection_c__Speak_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Speak_Request__rosidl_typesupport_introspection_c__Speak_Request_message_type_support_handle = {
  0,
  &Speak_Request__rosidl_typesupport_introspection_c__Speak_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aisd_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aisd_interfaces, srv, Speak_Request)() {
  if (!Speak_Request__rosidl_typesupport_introspection_c__Speak_Request_message_type_support_handle.typesupport_identifier) {
    Speak_Request__rosidl_typesupport_introspection_c__Speak_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Speak_Request__rosidl_typesupport_introspection_c__Speak_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aisd_interfaces/srv/detail/speak__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aisd_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aisd_interfaces/srv/detail/speak__functions.h"
// already included above
// #include "aisd_interfaces/srv/detail/speak__struct.h"


// Include directives for member types
// Member `response`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Speak_Response__rosidl_typesupport_introspection_c__Speak_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aisd_interfaces__srv__Speak_Response__init(message_memory);
}

void Speak_Response__rosidl_typesupport_introspection_c__Speak_Response_fini_function(void * message_memory)
{
  aisd_interfaces__srv__Speak_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Speak_Response__rosidl_typesupport_introspection_c__Speak_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aisd_interfaces__srv__Speak_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Speak_Response__rosidl_typesupport_introspection_c__Speak_Response_message_members = {
  "aisd_interfaces__srv",  // message namespace
  "Speak_Response",  // message name
  1,  // number of fields
  sizeof(aisd_interfaces__srv__Speak_Response),
  Speak_Response__rosidl_typesupport_introspection_c__Speak_Response_message_member_array,  // message members
  Speak_Response__rosidl_typesupport_introspection_c__Speak_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Speak_Response__rosidl_typesupport_introspection_c__Speak_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Speak_Response__rosidl_typesupport_introspection_c__Speak_Response_message_type_support_handle = {
  0,
  &Speak_Response__rosidl_typesupport_introspection_c__Speak_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aisd_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aisd_interfaces, srv, Speak_Response)() {
  if (!Speak_Response__rosidl_typesupport_introspection_c__Speak_Response_message_type_support_handle.typesupport_identifier) {
    Speak_Response__rosidl_typesupport_introspection_c__Speak_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Speak_Response__rosidl_typesupport_introspection_c__Speak_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aisd_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aisd_interfaces/srv/detail/speak__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aisd_interfaces__srv__detail__speak__rosidl_typesupport_introspection_c__Speak_service_members = {
  "aisd_interfaces__srv",  // service namespace
  "Speak",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aisd_interfaces__srv__detail__speak__rosidl_typesupport_introspection_c__Speak_Request_message_type_support_handle,
  NULL  // response message
  // aisd_interfaces__srv__detail__speak__rosidl_typesupport_introspection_c__Speak_Response_message_type_support_handle
};

static rosidl_service_type_support_t aisd_interfaces__srv__detail__speak__rosidl_typesupport_introspection_c__Speak_service_type_support_handle = {
  0,
  &aisd_interfaces__srv__detail__speak__rosidl_typesupport_introspection_c__Speak_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aisd_interfaces, srv, Speak_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aisd_interfaces, srv, Speak_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aisd_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aisd_interfaces, srv, Speak)() {
  if (!aisd_interfaces__srv__detail__speak__rosidl_typesupport_introspection_c__Speak_service_type_support_handle.typesupport_identifier) {
    aisd_interfaces__srv__detail__speak__rosidl_typesupport_introspection_c__Speak_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aisd_interfaces__srv__detail__speak__rosidl_typesupport_introspection_c__Speak_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aisd_interfaces, srv, Speak_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aisd_interfaces, srv, Speak_Response)()->data;
  }

  return &aisd_interfaces__srv__detail__speak__rosidl_typesupport_introspection_c__Speak_service_type_support_handle;
}
