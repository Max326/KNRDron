// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drone_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice
#include "drone_interfaces/msg/detail/detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `color_name`
#include "rosidl_runtime_c/string_functions.h"

bool
drone_interfaces__msg__Detection__init(drone_interfaces__msg__Detection * msg)
{
  if (!msg) {
    return false;
  }
  // bounding_box
  // color_name
  if (!rosidl_runtime_c__String__init(&msg->color_name)) {
    drone_interfaces__msg__Detection__fini(msg);
    return false;
  }
  // gps_position
  return true;
}

void
drone_interfaces__msg__Detection__fini(drone_interfaces__msg__Detection * msg)
{
  if (!msg) {
    return;
  }
  // bounding_box
  // color_name
  rosidl_runtime_c__String__fini(&msg->color_name);
  // gps_position
}

bool
drone_interfaces__msg__Detection__are_equal(const drone_interfaces__msg__Detection * lhs, const drone_interfaces__msg__Detection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bounding_box
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->bounding_box[i] != rhs->bounding_box[i]) {
      return false;
    }
  }
  // color_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color_name), &(rhs->color_name)))
  {
    return false;
  }
  // gps_position
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->gps_position[i] != rhs->gps_position[i]) {
      return false;
    }
  }
  return true;
}

bool
drone_interfaces__msg__Detection__copy(
  const drone_interfaces__msg__Detection * input,
  drone_interfaces__msg__Detection * output)
{
  if (!input || !output) {
    return false;
  }
  // bounding_box
  for (size_t i = 0; i < 3; ++i) {
    output->bounding_box[i] = input->bounding_box[i];
  }
  // color_name
  if (!rosidl_runtime_c__String__copy(
      &(input->color_name), &(output->color_name)))
  {
    return false;
  }
  // gps_position
  for (size_t i = 0; i < 2; ++i) {
    output->gps_position[i] = input->gps_position[i];
  }
  return true;
}

drone_interfaces__msg__Detection *
drone_interfaces__msg__Detection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_interfaces__msg__Detection * msg = (drone_interfaces__msg__Detection *)allocator.allocate(sizeof(drone_interfaces__msg__Detection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_interfaces__msg__Detection));
  bool success = drone_interfaces__msg__Detection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_interfaces__msg__Detection__destroy(drone_interfaces__msg__Detection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_interfaces__msg__Detection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_interfaces__msg__Detection__Sequence__init(drone_interfaces__msg__Detection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_interfaces__msg__Detection * data = NULL;

  if (size) {
    data = (drone_interfaces__msg__Detection *)allocator.zero_allocate(size, sizeof(drone_interfaces__msg__Detection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_interfaces__msg__Detection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_interfaces__msg__Detection__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
drone_interfaces__msg__Detection__Sequence__fini(drone_interfaces__msg__Detection__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      drone_interfaces__msg__Detection__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

drone_interfaces__msg__Detection__Sequence *
drone_interfaces__msg__Detection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_interfaces__msg__Detection__Sequence * array = (drone_interfaces__msg__Detection__Sequence *)allocator.allocate(sizeof(drone_interfaces__msg__Detection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_interfaces__msg__Detection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_interfaces__msg__Detection__Sequence__destroy(drone_interfaces__msg__Detection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_interfaces__msg__Detection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_interfaces__msg__Detection__Sequence__are_equal(const drone_interfaces__msg__Detection__Sequence * lhs, const drone_interfaces__msg__Detection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_interfaces__msg__Detection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_interfaces__msg__Detection__Sequence__copy(
  const drone_interfaces__msg__Detection__Sequence * input,
  drone_interfaces__msg__Detection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_interfaces__msg__Detection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_interfaces__msg__Detection * data =
      (drone_interfaces__msg__Detection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_interfaces__msg__Detection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_interfaces__msg__Detection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_interfaces__msg__Detection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
