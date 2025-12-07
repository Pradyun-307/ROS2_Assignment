// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mars_msgs:msg/RoverOdometry.idl
// generated code does not contain a copyright notice

#ifndef MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__STRUCT_H_
#define MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'linear_velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/RoverOdometry in the package mars_msgs.
typedef struct mars_msgs__msg__RoverOdometry
{
  int32_t rover_id;
  float orientation;
  geometry_msgs__msg__Twist linear_velocity;
  float angular_velocity;
} mars_msgs__msg__RoverOdometry;

// Struct for a sequence of mars_msgs__msg__RoverOdometry.
typedef struct mars_msgs__msg__RoverOdometry__Sequence
{
  mars_msgs__msg__RoverOdometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mars_msgs__msg__RoverOdometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__STRUCT_H_
