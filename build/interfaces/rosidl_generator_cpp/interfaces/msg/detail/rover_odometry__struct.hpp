// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/RoverOdometry.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ROVER_ODOMETRY__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__ROVER_ODOMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'linear_velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__msg__RoverOdometry __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__RoverOdometry __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverOdometry_
{
  using Type = RoverOdometry_<ContainerAllocator>;

  explicit RoverOdometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rover_id = 0l;
      this->orientation = 0.0f;
      this->angular_velocity = 0.0f;
    }
  }

  explicit RoverOdometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rover_id = 0l;
      this->orientation = 0.0f;
      this->angular_velocity = 0.0f;
    }
  }

  // field types and members
  using _rover_id_type =
    int32_t;
  _rover_id_type rover_id;
  using _orientation_type =
    float;
  _orientation_type orientation;
  using _linear_velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _linear_velocity_type linear_velocity;
  using _angular_velocity_type =
    float;
  _angular_velocity_type angular_velocity;

  // setters for named parameter idiom
  Type & set__rover_id(
    const int32_t & _arg)
  {
    this->rover_id = _arg;
    return *this;
  }
  Type & set__orientation(
    const float & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const float & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::RoverOdometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::RoverOdometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::RoverOdometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::RoverOdometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::RoverOdometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::RoverOdometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::RoverOdometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::RoverOdometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::RoverOdometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::RoverOdometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__RoverOdometry
    std::shared_ptr<interfaces::msg::RoverOdometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__RoverOdometry
    std::shared_ptr<interfaces::msg::RoverOdometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverOdometry_ & other) const
  {
    if (this->rover_id != other.rover_id) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverOdometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverOdometry_

// alias to use template instance with default allocator
using RoverOdometry =
  interfaces::msg::RoverOdometry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ROVER_ODOMETRY__STRUCT_HPP_
