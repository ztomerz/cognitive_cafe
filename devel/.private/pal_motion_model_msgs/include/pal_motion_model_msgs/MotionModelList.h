// Generated by gencpp from file pal_motion_model_msgs/MotionModelList.msg
// DO NOT EDIT!


#ifndef PAL_MOTION_MODEL_MSGS_MESSAGE_MOTIONMODELLIST_H
#define PAL_MOTION_MODEL_MSGS_MESSAGE_MOTIONMODELLIST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_motion_model_msgs/MotionModel.h>

namespace pal_motion_model_msgs
{
template <class ContainerAllocator>
struct MotionModelList_
{
  typedef MotionModelList_<ContainerAllocator> Type;

  MotionModelList_()
    : models()  {
    }
  MotionModelList_(const ContainerAllocator& _alloc)
    : models(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> >> _models_type;
  _models_type models;





  typedef boost::shared_ptr< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> const> ConstPtr;

}; // struct MotionModelList_

typedef ::pal_motion_model_msgs::MotionModelList_<std::allocator<void> > MotionModelList;

typedef boost::shared_ptr< ::pal_motion_model_msgs::MotionModelList > MotionModelListPtr;
typedef boost::shared_ptr< ::pal_motion_model_msgs::MotionModelList const> MotionModelListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator1> & lhs, const ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator2> & rhs)
{
  return lhs.models == rhs.models;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator1> & lhs, const ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_motion_model_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f24b8d6d6a0a1542de28f172c2da67ff";
  }

  static const char* value(const ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf24b8d6d6a0a1542ULL;
  static const uint64_t static_value2 = 0xde28f172c2da67ffULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_motion_model_msgs/MotionModelList";
  }

  static const char* value(const ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#list of motion models learnt in a specific place\n"
"\n"
"MotionModel[] models\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_motion_model_msgs/MotionModel\n"
"## Contains the 2D motion model of a robot at a specific location\n"
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

  static const char* value(const ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.models);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotionModelList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_motion_model_msgs::MotionModelList_<ContainerAllocator>& v)
  {
    s << indent << "models[]" << std::endl;
    for (size_t i = 0; i < v.models.size(); ++i)
    {
      s << indent << "  models[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pal_motion_model_msgs::MotionModel_<ContainerAllocator> >::stream(s, indent + "    ", v.models[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_MOTION_MODEL_MSGS_MESSAGE_MOTIONMODELLIST_H
