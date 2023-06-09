// Generated by gencpp from file play_motion_msgs/PlayMotionResult.msg
// DO NOT EDIT!


#ifndef PLAY_MOTION_MSGS_MESSAGE_PLAYMOTIONRESULT_H
#define PLAY_MOTION_MSGS_MESSAGE_PLAYMOTIONRESULT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace play_motion_msgs
{
template <class ContainerAllocator>
struct PlayMotionResult_
{
  typedef PlayMotionResult_<ContainerAllocator> Type;

  PlayMotionResult_()
    : error_code(0)
    , error_string()  {
    }
  PlayMotionResult_(const ContainerAllocator& _alloc)
    : error_code(0)
    , error_string(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _error_code_type;
  _error_code_type error_code;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _error_string_type;
  _error_string_type error_string;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SUCCEEDED)
  #undef SUCCEEDED
#endif
#if defined(_WIN32) && defined(MOTION_NOT_FOUND)
  #undef MOTION_NOT_FOUND
#endif
#if defined(_WIN32) && defined(CONTROLLER_BUSY)
  #undef CONTROLLER_BUSY
#endif
#if defined(_WIN32) && defined(MISSING_CONTROLLER)
  #undef MISSING_CONTROLLER
#endif
#if defined(_WIN32) && defined(TRAJECTORY_ERROR)
  #undef TRAJECTORY_ERROR
#endif
#if defined(_WIN32) && defined(GOAL_NOT_REACHED)
  #undef GOAL_NOT_REACHED
#endif
#if defined(_WIN32) && defined(PLANNER_OFFLINE)
  #undef PLANNER_OFFLINE
#endif
#if defined(_WIN32) && defined(NO_PLAN_FOUND)
  #undef NO_PLAN_FOUND
#endif
#if defined(_WIN32) && defined(OTHER_ERROR)
  #undef OTHER_ERROR
#endif

  enum {
    SUCCEEDED = 1,
    MOTION_NOT_FOUND = -1,
    CONTROLLER_BUSY = -3,
    MISSING_CONTROLLER = -4,
    TRAJECTORY_ERROR = -5,
    GOAL_NOT_REACHED = -6,
    PLANNER_OFFLINE = -7,
    NO_PLAN_FOUND = -8,
    OTHER_ERROR = -42,
  };


  typedef boost::shared_ptr< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> const> ConstPtr;

}; // struct PlayMotionResult_

typedef ::play_motion_msgs::PlayMotionResult_<std::allocator<void> > PlayMotionResult;

typedef boost::shared_ptr< ::play_motion_msgs::PlayMotionResult > PlayMotionResultPtr;
typedef boost::shared_ptr< ::play_motion_msgs::PlayMotionResult const> PlayMotionResultConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::play_motion_msgs::PlayMotionResult_<ContainerAllocator1> & lhs, const ::play_motion_msgs::PlayMotionResult_<ContainerAllocator2> & rhs)
{
  return lhs.error_code == rhs.error_code &&
    lhs.error_string == rhs.error_string;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::play_motion_msgs::PlayMotionResult_<ContainerAllocator1> & lhs, const ::play_motion_msgs::PlayMotionResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace play_motion_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5560cb9a7211cb4b5a730f6f07ec124b";
  }

  static const char* value(const ::play_motion_msgs::PlayMotionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5560cb9a7211cb4bULL;
  static const uint64_t static_value2 = 0x5a730f6f07ec124bULL;
};

template<class ContainerAllocator>
struct DataType< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "play_motion_msgs/PlayMotionResult";
  }

  static const char* value(const ::play_motion_msgs::PlayMotionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"int32 error_code\n"
"int32 SUCCEEDED             = 1\n"
"int32 MOTION_NOT_FOUND      = -1\n"
"# controller error codes\n"
"int32 CONTROLLER_BUSY       = -3\n"
"int32 MISSING_CONTROLLER    = -4\n"
"int32 TRAJECTORY_ERROR      = -5\n"
"int32 GOAL_NOT_REACHED      = -6\n"
"# planner error codes\n"
"int32 PLANNER_OFFLINE       = -7\n"
"int32 NO_PLAN_FOUND         = -8\n"
"#other\n"
"int32 OTHER_ERROR           = -42\n"
"\n"
"string error_string\n"
;
  }

  static const char* value(const ::play_motion_msgs::PlayMotionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.error_code);
      stream.next(m.error_string);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlayMotionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::play_motion_msgs::PlayMotionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::play_motion_msgs::PlayMotionResult_<ContainerAllocator>& v)
  {
    s << indent << "error_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error_code);
    s << indent << "error_string: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.error_string);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLAY_MOTION_MSGS_MESSAGE_PLAYMOTIONRESULT_H
