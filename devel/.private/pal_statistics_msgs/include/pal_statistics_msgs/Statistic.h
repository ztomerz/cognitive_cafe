// Generated by gencpp from file pal_statistics_msgs/Statistic.msg
// DO NOT EDIT!


#ifndef PAL_STATISTICS_MSGS_MESSAGE_STATISTIC_H
#define PAL_STATISTICS_MSGS_MESSAGE_STATISTIC_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_statistics_msgs
{
template <class ContainerAllocator>
struct Statistic_
{
  typedef Statistic_<ContainerAllocator> Type;

  Statistic_()
    : name()
    , value(0.0)  {
    }
  Statistic_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , value(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef double _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::pal_statistics_msgs::Statistic_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_statistics_msgs::Statistic_<ContainerAllocator> const> ConstPtr;

}; // struct Statistic_

typedef ::pal_statistics_msgs::Statistic_<std::allocator<void> > Statistic;

typedef boost::shared_ptr< ::pal_statistics_msgs::Statistic > StatisticPtr;
typedef boost::shared_ptr< ::pal_statistics_msgs::Statistic const> StatisticConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_statistics_msgs::Statistic_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_statistics_msgs::Statistic_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_statistics_msgs::Statistic_<ContainerAllocator1> & lhs, const ::pal_statistics_msgs::Statistic_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_statistics_msgs::Statistic_<ContainerAllocator1> & lhs, const ::pal_statistics_msgs::Statistic_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_statistics_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_statistics_msgs::Statistic_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_statistics_msgs::Statistic_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_statistics_msgs::Statistic_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_statistics_msgs::Statistic_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_statistics_msgs::Statistic_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_statistics_msgs::Statistic_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_statistics_msgs::Statistic_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8512f27253c0f65f928a67c329cd658";
  }

  static const char* value(const ::pal_statistics_msgs::Statistic_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8512f27253c0f65ULL;
  static const uint64_t static_value2 = 0xf928a67c329cd658ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_statistics_msgs::Statistic_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_statistics_msgs/Statistic";
  }

  static const char* value(const ::pal_statistics_msgs::Statistic_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_statistics_msgs::Statistic_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"float64 value\n"
;
  }

  static const char* value(const ::pal_statistics_msgs::Statistic_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_statistics_msgs::Statistic_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Statistic_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_statistics_msgs::Statistic_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_statistics_msgs::Statistic_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "value: ";
    Printer<double>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_STATISTICS_MSGS_MESSAGE_STATISTIC_H
