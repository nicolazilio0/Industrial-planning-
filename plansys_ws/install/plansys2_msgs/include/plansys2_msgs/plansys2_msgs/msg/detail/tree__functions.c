// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plansys2_msgs:msg/Tree.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/tree__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `nodes`
#include "plansys2_msgs/msg/detail/node__functions.h"

bool
plansys2_msgs__msg__Tree__init(plansys2_msgs__msg__Tree * msg)
{
  if (!msg) {
    return false;
  }
  // nodes
  if (!plansys2_msgs__msg__Node__Sequence__init(&msg->nodes, 0)) {
    plansys2_msgs__msg__Tree__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__msg__Tree__fini(plansys2_msgs__msg__Tree * msg)
{
  if (!msg) {
    return;
  }
  // nodes
  plansys2_msgs__msg__Node__Sequence__fini(&msg->nodes);
}

bool
plansys2_msgs__msg__Tree__are_equal(const plansys2_msgs__msg__Tree * lhs, const plansys2_msgs__msg__Tree * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nodes
  if (!plansys2_msgs__msg__Node__Sequence__are_equal(
      &(lhs->nodes), &(rhs->nodes)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__msg__Tree__copy(
  const plansys2_msgs__msg__Tree * input,
  plansys2_msgs__msg__Tree * output)
{
  if (!input || !output) {
    return false;
  }
  // nodes
  if (!plansys2_msgs__msg__Node__Sequence__copy(
      &(input->nodes), &(output->nodes)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__msg__Tree *
plansys2_msgs__msg__Tree__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__Tree * msg = (plansys2_msgs__msg__Tree *)allocator.allocate(sizeof(plansys2_msgs__msg__Tree), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__msg__Tree));
  bool success = plansys2_msgs__msg__Tree__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__msg__Tree__destroy(plansys2_msgs__msg__Tree * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__msg__Tree__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__msg__Tree__Sequence__init(plansys2_msgs__msg__Tree__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__Tree * data = NULL;

  if (size) {
    data = (plansys2_msgs__msg__Tree *)allocator.zero_allocate(size, sizeof(plansys2_msgs__msg__Tree), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__msg__Tree__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__msg__Tree__fini(&data[i - 1]);
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
plansys2_msgs__msg__Tree__Sequence__fini(plansys2_msgs__msg__Tree__Sequence * array)
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
      plansys2_msgs__msg__Tree__fini(&array->data[i]);
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

plansys2_msgs__msg__Tree__Sequence *
plansys2_msgs__msg__Tree__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__Tree__Sequence * array = (plansys2_msgs__msg__Tree__Sequence *)allocator.allocate(sizeof(plansys2_msgs__msg__Tree__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__msg__Tree__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__msg__Tree__Sequence__destroy(plansys2_msgs__msg__Tree__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__msg__Tree__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__msg__Tree__Sequence__are_equal(const plansys2_msgs__msg__Tree__Sequence * lhs, const plansys2_msgs__msg__Tree__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__msg__Tree__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__msg__Tree__Sequence__copy(
  const plansys2_msgs__msg__Tree__Sequence * input,
  plansys2_msgs__msg__Tree__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__msg__Tree);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plansys2_msgs__msg__Tree * data =
      (plansys2_msgs__msg__Tree *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__msg__Tree__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plansys2_msgs__msg__Tree__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plansys2_msgs__msg__Tree__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
