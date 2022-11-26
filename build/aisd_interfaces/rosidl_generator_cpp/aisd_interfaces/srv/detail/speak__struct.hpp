// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aisd_interfaces:srv/Speak.idl
// generated code does not contain a copyright notice

#ifndef AISD_INTERFACES__SRV__DETAIL__SPEAK__STRUCT_HPP_
#define AISD_INTERFACES__SRV__DETAIL__SPEAK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aisd_interfaces__srv__Speak_Request __attribute__((deprecated))
#else
# define DEPRECATED__aisd_interfaces__srv__Speak_Request __declspec(deprecated)
#endif

namespace aisd_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Speak_Request_
{
  using Type = Speak_Request_<ContainerAllocator>;

  explicit Speak_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->words = "";
    }
  }

  explicit Speak_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : words(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->words = "";
    }
  }

  // field types and members
  using _words_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _words_type words;

  // setters for named parameter idiom
  Type & set__words(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->words = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aisd_interfaces::srv::Speak_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aisd_interfaces::srv::Speak_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aisd_interfaces::srv::Speak_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aisd_interfaces::srv::Speak_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aisd_interfaces::srv::Speak_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aisd_interfaces::srv::Speak_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aisd_interfaces::srv::Speak_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aisd_interfaces::srv::Speak_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aisd_interfaces::srv::Speak_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aisd_interfaces::srv::Speak_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aisd_interfaces__srv__Speak_Request
    std::shared_ptr<aisd_interfaces::srv::Speak_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aisd_interfaces__srv__Speak_Request
    std::shared_ptr<aisd_interfaces::srv::Speak_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Speak_Request_ & other) const
  {
    if (this->words != other.words) {
      return false;
    }
    return true;
  }
  bool operator!=(const Speak_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Speak_Request_

// alias to use template instance with default allocator
using Speak_Request =
  aisd_interfaces::srv::Speak_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aisd_interfaces


#ifndef _WIN32
# define DEPRECATED__aisd_interfaces__srv__Speak_Response __attribute__((deprecated))
#else
# define DEPRECATED__aisd_interfaces__srv__Speak_Response __declspec(deprecated)
#endif

namespace aisd_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Speak_Response_
{
  using Type = Speak_Response_<ContainerAllocator>;

  explicit Speak_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit Speak_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aisd_interfaces::srv::Speak_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aisd_interfaces::srv::Speak_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aisd_interfaces::srv::Speak_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aisd_interfaces::srv::Speak_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aisd_interfaces::srv::Speak_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aisd_interfaces::srv::Speak_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aisd_interfaces::srv::Speak_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aisd_interfaces::srv::Speak_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aisd_interfaces::srv::Speak_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aisd_interfaces::srv::Speak_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aisd_interfaces__srv__Speak_Response
    std::shared_ptr<aisd_interfaces::srv::Speak_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aisd_interfaces__srv__Speak_Response
    std::shared_ptr<aisd_interfaces::srv::Speak_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Speak_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Speak_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Speak_Response_

// alias to use template instance with default allocator
using Speak_Response =
  aisd_interfaces::srv::Speak_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aisd_interfaces

namespace aisd_interfaces
{

namespace srv
{

struct Speak
{
  using Request = aisd_interfaces::srv::Speak_Request;
  using Response = aisd_interfaces::srv::Speak_Response;
};

}  // namespace srv

}  // namespace aisd_interfaces

#endif  // AISD_INTERFACES__SRV__DETAIL__SPEAK__STRUCT_HPP_
