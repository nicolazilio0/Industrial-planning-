// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from plansys2_msgs:msg/Param.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__PARAM__FUNCTIONS_H_
#define PLANSYS2_MSGS__MSG__DETAIL__PARAM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "plansys2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "plansys2_msgs/msg/detail/param__struct.h"

/// Initialize msg/Param message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plansys2_msgs__msg__Param
 * )) before or use
 * plansys2_msgs__msg__Param__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__msg__Param__init(plansys2_msgs__msg__Param * msg);

/// Finalize msg/Param message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__msg__Param__fini(plansys2_msgs__msg__Param * msg);

/// Create msg/Param message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plansys2_msgs__msg__Param__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__msg__Param *
plansys2_msgs__msg__Param__create();

/// Destroy msg/Param message.
/**
 * It calls
 * plansys2_msgs__msg__Param__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__msg__Param__destroy(plansys2_msgs__msg__Param * msg);

/// Check for msg/Param message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__msg__Param__are_equal(const plansys2_msgs__msg__Param * lhs, const plansys2_msgs__msg__Param * rhs);

/// Copy a msg/Param message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__msg__Param__copy(
  const plansys2_msgs__msg__Param * input,
  plansys2_msgs__msg__Param * output);

/// Initialize array of msg/Param messages.
/**
 * It allocates the memory for the number of elements and calls
 * plansys2_msgs__msg__Param__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__msg__Param__Sequence__init(plansys2_msgs__msg__Param__Sequence * array, size_t size);

/// Finalize array of msg/Param messages.
/**
 * It calls
 * plansys2_msgs__msg__Param__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__msg__Param__Sequence__fini(plansys2_msgs__msg__Param__Sequence * array);

/// Create array of msg/Param messages.
/**
 * It allocates the memory for the array and calls
 * plansys2_msgs__msg__Param__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__msg__Param__Sequence *
plansys2_msgs__msg__Param__Sequence__create(size_t size);

/// Destroy array of msg/Param messages.
/**
 * It calls
 * plansys2_msgs__msg__Param__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__msg__Param__Sequence__destroy(plansys2_msgs__msg__Param__Sequence * array);

/// Check for msg/Param message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__msg__Param__Sequence__are_equal(const plansys2_msgs__msg__Param__Sequence * lhs, const plansys2_msgs__msg__Param__Sequence * rhs);

/// Copy an array of msg/Param messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__msg__Param__Sequence__copy(
  const plansys2_msgs__msg__Param__Sequence * input,
  plansys2_msgs__msg__Param__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__PARAM__FUNCTIONS_H_
