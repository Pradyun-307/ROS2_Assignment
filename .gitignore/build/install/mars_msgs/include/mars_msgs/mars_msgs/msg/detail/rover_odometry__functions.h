// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mars_msgs:msg/RoverOdometry.idl
// generated code does not contain a copyright notice

#ifndef MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__FUNCTIONS_H_
#define MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mars_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mars_msgs/msg/detail/rover_odometry__struct.h"

/// Initialize msg/RoverOdometry message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mars_msgs__msg__RoverOdometry
 * )) before or use
 * mars_msgs__msg__RoverOdometry__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
bool
mars_msgs__msg__RoverOdometry__init(mars_msgs__msg__RoverOdometry * msg);

/// Finalize msg/RoverOdometry message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
void
mars_msgs__msg__RoverOdometry__fini(mars_msgs__msg__RoverOdometry * msg);

/// Create msg/RoverOdometry message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mars_msgs__msg__RoverOdometry__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
mars_msgs__msg__RoverOdometry *
mars_msgs__msg__RoverOdometry__create();

/// Destroy msg/RoverOdometry message.
/**
 * It calls
 * mars_msgs__msg__RoverOdometry__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
void
mars_msgs__msg__RoverOdometry__destroy(mars_msgs__msg__RoverOdometry * msg);

/// Check for msg/RoverOdometry message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
bool
mars_msgs__msg__RoverOdometry__are_equal(const mars_msgs__msg__RoverOdometry * lhs, const mars_msgs__msg__RoverOdometry * rhs);

/// Copy a msg/RoverOdometry message.
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
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
bool
mars_msgs__msg__RoverOdometry__copy(
  const mars_msgs__msg__RoverOdometry * input,
  mars_msgs__msg__RoverOdometry * output);

/// Initialize array of msg/RoverOdometry messages.
/**
 * It allocates the memory for the number of elements and calls
 * mars_msgs__msg__RoverOdometry__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
bool
mars_msgs__msg__RoverOdometry__Sequence__init(mars_msgs__msg__RoverOdometry__Sequence * array, size_t size);

/// Finalize array of msg/RoverOdometry messages.
/**
 * It calls
 * mars_msgs__msg__RoverOdometry__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
void
mars_msgs__msg__RoverOdometry__Sequence__fini(mars_msgs__msg__RoverOdometry__Sequence * array);

/// Create array of msg/RoverOdometry messages.
/**
 * It allocates the memory for the array and calls
 * mars_msgs__msg__RoverOdometry__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
mars_msgs__msg__RoverOdometry__Sequence *
mars_msgs__msg__RoverOdometry__Sequence__create(size_t size);

/// Destroy array of msg/RoverOdometry messages.
/**
 * It calls
 * mars_msgs__msg__RoverOdometry__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
void
mars_msgs__msg__RoverOdometry__Sequence__destroy(mars_msgs__msg__RoverOdometry__Sequence * array);

/// Check for msg/RoverOdometry message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
bool
mars_msgs__msg__RoverOdometry__Sequence__are_equal(const mars_msgs__msg__RoverOdometry__Sequence * lhs, const mars_msgs__msg__RoverOdometry__Sequence * rhs);

/// Copy an array of msg/RoverOdometry messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
bool
mars_msgs__msg__RoverOdometry__Sequence__copy(
  const mars_msgs__msg__RoverOdometry__Sequence * input,
  mars_msgs__msg__RoverOdometry__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__FUNCTIONS_H_
