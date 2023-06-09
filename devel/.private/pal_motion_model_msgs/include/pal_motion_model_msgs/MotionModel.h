// Generated by gencpp from file pal_motion_model_msgs/MotionModel.msg
// DO NOT EDIT!


#ifndef PAL_MOTION_MODEL_MSGS_MESSAGE_MOTIONMODEL_H
#define PAL_MOTION_MODEL_MSGS_MESSAGE_MOTIONMODEL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_motion_model_msgs
{
template <class ContainerAllocator>
struct MotionModel_
{
  typedef MotionModel_<ContainerAllocator> Type;

  MotionModel_()
    : heading_mean(0.0)
    , heading_std_dev(0.0)
    , linear_speed_mean(0.0)
    , linear_speed_std_dev(0.0)
    , angular_speed_mean(0.0)
    , angular_speed_std_dev(0.0)  {
    }
  MotionModel_(const ContainerAllocator& _alloc)
    : heading_mean(0.0)
    , heading_std_dev(0.0)
    , linear_speed_mean(0.0)
    , linear_speed_std_dev(0.0)
    , angular_speed_mean(0.0)
    , angular_speed_std_dev(0.0)  {
  (void)_alloc;
    }



   typedef float _heading_mean_type;
  _heading_mean_type heading_mean;

   typedef float _heading_std_dev_type;
  _heading_std_dev_type heading_std_dev;

   typedef float _linear_speed_mean_type;
  _linear_speed_mean_type linear_speed_mean;

   typedef float _linear_speed_std_dev_type;
  _linear_speed_std_dev_type linear_speed_std_dev;

   typedef float _angular_speed_mean_type;
  _angular_speed_mean_type angular_speed_mean;

   typedef float _angular_speed_std_dev_type;
  _angular_speed_std_dev_type angular_speed_std_dev;





  typedef boost::shared_ptr< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> const> ConstPtr;

}; // struct MotionModel_

typedef ::pal_motion_model_msgs::MotionModel_<std::allocator<void> > MotionModel;

typedef boost::shared_ptr< ::pal_motion_model_msgs::MotionModel > MotionModelPtr;
typedef boost::shared_ptr< ::pal_motion_model_msgs::MotionModel const> MotionModelConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_motion_model_msgs::MotionModel_<ContainerAllocator1> & lhs, const ::pal_motion_model_msgs::MotionModel_<ContainerAllocator2> & rhs)
{
  return lhs.heading_mean == rhs.heading_mean &&
    lhs.heading_std_dev == rhs.heading_std_dev &&
    lhs.linear_speed_mean == rhs.linear_speed_mean &&
    lhs.linear_speed_std_dev == rhs.linear_speed_std_dev &&
    lhs.angular_speed_mean == rhs.angular_speed_mean &&
    lhs.angular_speed_std_dev == rhs.angular_speed_std_dev;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_motion_model_msgs::MotionModel_<ContainerAllocator1> & lhs, const ::pal_motion_model_msgs::MotionModel_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_motion_model_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fe7c341575e9287349aa5851bafdbb40";
  }

  static const char* value(const ::pal_motion_model_msgs::MotionModel_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfe7c341575e92873ULL;
  static const uint64_t static_value2 = 0x49aa5851bafdbb40ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_motion_model_msgs/MotionModel";
  }

  static const char* value(const ::pal_motion_model_msgs::MotionModel_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Contains the 2D motion model of a robot at a specific location\n"
"\n"
"#Heading direction is represented through a gaussian pdf.\n"
"float32  heading_mean\n"
"float32  heading_std_dev\n"
"\n"
"#For statistics we store a pdf over the robot speeds\n"
"float32  linear_speed_mean\n"
"float32  linear_speed_std_dev\n"
"float32  angular_speed_mean\n"
"float32  angular_speed_std_dev\n"
"\n"
;
  }

  static const char* value(const ::pal_motion_model_msgs::MotionModel_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.heading_mean);
      stream.next(m.heading_std_dev);
      stream.next(m.linear_speed_mean);
      stream.next(m.linear_speed_std_dev);
      stream.next(m.angular_speed_mean);
      stream.next(m.angular_speed_std_dev);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotionModel_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_motion_model_msgs::MotionModel_<ContainerAllocator>& v)
  {
    s << indent << "heading_mean: ";
    Printer<float>::stream(s, indent + "  ", v.heading_mean);
    s << indent << "heading_std_dev: ";
    Printer<float>::stream(s, indent + "  ", v.heading_std_dev);
    s << indent << "linear_speed_mean: ";
    Printer<float>::stream(s, indent + "  ", v.linear_speed_mean);
    s << indent << "linear_speed_std_dev: ";
    Printer<float>::stream(s, indent + "  ", v.linear_speed_std_dev);
    s << indent << "angular_speed_mean: ";
    Printer<float>::stream(s, indent + "  ", v.angular_speed_mean);
    s << indent << "angular_speed_std_dev: ";
    Printer<float>::stream(s, indent + "  ", v.angular_speed_std_dev);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_MOTION_MODEL_MSGS_MESSAGE_MOTIONMODEL_H
