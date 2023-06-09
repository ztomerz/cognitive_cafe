// Generated by gencpp from file pal_interaction_msgs/ASRSrvRequest.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_ASRSRVREQUEST_H
#define PAL_INTERACTION_MSGS_MESSAGE_ASRSRVREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_interaction_msgs/ASRActivation.h>
#include <pal_interaction_msgs/ASRLangModelMngmt.h>
#include <pal_interaction_msgs/ASRLanguage.h>

namespace pal_interaction_msgs
{
template <class ContainerAllocator>
struct ASRSrvRequest_
{
  typedef ASRSrvRequest_<ContainerAllocator> Type;

  ASRSrvRequest_()
    : requests()
    , activation()
    , model()
    , lang()  {
    }
  ASRSrvRequest_(const ContainerAllocator& _alloc)
    : requests(_alloc)
    , activation(_alloc)
    , model(_alloc)
    , lang(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> _requests_type;
  _requests_type requests;

   typedef  ::pal_interaction_msgs::ASRActivation_<ContainerAllocator>  _activation_type;
  _activation_type activation;

   typedef  ::pal_interaction_msgs::ASRLangModelMngmt_<ContainerAllocator>  _model_type;
  _model_type model;

   typedef  ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator>  _lang_type;
  _lang_type lang;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(ACTIVATION)
  #undef ACTIVATION
#endif
#if defined(_WIN32) && defined(GRAMMAR)
  #undef GRAMMAR
#endif
#if defined(_WIN32) && defined(LANGUAGE)
  #undef LANGUAGE
#endif
#if defined(_WIN32) && defined(STATUS)
  #undef STATUS
#endif
#if defined(_WIN32) && defined(KWSPOTTING)
  #undef KWSPOTTING
#endif

  enum {
    ACTIVATION = 1,
    GRAMMAR = 2,
    LANGUAGE = 3,
    STATUS = 4,
    KWSPOTTING = 5,
  };


  typedef boost::shared_ptr< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ASRSrvRequest_

typedef ::pal_interaction_msgs::ASRSrvRequest_<std::allocator<void> > ASRSrvRequest;

typedef boost::shared_ptr< ::pal_interaction_msgs::ASRSrvRequest > ASRSrvRequestPtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::ASRSrvRequest const> ASRSrvRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.requests == rhs.requests &&
    lhs.activation == rhs.activation &&
    lhs.model == rhs.model &&
    lhs.lang == rhs.lang;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18340721947db95a89c5d69f8dcbb2cc";
  }

  static const char* value(const ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18340721947db95aULL;
  static const uint64_t static_value2 = 0x89c5d69f8dcbb2ccULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/ASRSrvRequest";
  }

  static const char* value(const ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Request messages for the recognizer service.\n"
"# It is possible to request and activate task, \n"
"# a grammar management task and language change or just\n"
"# request the current status.\n"
"\n"
"# Type of request list\n"
"int8 ACTIVATION = 1\n"
"int8 GRAMMAR = 2\n"
"int8 LANGUAGE = 3\n"
"int8 STATUS = 4\n"
"int8 KWSPOTTING = 5\n"
"\n"
"# Message variables\n"
"# list of requests types (several requests can be send in one single message)\n"
"int8[] requests\n"
"\n"
"# Information related to each possible request\n"
"# except for status that does not need any additional info.\n"
"ASRActivation activation\n"
"ASRLangModelMngmt model\n"
"ASRLanguage lang\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/ASRActivation\n"
"# Message that can be used to send activation commands to the speech recognizer.\n"
"# It is possible to activate/deactivate or pause/resume the recognizer with these commands.\n"
"# action list\n"
"int8 ACTIVATE = 1\n"
"int8 DEACTIVATE = 2\n"
"int8 PAUSE = 3\n"
"int8 RESUME = 4\n"
"int8 CALIBRATE = 5\n"
"\n"
"# Message variables\n"
"int8 action\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/ASRLangModelMngmt\n"
"# This message is to be used in the ASR service to manage the grammars\n"
"# makes possible to enable/disable, load/unload grammars.\n"
"\n"
"\n"
"# Types of action\n"
"int8 ENABLE = 1\n"
"int8 DISABLE = 2\n"
"int8 LOAD = 3\n"
"int8 UNLOAD = 4\n"
"\n"
"# Message variables\n"
"# Type of action requested\n"
"int8 action\n"
"\n"
"# Name of the grammar to actuate on.\n"
"string modelName\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/ASRLanguage\n"
"# This message is to indicate the language\n"
"# that has to be set in the speech recognizer\n"
"string language\n"
;
  }

  static const char* value(const ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.requests);
      stream.next(m.activation);
      stream.next(m.model);
      stream.next(m.lang);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ASRSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::ASRSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "requests[]" << std::endl;
    for (size_t i = 0; i < v.requests.size(); ++i)
    {
      s << indent << "  requests[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.requests[i]);
    }
    s << indent << "activation: ";
    s << std::endl;
    Printer< ::pal_interaction_msgs::ASRActivation_<ContainerAllocator> >::stream(s, indent + "  ", v.activation);
    s << indent << "model: ";
    s << std::endl;
    Printer< ::pal_interaction_msgs::ASRLangModelMngmt_<ContainerAllocator> >::stream(s, indent + "  ", v.model);
    s << indent << "lang: ";
    s << std::endl;
    Printer< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> >::stream(s, indent + "  ", v.lang);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_ASRSRVREQUEST_H
