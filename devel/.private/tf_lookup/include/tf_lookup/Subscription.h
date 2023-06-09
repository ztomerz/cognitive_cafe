// Generated by gencpp from file tf_lookup/Subscription.msg
// DO NOT EDIT!


#ifndef TF_LOOKUP_MESSAGE_SUBSCRIPTION_H
#define TF_LOOKUP_MESSAGE_SUBSCRIPTION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tf_lookup
{
template <class ContainerAllocator>
struct Subscription_
{
  typedef Subscription_<ContainerAllocator> Type;

  Subscription_()
    : target()
    , source()  {
    }
  Subscription_(const ContainerAllocator& _alloc)
    : target(_alloc)
    , source(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _target_type;
  _target_type target;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _source_type;
  _source_type source;





  typedef boost::shared_ptr< ::tf_lookup::Subscription_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf_lookup::Subscription_<ContainerAllocator> const> ConstPtr;

}; // struct Subscription_

typedef ::tf_lookup::Subscription_<std::allocator<void> > Subscription;

typedef boost::shared_ptr< ::tf_lookup::Subscription > SubscriptionPtr;
typedef boost::shared_ptr< ::tf_lookup::Subscription const> SubscriptionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tf_lookup::Subscription_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tf_lookup::Subscription_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tf_lookup::Subscription_<ContainerAllocator1> & lhs, const ::tf_lookup::Subscription_<ContainerAllocator2> & rhs)
{
  return lhs.target == rhs.target &&
    lhs.source == rhs.source;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tf_lookup::Subscription_<ContainerAllocator1> & lhs, const ::tf_lookup::Subscription_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tf_lookup

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tf_lookup::Subscription_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf_lookup::Subscription_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf_lookup::Subscription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf_lookup::Subscription_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf_lookup::Subscription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf_lookup::Subscription_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tf_lookup::Subscription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2f26b645cf5988fb447dd948d42f673d";
  }

  static const char* value(const ::tf_lookup::Subscription_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2f26b645cf5988fbULL;
  static const uint64_t static_value2 = 0x447dd948d42f673dULL;
};

template<class ContainerAllocator>
struct DataType< ::tf_lookup::Subscription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tf_lookup/Subscription";
  }

  static const char* value(const ::tf_lookup::Subscription_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tf_lookup::Subscription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string target\n"
"string source\n"
;
  }

  static const char* value(const ::tf_lookup::Subscription_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tf_lookup::Subscription_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target);
      stream.next(m.source);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Subscription_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf_lookup::Subscription_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tf_lookup::Subscription_<ContainerAllocator>& v)
  {
    s << indent << "target: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.target);
    s << indent << "source: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.source);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TF_LOOKUP_MESSAGE_SUBSCRIPTION_H
