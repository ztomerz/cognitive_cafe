// Generated by gencpp from file pal_device_msgs/LedFadeParams.msg
// DO NOT EDIT!


#ifndef PAL_DEVICE_MSGS_MESSAGE_LEDFADEPARAMS_H
#define PAL_DEVICE_MSGS_MESSAGE_LEDFADEPARAMS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>

namespace pal_device_msgs
{
template <class ContainerAllocator>
struct LedFadeParams_
{
  typedef LedFadeParams_<ContainerAllocator> Type;

  LedFadeParams_()
    : first_color()
    , second_color()
    , transition_duration()
    , reverse_fade(false)  {
    }
  LedFadeParams_(const ContainerAllocator& _alloc)
    : first_color(_alloc)
    , second_color(_alloc)
    , transition_duration()
    , reverse_fade(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _first_color_type;
  _first_color_type first_color;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _second_color_type;
  _second_color_type second_color;

   typedef ros::Duration _transition_duration_type;
  _transition_duration_type transition_duration;

   typedef uint8_t _reverse_fade_type;
  _reverse_fade_type reverse_fade;





  typedef boost::shared_ptr< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> const> ConstPtr;

}; // struct LedFadeParams_

typedef ::pal_device_msgs::LedFadeParams_<std::allocator<void> > LedFadeParams;

typedef boost::shared_ptr< ::pal_device_msgs::LedFadeParams > LedFadeParamsPtr;
typedef boost::shared_ptr< ::pal_device_msgs::LedFadeParams const> LedFadeParamsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_device_msgs::LedFadeParams_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_device_msgs::LedFadeParams_<ContainerAllocator1> & lhs, const ::pal_device_msgs::LedFadeParams_<ContainerAllocator2> & rhs)
{
  return lhs.first_color == rhs.first_color &&
    lhs.second_color == rhs.second_color &&
    lhs.transition_duration == rhs.transition_duration &&
    lhs.reverse_fade == rhs.reverse_fade;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_device_msgs::LedFadeParams_<ContainerAllocator1> & lhs, const ::pal_device_msgs::LedFadeParams_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_device_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "21c3c0f93882d55f24f14be673a6ceb6";
  }

  static const char* value(const ::pal_device_msgs::LedFadeParams_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x21c3c0f93882d55fULL;
  static const uint64_t static_value2 = 0x24f14be673a6ceb6ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_device_msgs/LedFadeParams";
  }

  static const char* value(const ::pal_device_msgs::LedFadeParams_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# RGBA of color, alpha will be used as intensity if supported by the led\n"
"std_msgs/ColorRGBA first_color\n"
"std_msgs/ColorRGBA second_color\n"
"\n"
"#Duration of the transition from one color to the other\n"
"duration transition_duration\n"
"\n"
"#Perform a fade when going from secondColor to firstColor\n"
"bool reverse_fade\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
;
  }

  static const char* value(const ::pal_device_msgs::LedFadeParams_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.first_color);
      stream.next(m.second_color);
      stream.next(m.transition_duration);
      stream.next(m.reverse_fade);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LedFadeParams_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_device_msgs::LedFadeParams_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_device_msgs::LedFadeParams_<ContainerAllocator>& v)
  {
    s << indent << "first_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.first_color);
    s << indent << "second_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.second_color);
    s << indent << "transition_duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.transition_duration);
    s << indent << "reverse_fade: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reverse_fade);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DEVICE_MSGS_MESSAGE_LEDFADEPARAMS_H
