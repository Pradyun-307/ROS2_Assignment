// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mars_msgs:msg/RoverOdometry.idl
// generated code does not contain a copyright notice

#ifndef MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__BUILDER_HPP_
#define MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mars_msgs/msg/detail/rover_odometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mars_msgs
{

namespace msg
{

namespace builder
{

class Init_RoverOdometry_angular_velocity
{
public:
  explicit Init_RoverOdometry_angular_velocity(::mars_msgs::msg::RoverOdometry & msg)
  : msg_(msg)
  {}
  ::mars_msgs::msg::RoverOdometry angular_velocity(::mars_msgs::msg::RoverOdometry::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::msg::RoverOdometry msg_;
};

class Init_RoverOdometry_linear_velocity
{
public:
  explicit Init_RoverOdometry_linear_velocity(::mars_msgs::msg::RoverOdometry & msg)
  : msg_(msg)
  {}
  Init_RoverOdometry_angular_velocity linear_velocity(::mars_msgs::msg::RoverOdometry::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_RoverOdometry_angular_velocity(msg_);
  }

private:
  ::mars_msgs::msg::RoverOdometry msg_;
};

class Init_RoverOdometry_orientation
{
public:
  explicit Init_RoverOdometry_orientation(::mars_msgs::msg::RoverOdometry & msg)
  : msg_(msg)
  {}
  Init_RoverOdometry_linear_velocity orientation(::mars_msgs::msg::RoverOdometry::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RoverOdometry_linear_velocity(msg_);
  }

private:
  ::mars_msgs::msg::RoverOdometry msg_;
};

class Init_RoverOdometry_rover_id
{
public:
  Init_RoverOdometry_rover_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverOdometry_orientation rover_id(::mars_msgs::msg::RoverOdometry::_rover_id_type arg)
  {
    msg_.rover_id = std::move(arg);
    return Init_RoverOdometry_orientation(msg_);
  }

private:
  ::mars_msgs::msg::RoverOdometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::msg::RoverOdometry>()
{
  return mars_msgs::msg::builder::Init_RoverOdometry_rover_id();
}

}  // namespace mars_msgs

#endif  // MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__BUILDER_HPP_
