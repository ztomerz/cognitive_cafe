// Generated by gencpp from file pal_device_msgs/TimedBlinkEffectRequest.msg
// DO NOT EDIT!


#ifndef PAL_DEVICE_MSGS_MESSAGE_TIMEDBLINKEFFECTREQUEST_H
#define PAL_DEVICE_MSGS_MESSAGE_TIMEDBLINKEFFECTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_device_msgs/LedGroup.h>
#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>

namespace pal_device_msgs
{
template <class ContainerAllocator>
struct TimedBlinkEffectRequest_
{
  typedef TimedBlinkEffectRequest_<ContainerAllocator> Type;

  TimedBlinkEffectRequest_()
    : leds()
    , firstColor()
    , secondColor()
    , firstColorDuration()
    , secondColorDuration()
    , effectDuration()
    , priority(0)  {
    }
  TimedBlinkEffectRequest_(const ContainerAllocator& _alloc)
    : leds(_alloc)
    , firstColor(_alloc)
    , secondColor(_alloc)
    , firstColorDuration()
    , secondColorDuration()
    , effectDuration()
    , priority(0)  {
  (void)_alloc;
    }



   typedef  ::pal_device_msgs::LedGroup_<ContainerAllocator>  _leds_type;
  _leds_type leds;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _firstColor_type;
  _firstColor_type firstColor;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _secondColor_type;
  _secondColor_type secondColor;

   typedef ros::Duration _firstColorDuration_type;
  _firstColorDuration_type firstColorDuration;

   typedef ros::Duration _secondColorDuration_type;
  _secondColorDuration_type secondColorDuration;

   typedef ros::Duration _effectDuration_type;
  _effectDuration_type effectDuration;

   typedef uint8_t _priority_type;
  _priority_type priority;





  typedef boost::shared_ptr< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TimedBlinkEffectRequest_

typedef ::pal_device_msgs::TimedBlinkEffectRequest_<std::allocator<void> > TimedBlinkEffectRequest;

typedef boost::shared_ptr< ::pal_device_msgs::TimedBlinkEffectRequest > TimedBlinkEffectRequestPtr;
typedef boost::shared_ptr< ::pal_device_msgs::TimedBlinkEffectRequest const> TimedBlinkEffectRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator1> & lhs, const ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator2> & rhs)
{
  return lhs.leds == rhs.leds &&
    lhs.firstColor == rhs.firstColor &&
    lhs.secondColor == rhs.secondColor &&
    lhs.firstColorDuration == rhs.firstColorDuration &&
    lhs.secondColorDuration == rhs.secondColorDuration &&
    lhs.effectDuration == rhs.effectDuration &&
    lhs.priority == rhs.priority;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator1> & lhs, const ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_device_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c7345ff92e3c60b0471328ccec5e5dc8";
  }

  static const char* value(const ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc7345ff92e3c60b0ULL;
  static const uint64_t static_value2 = 0x471328ccec5e5dc8ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_device_msgs/TimedBlinkEffectRequest";
  }

  static const char* value(const ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Sets led blink effect. Displays firstColor during firstColorDuration time, and then secondColor during secondColorDuration time\n"
"\n"
"LedGroup leds\n"
"\n"
"# RGBA of color, transparency is not available in leds, so alpha will be ignored\n"
"std_msgs/ColorRGBA firstColor\n"
"std_msgs/ColorRGBA secondColor\n"
"\n"
"duration firstColorDuration\n"
"duration secondColorDuration\n"
"\n"
"\n"
"#Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever\n"
"duration effectDuration\n"
"\n"
"#priority of the effect, 0 is no priority, 255 is max priority\n"
"uint8 priority\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_device_msgs/LedGroup\n"
"byte LEFT_EAR = 1\n"
"byte RIGHT_EAR = 2\n"
"\n"
"#OR-mask of the selected leds\n"
"uint32 ledMask\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
;
  }

  static const char* value(const ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.leds);
      stream.next(m.firstColor);
      stream.next(m.secondColor);
      stream.next(m.firstColorDuration);
      stream.next(m.secondColorDuration);
      stream.next(m.effectDuration);
      stream.next(m.priority);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TimedBlinkEffectRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_device_msgs::TimedBlinkEffectRequest_<ContainerAllocator>& v)
  {
    s << indent << "leds: ";
    s << std::endl;
    Printer< ::pal_device_msgs::LedGroup_<ContainerAllocator> >::stream(s, indent + "  ", v.leds);
    s << indent << "firstColor: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.firstColor);
    s << indent << "secondColor: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.secondColor);
    s << indent << "firstColorDuration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.firstColorDuration);
    s << indent << "secondColorDuration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.secondColorDuration);
    s << indent << "effectDuration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.effectDuration);
    s << indent << "priority: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.priority);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DEVICE_MSGS_MESSAGE_TIMEDBLINKEFFECTREQUEST_H
