// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aisd_interfaces:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef AISD_INTERFACES__MSG__DETAIL__HAND__STRUCT_HPP_
#define AISD_INTERFACES__MSG__DETAIL__HAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aisd_interfaces__msg__Hand __attribute__((deprecated))
#else
# define DEPRECATED__aisd_interfaces__msg__Hand __declspec(deprecated)
#endif

namespace aisd_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Hand_
{
  using Type = Hand_<ContainerAllocator>;

  explicit Hand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xpinky = 0.0;
      this->xindex = 0.0;
    }
  }

  explicit Hand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xpinky = 0.0;
      this->xindex = 0.0;
    }
  }

  // field types and members
  using _xpinky_type =
    double;
  _xpinky_type xpinky;
  using _xindex_type =
    double;
  _xindex_type xindex;

  // setters for named parameter idiom
  Type & set__xpinky(
    const double & _arg)
  {
    this->xpinky = _arg;
    return *this;
  }
  Type & set__xindex(
    const double & _arg)
  {
    this->xindex = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aisd_interfaces::msg::Hand_<ContainerAllocator> *;
  using ConstRawPtr =
    const aisd_interfaces::msg::Hand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aisd_interfaces::msg::Hand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aisd_interfaces::msg::Hand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aisd_interfaces::msg::Hand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aisd_interfaces::msg::Hand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aisd_interfaces::msg::Hand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aisd_interfaces::msg::Hand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aisd_interfaces::msg::Hand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aisd_interfaces::msg::Hand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aisd_interfaces__msg__Hand
    std::shared_ptr<aisd_interfaces::msg::Hand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aisd_interfaces__msg__Hand
    std::shared_ptr<aisd_interfaces::msg::Hand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hand_ & other) const
  {
    if (this->xpinky != other.xpinky) {
      return false;
    }
    if (this->xindex != other.xindex) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hand_

// alias to use template instance with default allocator
using Hand =
  aisd_interfaces::msg::Hand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aisd_interfaces

#endif  // AISD_INTERFACES__MSG__DETAIL__HAND__STRUCT_HPP_
