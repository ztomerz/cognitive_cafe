// Generated by gencpp from file pal_vision_msgs/LegDetections.msg
// DO NOT EDIT!


#ifndef PAL_VISION_MSGS_MESSAGE_LEGDETECTIONS_H
#define PAL_VISION_MSGS_MESSAGE_LEGDETECTIONS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>

namespace pal_vision_msgs
{
template <class ContainerAllocator>
struct LegDetections_
{
  typedef LegDetections_<ContainerAllocator> Type;

  LegDetections_()
    : header()
    , position3D()  {
    }
  LegDetections_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , position3D(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Point_<ContainerAllocator> >> _position3D_type;
  _position3D_type position3D;





  typedef boost::shared_ptr< ::pal_vision_msgs::LegDetections_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_vision_msgs::LegDetections_<ContainerAllocator> const> ConstPtr;

}; // struct LegDetections_

typedef ::pal_vision_msgs::LegDetections_<std::allocator<void> > LegDetections;

typedef boost::shared_ptr< ::pal_vision_msgs::LegDetections > LegDetectionsPtr;
typedef boost::shared_ptr< ::pal_vision_msgs::LegDetections const> LegDetectionsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_vision_msgs::LegDetections_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_vision_msgs::LegDetections_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_vision_msgs::LegDetections_<ContainerAllocator1> & lhs, const ::pal_vision_msgs::LegDetections_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.position3D == rhs.position3D;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_vision_msgs::LegDetections_<ContainerAllocator1> & lhs, const ::pal_vision_msgs::LegDetections_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_vision_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::LegDetections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::LegDetections_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::LegDetections_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::LegDetections_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::LegDetections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::LegDetections_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_vision_msgs::LegDetections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "817c989208cff6eff51aae475bf50d0f";
  }

  static const char* value(const ::pal_vision_msgs::LegDetections_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x817c989208cff6efULL;
  static const uint64_t static_value2 = 0xf51aae475bf50d0fULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_vision_msgs::LegDetections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_vision_msgs/LegDetections";
  }

  static const char* value(const ::pal_vision_msgs::LegDetections_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_vision_msgs::LegDetections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Contains data relative to the detection of the legs of persons in a laser scan\n"
"\n"
"Header header\n"
"\n"
"geometry_msgs/Point[]  position3D    # 3D position of the persons' legs projected on the ground plane, expressed in the robot frame /base_link\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::pal_vision_msgs::LegDetections_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_vision_msgs::LegDetections_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.position3D);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LegDetections_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_vision_msgs::LegDetections_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_vision_msgs::LegDetections_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "position3D[]" << std::endl;
    for (size_t i = 0; i < v.position3D.size(); ++i)
    {
      s << indent << "  position3D[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.position3D[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VISION_MSGS_MESSAGE_LEGDETECTIONS_H
