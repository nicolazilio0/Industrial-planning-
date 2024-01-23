// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plansys2_msgs:msg/Param.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `type`
// Member `sub_types`
#include "rosidl_runtime_c/string_functions.h"

bool
plansys2_msgs__msg__Param__init(plansys2_msgs__msg__Param * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    plansys2_msgs__msg__Param__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    plansys2_msgs__msg__Param__fini(msg);
    return false;
  }
  // sub_types
  if (!rosidl_runtime_c__String__Sequence__init(&msg->sub_types, 0)) {
    plansys2_msgs__msg__Param__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__msg__Param__fini(plansys2_msgs__msg__Param * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // sub_types
  rosidl_runtime_c__String__Sequence__fini(&msg->sub_types);
}

bool
plansys2_msgs__msg__Param__are_equal(const plansys2_msgs__msg__Param * lhs, const plansys2_msgs__msg__Param * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // sub_types
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->sub_types), &(rhs->sub_types)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__msg__Param__copy(
  const plansys2_msgs__msg__Param * input,
  plansys2_msgs__msg__Param * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // sub_types
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->sub_types), &(output->sub_types)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__msg__Param *
plansys2_msgs__msg__Param__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__Param * msg = (plansys2_msgs__msg__Param *)allocator.allocate(sizeof(plansys2_msgs__msg__Param), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__msg__Param));
  bool success = plansys2_msgs__msg__Param__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__msg__Param__destroy(plansys2_msgs__msg__Param * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__msg__Param__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__msg__Param__Sequence__init(plansys2_msgs__msg__Param__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__Param * data = NULL;

  if (size) {
    data = (plansys2_msgs__msg__Param *)allocator.zero_allocate(size, sizeof(plansys2_msgs__msg__Param), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__msg__Param__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__msg__Param__fini(&data[i - 1]);
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
plansys2_msgs__msg__Param__Sequence__fini(plansys2_msgs__msg__Param__Sequence * array)
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
      plansys2_msgs__msg__Param__fini(&array->data[i]);
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

plansys2_msgs__msg__Param__Sequence *
plansys2_msgs__msg__Param__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__Param__Sequence * array = (plansys2_msgs__msg__Param__Sequence *)allocator.allocate(sizeof(plansys2_msgs__msg__Param__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__msg__Param__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__msg__Param__Sequence__destroy(plansys2_msgs__msg__Param__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__msg__Param__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__msg__Param__Sequence__are_equal(const plansys2_msgs__msg__Param__Sequence * lhs, const plansys2_msgs__msg__Param__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__msg__Param__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__msg__Param__Sequence__copy(
  const plansys2_msgs__msg__Param__Sequence * input,
  plansys2_msgs__msg__Param__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__msg__Param);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plansys2_msgs__msg__Param * data =
      (plansys2_msgs__msg__Param *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__msg__Param__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plansys2_msgs__msg__Param__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plansys2_msgs__msg__Param__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
