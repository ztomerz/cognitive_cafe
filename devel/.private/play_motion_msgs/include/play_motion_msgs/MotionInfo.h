// Generated by gencpp from file play_motion_msgs/MotionInfo.msg
// DO NOT EDIT!


#ifndef PLAY_MOTION_MSGS_MESSAGE_MOTIONINFO_H
#define PLAY_MOTION_MSGS_MESSAGE_MOTIONINFO_H


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
struct MotionInfo_
{
  typedef MotionInfo_<ContainerAllocator> Type;

  MotionInfo_()
    : name()
    , joints()
    , duration()  {
    }
  MotionInfo_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , joints(_alloc)
    , duration()  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _joints_type;
  _joints_type joints;

   typedef ros::Duration _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::play_motion_msgs::MotionInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::play_motion_msgs::MotionInfo_<ContainerAllocator> const> ConstPtr;

}; // struct MotionInfo_

typedef ::play_motion_msgs::MotionInfo_<std::allocator<void> > MotionInfo;

typedef boost::shared_ptr< ::play_motion_msgs::MotionInfo > MotionInfoPtr;
typedef boost::shared_ptr< ::play_motion_msgs::MotionInfo const> MotionInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::play_motion_msgs::MotionInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::play_motion_msgs::MotionInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::play_motion_msgs::MotionInfo_<ContainerAllocator1> & lhs, const ::play_motion_msgs::MotionInfo_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.joints == rhs.joints &&
    lhs.duration == rhs.duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::play_motion_msgs::MotionInfo_<ContainerAllocator1> & lhs, const ::play_motion_msgs::MotionInfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace play_motion_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::play_motion_msgs::MotionInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::play_motion_msgs::MotionInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::play_motion_msgs::MotionInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::play_motion_msgs::MotionInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::play_motion_msgs::MotionInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::play_motion_msgs::MotionInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::play_motion_msgs::MotionInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "12fa5a438744c4ad98a7da64c759d1bd";
  }

  static const char* value(const ::play_motion_msgs::MotionInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x12fa5a438744c4adULL;
  static const uint64_t static_value2 = 0x98a7da64c759d1bdULL;
};

template<class ContainerAllocator>
struct DataType< ::play_motion_msgs::MotionInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "play_motion_msgs/MotionInfo";
  }

  static const char* value(const ::play_motion_msgs::MotionInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::play_motion_msgs::MotionInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"string[] joints\n"
"duration duration\n"
;
  }

  static const char* value(const ::play_motion_msgs::MotionInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::play_motion_msgs::MotionInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.joints);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotionInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::play_motion_msgs::MotionInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::play_motion_msgs::MotionInfo_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "joints[]" << std::endl;
    for (size_t i = 0; i < v.joints.size(); ++i)
    {
      s << indent << "  joints[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.joints[i]);
    }
    s << indent << "duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLAY_MOTION_MSGS_MESSAGE_MOTIONINFO_H
