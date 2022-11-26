// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aisd_interfaces:srv/Speak.idl
// generated code does not contain a copyright notice
#include "aisd_interfaces/srv/detail/speak__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `words`
#include "rosidl_runtime_c/string_functions.h"

bool
aisd_interfaces__srv__Speak_Request__init(aisd_interfaces__srv__Speak_Request * msg)
{
  if (!msg) {
    return false;
  }
  // words
  if (!rosidl_runtime_c__String__init(&msg->words)) {
    aisd_interfaces__srv__Speak_Request__fini(msg);
    return false;
  }
  return true;
}

void
aisd_interfaces__srv__Speak_Request__fini(aisd_interfaces__srv__Speak_Request * msg)
{
  if (!msg) {
    return;
  }
  // words
  rosidl_runtime_c__String__fini(&msg->words);
}

bool
aisd_interfaces__srv__Speak_Request__are_equal(const aisd_interfaces__srv__Speak_Request * lhs, const aisd_interfaces__srv__Speak_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // words
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->words), &(rhs->words)))
  {
    return false;
  }
  return true;
}

bool
aisd_interfaces__srv__Speak_Request__copy(
  const aisd_interfaces__srv__Speak_Request * input,
  aisd_interfaces__srv__Speak_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // words
  if (!rosidl_runtime_c__String__copy(
      &(input->words), &(output->words)))
  {
    return false;
  }
  return true;
}

aisd_interfaces__srv__Speak_Request *
aisd_interfaces__srv__Speak_Request__create()
{
  aisd_interfaces__srv__Speak_Request * msg = (aisd_interfaces__srv__Speak_Request *)malloc(sizeof(aisd_interfaces__srv__Speak_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aisd_interfaces__srv__Speak_Request));
  bool success = aisd_interfaces__srv__Speak_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
aisd_interfaces__srv__Speak_Request__destroy(aisd_interfaces__srv__Speak_Request * msg)
{
  if (msg) {
    aisd_interfaces__srv__Speak_Request__fini(msg);
  }
  free(msg);
}


bool
aisd_interfaces__srv__Speak_Request__Sequence__init(aisd_interfaces__srv__Speak_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  aisd_interfaces__srv__Speak_Request * data = NULL;
  if (size) {
    data = (aisd_interfaces__srv__Speak_Request *)calloc(size, sizeof(aisd_interfaces__srv__Speak_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aisd_interfaces__srv__Speak_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aisd_interfaces__srv__Speak_Request__fini(&data[i - 1]);
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
aisd_interfaces__srv__Speak_Request__Sequence__fini(aisd_interfaces__srv__Speak_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aisd_interfaces__srv__Speak_Request__fini(&array->data[i]);
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

aisd_interfaces__srv__Speak_Request__Sequence *
aisd_interfaces__srv__Speak_Request__Sequence__create(size_t size)
{
  aisd_interfaces__srv__Speak_Request__Sequence * array = (aisd_interfaces__srv__Speak_Request__Sequence *)malloc(sizeof(aisd_interfaces__srv__Speak_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = aisd_interfaces__srv__Speak_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
aisd_interfaces__srv__Speak_Request__Sequence__destroy(aisd_interfaces__srv__Speak_Request__Sequence * array)
{
  if (array) {
    aisd_interfaces__srv__Speak_Request__Sequence__fini(array);
  }
  free(array);
}

bool
aisd_interfaces__srv__Speak_Request__Sequence__are_equal(const aisd_interfaces__srv__Speak_Request__Sequence * lhs, const aisd_interfaces__srv__Speak_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aisd_interfaces__srv__Speak_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aisd_interfaces__srv__Speak_Request__Sequence__copy(
  const aisd_interfaces__srv__Speak_Request__Sequence * input,
  aisd_interfaces__srv__Speak_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aisd_interfaces__srv__Speak_Request);
    aisd_interfaces__srv__Speak_Request * data =
      (aisd_interfaces__srv__Speak_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aisd_interfaces__srv__Speak_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aisd_interfaces__srv__Speak_Request__fini(&data[i]);
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
    if (!aisd_interfaces__srv__Speak_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
aisd_interfaces__srv__Speak_Response__init(aisd_interfaces__srv__Speak_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    aisd_interfaces__srv__Speak_Response__fini(msg);
    return false;
  }
  return true;
}

void
aisd_interfaces__srv__Speak_Response__fini(aisd_interfaces__srv__Speak_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  rosidl_runtime_c__String__fini(&msg->response);
}

bool
aisd_interfaces__srv__Speak_Response__are_equal(const aisd_interfaces__srv__Speak_Response * lhs, const aisd_interfaces__srv__Speak_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
aisd_interfaces__srv__Speak_Response__copy(
  const aisd_interfaces__srv__Speak_Response * input,
  aisd_interfaces__srv__Speak_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

aisd_interfaces__srv__Speak_Response *
aisd_interfaces__srv__Speak_Response__create()
{
  aisd_interfaces__srv__Speak_Response * msg = (aisd_interfaces__srv__Speak_Response *)malloc(sizeof(aisd_interfaces__srv__Speak_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aisd_interfaces__srv__Speak_Response));
  bool success = aisd_interfaces__srv__Speak_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
aisd_interfaces__srv__Speak_Response__destroy(aisd_interfaces__srv__Speak_Response * msg)
{
  if (msg) {
    aisd_interfaces__srv__Speak_Response__fini(msg);
  }
  free(msg);
}


bool
aisd_interfaces__srv__Speak_Response__Sequence__init(aisd_interfaces__srv__Speak_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  aisd_interfaces__srv__Speak_Response * data = NULL;
  if (size) {
    data = (aisd_interfaces__srv__Speak_Response *)calloc(size, sizeof(aisd_interfaces__srv__Speak_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aisd_interfaces__srv__Speak_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aisd_interfaces__srv__Speak_Response__fini(&data[i - 1]);
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
aisd_interfaces__srv__Speak_Response__Sequence__fini(aisd_interfaces__srv__Speak_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aisd_interfaces__srv__Speak_Response__fini(&array->data[i]);
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

aisd_interfaces__srv__Speak_Response__Sequence *
aisd_interfaces__srv__Speak_Response__Sequence__create(size_t size)
{
  aisd_interfaces__srv__Speak_Response__Sequence * array = (aisd_interfaces__srv__Speak_Response__Sequence *)malloc(sizeof(aisd_interfaces__srv__Speak_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = aisd_interfaces__srv__Speak_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
aisd_interfaces__srv__Speak_Response__Sequence__destroy(aisd_interfaces__srv__Speak_Response__Sequence * array)
{
  if (array) {
    aisd_interfaces__srv__Speak_Response__Sequence__fini(array);
  }
  free(array);
}

bool
aisd_interfaces__srv__Speak_Response__Sequence__are_equal(const aisd_interfaces__srv__Speak_Response__Sequence * lhs, const aisd_interfaces__srv__Speak_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aisd_interfaces__srv__Speak_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aisd_interfaces__srv__Speak_Response__Sequence__copy(
  const aisd_interfaces__srv__Speak_Response__Sequence * input,
  aisd_interfaces__srv__Speak_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aisd_interfaces__srv__Speak_Response);
    aisd_interfaces__srv__Speak_Response * data =
      (aisd_interfaces__srv__Speak_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aisd_interfaces__srv__Speak_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aisd_interfaces__srv__Speak_Response__fini(&data[i]);
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
    if (!aisd_interfaces__srv__Speak_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
