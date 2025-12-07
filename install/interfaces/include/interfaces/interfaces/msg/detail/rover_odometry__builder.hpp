// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/RoverOdometry.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ROVER_ODOMETRY__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__ROVER_ODOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/rover_odometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_RoverOdometry_angular_velocity
{
public:
  explicit Init_RoverOdometry_angular_velocity(::interfaces::msg::RoverOdometry & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::RoverOdometry angular_velocity(::interfaces::msg::RoverOdometry::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::RoverOdometry msg_;
};

class Init_RoverOdometry_linear_velocity
{
public:
  explicit Init_RoverOdometry_linear_velocity(::interfaces::msg::RoverOdometry & msg)
  : msg_(msg)
  {}
  Init_RoverOdometry_angular_velocity linear_velocity(::interfaces::msg::RoverOdometry::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_RoverOdometry_angular_velocity(msg_);
  }

private:
  ::interfaces::msg::RoverOdometry msg_;
};

class Init_RoverOdometry_orientation
{
public:
  explicit Init_RoverOdometry_orientation(::interfaces::msg::RoverOdometry & msg)
  : msg_(msg)
  {}
  Init_RoverOdometry_linear_velocity orientation(::interfaces::msg::RoverOdometry::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RoverOdometry_linear_velocity(msg_);
  }

private:
  ::interfaces::msg::RoverOdometry msg_;
};

class Init_RoverOdometry_rover_id
{
public:
  Init_RoverOdometry_rover_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverOdometry_orientation rover_id(::interfaces::msg::RoverOdometry::_rover_id_type arg)
  {
    msg_.rover_id = std::move(arg);
    return Init_RoverOdometry_orientation(msg_);
  }

private:
  ::interfaces::msg::RoverOdometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::RoverOdometry>()
{
  return interfaces::msg::builder::Init_RoverOdometry_rover_id();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ROVER_ODOMETRY__BUILDER_HPP_
