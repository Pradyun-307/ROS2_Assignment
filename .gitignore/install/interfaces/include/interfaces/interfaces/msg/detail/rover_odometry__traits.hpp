// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/RoverOdometry.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ROVER_ODOMETRY__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__ROVER_ODOMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/rover_odometry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'linear_velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoverOdometry & msg,
  std::ostream & out)
{
  out << "{";
  // member: rover_id
  {
    out << "rover_id: ";
    rosidl_generator_traits::value_to_yaml(msg.rover_id, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    to_flow_style_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoverOdometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rover_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rover_id: ";
    rosidl_generator_traits::value_to_yaml(msg.rover_id, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << "\n";
  }

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity:\n";
    to_block_style_yaml(msg.linear_velocity, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoverOdometry & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::RoverOdometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::RoverOdometry & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::RoverOdometry>()
{
  return "interfaces::msg::RoverOdometry";
}

template<>
inline const char * name<interfaces::msg::RoverOdometry>()
{
  return "interfaces/msg/RoverOdometry";
}

template<>
struct has_fixed_size<interfaces::msg::RoverOdometry>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<interfaces::msg::RoverOdometry>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<interfaces::msg::RoverOdometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__ROVER_ODOMETRY__TRAITS_HPP_
