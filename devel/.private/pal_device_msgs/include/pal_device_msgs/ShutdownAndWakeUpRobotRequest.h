// Generated by gencpp from file pal_device_msgs/ShutdownAndWakeUpRobotRequest.msg
// DO NOT EDIT!


#ifndef PAL_DEVICE_MSGS_MESSAGE_SHUTDOWNANDWAKEUPROBOTREQUEST_H
#define PAL_DEVICE_MSGS_MESSAGE_SHUTDOWNANDWAKEUPROBOTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_device_msgs
{
template <class ContainerAllocator>
struct ShutdownAndWakeUpRobotRequest_
{
  typedef ShutdownAndWakeUpRobotRequest_<ContainerAllocator> Type;

  ShutdownAndWakeUpRobotRequest_()
    : shutdown_duration()  {
    }
  ShutdownAndWakeUpRobotRequest_(const ContainerAllocator& _alloc)
    : shutdown_duration()  {
  (void)_alloc;
    }



   typedef ros::Duration _shutdown_duration_type;
  _shutdown_duration_type shutdown_duration;





  typedef boost::shared_ptr< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ShutdownAndWakeUpRobotRequest_

typedef ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<std::allocator<void> > ShutdownAndWakeUpRobotRequest;

typedef boost::shared_ptr< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest > ShutdownAndWakeUpRobotRequestPtr;
typedef boost::shared_ptr< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest const> ShutdownAndWakeUpRobotRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator1> & lhs, const ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator2> & rhs)
{
  return lhs.shutdown_duration == rhs.shutdown_duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator1> & lhs, const ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_device_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1f8f568ec4dc499fbd0dce4b139875f5";
  }

  static const char* value(const ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1f8f568ec4dc499fULL;
  static const uint64_t static_value2 = 0xbd0dce4b139875f5ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_device_msgs/ShutdownAndWakeUpRobotRequest";
  }

  static const char* value(const ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duration shutdown_duration\n"
"\n"
;
  }

  static const char* value(const ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.shutdown_duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ShutdownAndWakeUpRobotRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_device_msgs::ShutdownAndWakeUpRobotRequest_<ContainerAllocator>& v)
  {
    s << indent << "shutdown_duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.shutdown_duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DEVICE_MSGS_MESSAGE_SHUTDOWNANDWAKEUPROBOTREQUEST_H
