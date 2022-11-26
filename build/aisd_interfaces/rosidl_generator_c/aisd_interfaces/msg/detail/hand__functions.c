// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aisd_interfaces:msg/Hand.idl
// generated code does not contain a copyright notice
#include "aisd_interfaces/msg/detail/hand__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
aisd_interfaces__msg__Hand__init(aisd_interfaces__msg__Hand * msg)
{
  if (!msg) {
    return false;
  }
  // xpinky
  // xindex
  return true;
}

void
aisd_interfaces__msg__Hand__fini(aisd_interfaces__msg__Hand * msg)
{
  if (!msg) {
    return;
  }
  // xpinky
  // xindex
}

bool
aisd_interfaces__msg__Hand__are_equal(const aisd_interfaces__msg__Hand * lhs, const aisd_interfaces__msg__Hand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // xpinky
  if (lhs->xpinky != rhs->xpinky) {
    return false;
  }
  // xindex
  if (lhs->xindex != rhs->xindex) {
    return false;
  }
  return true;
}

bool
aisd_interfaces__msg__Hand__copy(
  const aisd_interfaces__msg__Hand * input,
  aisd_interfaces__msg__Hand * output)
{
  if (!input || !output) {
    return false;
  }
  // xpinky
  output->xpinky = input->xpinky;
  // xindex
  output->xindex = input->xindex;
  return true;
}

aisd_interfaces__msg__Hand *
aisd_interfaces__msg__Hand__create()
{
  aisd_interfaces__msg__Hand * msg = (aisd_interfaces__msg__Hand *)malloc(sizeof(aisd_interfaces__msg__Hand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aisd_interfaces__msg__Hand));
  bool success = aisd_interfaces__msg__Hand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
aisd_interfaces__msg__Hand__destroy(aisd_interfaces__msg__Hand * msg)
{
  if (msg) {
    aisd_interfaces__msg__Hand__fini(msg);
  }
  free(msg);
}


bool
aisd_interfaces__msg__Hand__Sequence__init(aisd_interfaces__msg__Hand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  aisd_interfaces__msg__Hand * data = NULL;
  if (size) {
    data = (aisd_interfaces__msg__Hand *)calloc(size, sizeof(aisd_interfaces__msg__Hand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aisd_interfaces__msg__Hand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aisd_interfaces__msg__Hand__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aisd_interfaces__msg__Hand__Sequence__fini(aisd_interfaces__msg__Hand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aisd_interfaces__msg__Hand__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aisd_interfaces__msg__Hand__Sequence *
aisd_interfaces__msg__Hand__Sequence__create(size_t size)
{
  aisd_interfaces__msg__Hand__Sequence * array = (aisd_interfaces__msg__Hand__Sequence *)malloc(sizeof(aisd_interfaces__msg__Hand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = aisd_interfaces__msg__Hand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
aisd_interfaces__msg__Hand__Sequence__destroy(aisd_interfaces__msg__Hand__Sequence * array)
{
  if (array) {
    aisd_interfaces__msg__Hand__Sequence__fini(array);
  }
  free(array);
}

bool
aisd_interfaces__msg__Hand__Sequence__are_equal(const aisd_interfaces__msg__Hand__Sequence * lhs, const aisd_interfaces__msg__Hand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aisd_interfaces__msg__Hand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aisd_interfaces__msg__Hand__Sequence__copy(
  const aisd_interfaces__msg__Hand__Sequence * input,
  aisd_interfaces__msg__Hand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aisd_interfaces__msg__Hand);
    aisd_interfaces__msg__Hand * data =
      (aisd_interfaces__msg__Hand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aisd_interfaces__msg__Hand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aisd_interfaces__msg__Hand__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aisd_interfaces__msg__Hand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
