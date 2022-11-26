// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aisd_interfaces:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef AISD_INTERFACES__MSG__DETAIL__HAND__STRUCT_H_
#define AISD_INTERFACES__MSG__DETAIL__HAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Hand in the package aisd_interfaces.
typedef struct aisd_interfaces__msg__Hand
{
  double xpinky;
  double xindex;
} aisd_interfaces__msg__Hand;

// Struct for a sequence of aisd_interfaces__msg__Hand.
typedef struct aisd_interfaces__msg__Hand__Sequence
{
  aisd_interfaces__msg__Hand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aisd_interfaces__msg__Hand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AISD_INTERFACES__MSG__DETAIL__HAND__STRUCT_H_
