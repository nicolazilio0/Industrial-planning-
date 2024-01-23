// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plansys2_msgs:srv/AddProblemGoal.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/srv/detail/add_problem_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `tree`
#include "plansys2_msgs/msg/detail/tree__functions.h"

bool
plansys2_msgs__srv__AddProblemGoal_Request__init(plansys2_msgs__srv__AddProblemGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // tree
  if (!plansys2_msgs__msg__Tree__init(&msg->tree)) {
    plansys2_msgs__srv__AddProblemGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__srv__AddProblemGoal_Request__fini(plansys2_msgs__srv__AddProblemGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // tree
  plansys2_msgs__msg__Tree__fini(&msg->tree);
}

bool
plansys2_msgs__srv__AddProblemGoal_Request__are_equal(const plansys2_msgs__srv__AddProblemGoal_Request * lhs, const plansys2_msgs__srv__AddProblemGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tree
  if (!plansys2_msgs__msg__Tree__are_equal(
      &(lhs->tree), &(rhs->tree)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__srv__AddProblemGoal_Request__copy(
  const plansys2_msgs__srv__AddProblemGoal_Request * input,
  plansys2_msgs__srv__AddProblemGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // tree
  if (!plansys2_msgs__msg__Tree__copy(
      &(input->tree), &(output->tree)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__srv__AddProblemGoal_Request *
plansys2_msgs__srv__AddProblemGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__srv__AddProblemGoal_Request * msg = (plansys2_msgs__srv__AddProblemGoal_Request *)allocator.allocate(sizeof(plansys2_msgs__srv__AddProblemGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__srv__AddProblemGoal_Request));
  bool success = plansys2_msgs__srv__AddProblemGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__srv__AddProblemGoal_Request__destroy(plansys2_msgs__srv__AddProblemGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__srv__AddProblemGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__srv__AddProblemGoal_Request__Sequence__init(plansys2_msgs__srv__AddProblemGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__srv__AddProblemGoal_Request * data = NULL;

  if (size) {
    data = (plansys2_msgs__srv__AddProblemGoal_Request *)allocator.zero_allocate(size, sizeof(plansys2_msgs__srv__AddProblemGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__srv__AddProblemGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__srv__AddProblemGoal_Request__fini(&data[i - 1]);
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
plansys2_msgs__srv__AddProblemGoal_Request__Sequence__fini(plansys2_msgs__srv__AddProblemGoal_Request__Sequence * array)
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
      plansys2_msgs__srv__AddProblemGoal_Request__fini(&array->data[i]);
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

plansys2_msgs__srv__AddProblemGoal_Request__Sequence *
plansys2_msgs__srv__AddProblemGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__srv__AddProblemGoal_Request__Sequence * array = (plansys2_msgs__srv__AddProblemGoal_Request__Sequence *)allocator.allocate(sizeof(plansys2_msgs__srv__AddProblemGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__srv__AddProblemGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__srv__AddProblemGoal_Request__Sequence__destroy(plansys2_msgs__srv__AddProblemGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__srv__AddProblemGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__srv__AddProblemGoal_Request__Sequence__are_equal(const plansys2_msgs__srv__AddProblemGoal_Request__Sequence * lhs, const plansys2_msgs__srv__AddProblemGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__srv__AddProblemGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__srv__AddProblemGoal_Request__Sequence__copy(
  const plansys2_msgs__srv__AddProblemGoal_Request__Sequence * input,
  plansys2_msgs__srv__AddProblemGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__srv__AddProblemGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plansys2_msgs__srv__AddProblemGoal_Request * data =
      (plansys2_msgs__srv__AddProblemGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__srv__AddProblemGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plansys2_msgs__srv__AddProblemGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plansys2_msgs__srv__AddProblemGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_info`
#include "rosidl_runtime_c/string_functions.h"

bool
plansys2_msgs__srv__AddProblemGoal_Response__init(plansys2_msgs__srv__AddProblemGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_info
  if (!rosidl_runtime_c__String__init(&msg->error_info)) {
    plansys2_msgs__srv__AddProblemGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__srv__AddProblemGoal_Response__fini(plansys2_msgs__srv__AddProblemGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_info
  rosidl_runtime_c__String__fini(&msg->error_info);
}

bool
plansys2_msgs__srv__AddProblemGoal_Response__are_equal(const plansys2_msgs__srv__AddProblemGoal_Response * lhs, const plansys2_msgs__srv__AddProblemGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error_info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_info), &(rhs->error_info)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__srv__AddProblemGoal_Response__copy(
  const plansys2_msgs__srv__AddProblemGoal_Response * input,
  plansys2_msgs__srv__AddProblemGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error_info
  if (!rosidl_runtime_c__String__copy(
      &(input->error_info), &(output->error_info)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__srv__AddProblemGoal_Response *
plansys2_msgs__srv__AddProblemGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__srv__AddProblemGoal_Response * msg = (plansys2_msgs__srv__AddProblemGoal_Response *)allocator.allocate(sizeof(plansys2_msgs__srv__AddProblemGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__srv__AddProblemGoal_Response));
  bool success = plansys2_msgs__srv__AddProblemGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__srv__AddProblemGoal_Response__destroy(plansys2_msgs__srv__AddProblemGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__srv__AddProblemGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__srv__AddProblemGoal_Response__Sequence__init(plansys2_msgs__srv__AddProblemGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__srv__AddProblemGoal_Response * data = NULL;

  if (size) {
    data = (plansys2_msgs__srv__AddProblemGoal_Response *)allocator.zero_allocate(size, sizeof(plansys2_msgs__srv__AddProblemGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__srv__AddProblemGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__srv__AddProblemGoal_Response__fini(&data[i - 1]);
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
plansys2_msgs__srv__AddProblemGoal_Response__Sequence__fini(plansys2_msgs__srv__AddProblemGoal_Response__Sequence * array)
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
      plansys2_msgs__srv__AddProblemGoal_Response__fini(&array->data[i]);
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

plansys2_msgs__srv__AddProblemGoal_Response__Sequence *
plansys2_msgs__srv__AddProblemGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__srv__AddProblemGoal_Response__Sequence * array = (plansys2_msgs__srv__AddProblemGoal_Response__Sequence *)allocator.allocate(sizeof(plansys2_msgs__srv__AddProblemGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__srv__AddProblemGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__srv__AddProblemGoal_Response__Sequence__destroy(plansys2_msgs__srv__AddProblemGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__srv__AddProblemGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__srv__AddProblemGoal_Response__Sequence__are_equal(const plansys2_msgs__srv__AddProblemGoal_Response__Sequence * lhs, const plansys2_msgs__srv__AddProblemGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__srv__AddProblemGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__srv__AddProblemGoal_Response__Sequence__copy(
  const plansys2_msgs__srv__AddProblemGoal_Response__Sequence * input,
  plansys2_msgs__srv__AddProblemGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__srv__AddProblemGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plansys2_msgs__srv__AddProblemGoal_Response * data =
      (plansys2_msgs__srv__AddProblemGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__srv__AddProblemGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plansys2_msgs__srv__AddProblemGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plansys2_msgs__srv__AddProblemGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}