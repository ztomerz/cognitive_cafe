// Generated by gencpp from file humanoid_nav_msgs/PlanFootstepsRequest.msg
// DO NOT EDIT!


#ifndef HUMANOID_NAV_MSGS_MESSAGE_PLANFOOTSTEPSREQUEST_H
#define HUMANOID_NAV_MSGS_MESSAGE_PLANFOOTSTEPSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Pose2D.h>

namespace humanoid_nav_msgs
{
template <class ContainerAllocator>
struct PlanFootstepsRequest_
{
  typedef PlanFootstepsRequest_<ContainerAllocator> Type;

  PlanFootstepsRequest_()
    : start()
    , goal()  {
    }
  PlanFootstepsRequest_(const ContainerAllocator& _alloc)
    : start(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _start_type;
  _start_type start;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PlanFootstepsRequest_

typedef ::humanoid_nav_msgs::PlanFootstepsRequest_<std::allocator<void> > PlanFootstepsRequest;

typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsRequest > PlanFootstepsRequestPtr;
typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsRequest const> PlanFootstepsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator1> & lhs, const ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.start == rhs.start &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator1> & lhs, const ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace humanoid_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e8ecd9fb61e382b8974a904baeee367";
  }

  static const char* value(const ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5e8ecd9fb61e382bULL;
  static const uint64_t static_value2 = 0x8974a904baeee367ULL;
};

template<class ContainerAllocator>
struct DataType< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "humanoid_nav_msgs/PlanFootstepsRequest";
  }

  static const char* value(const ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose2D start\n"
"geometry_msgs/Pose2D goal\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose2D\n"
"# Deprecated\n"
"# Please use the full 3D pose.\n"
"\n"
"# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n"
"\n"
"# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n"
"\n"
"\n"
"# This expresses a position and orientation on a 2D manifold.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
;
  }

  static const char* value(const ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.start);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanFootstepsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator>& v)
  {
    s << indent << "start: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.start);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HUMANOID_NAV_MSGS_MESSAGE_PLANFOOTSTEPSREQUEST_H
