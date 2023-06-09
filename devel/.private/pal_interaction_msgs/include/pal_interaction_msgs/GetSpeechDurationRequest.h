// Generated by gencpp from file pal_interaction_msgs/GetSpeechDurationRequest.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_GETSPEECHDURATIONREQUEST_H
#define PAL_INTERACTION_MSGS_MESSAGE_GETSPEECHDURATIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_interaction_msgs/I18nText.h>
#include <pal_interaction_msgs/TtsText.h>

namespace pal_interaction_msgs
{
template <class ContainerAllocator>
struct GetSpeechDurationRequest_
{
  typedef GetSpeechDurationRequest_<ContainerAllocator> Type;

  GetSpeechDurationRequest_()
    : text()
    , rawtext()  {
    }
  GetSpeechDurationRequest_(const ContainerAllocator& _alloc)
    : text(_alloc)
    , rawtext(_alloc)  {
  (void)_alloc;
    }



   typedef  ::pal_interaction_msgs::I18nText_<ContainerAllocator>  _text_type;
  _text_type text;

   typedef  ::pal_interaction_msgs::TtsText_<ContainerAllocator>  _rawtext_type;
  _rawtext_type rawtext;





  typedef boost::shared_ptr< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetSpeechDurationRequest_

typedef ::pal_interaction_msgs::GetSpeechDurationRequest_<std::allocator<void> > GetSpeechDurationRequest;

typedef boost::shared_ptr< ::pal_interaction_msgs::GetSpeechDurationRequest > GetSpeechDurationRequestPtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::GetSpeechDurationRequest const> GetSpeechDurationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator2> & rhs)
{
  return lhs.text == rhs.text &&
    lhs.rawtext == rhs.rawtext;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a70a8e0c0fed08a7e75df37fef4c4d7";
  }

  static const char* value(const ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a70a8e0c0fed08aULL;
  static const uint64_t static_value2 = 0x7e75df37fef4c4d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/GetSpeechDurationRequest";
  }

  static const char* value(const ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Same logic as Tts.action goal\n"
"# If text is specified with section and key, it will be used for computing the duration\n"
"# otherwise rawtext will be used  (even if empty)\n"
"I18nText text\n"
"TtsText rawtext\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/I18nText\n"
"# section/key is used as in examples in the pal_tts_cfg pkg.\n"
"string section\n"
"string key\n"
"\n"
"# language id, must be speficied using RFC 3066\n"
"string lang_id\n"
"\n"
"# arguments contain the values by which \n"
"# occurrences of '%s' will be replaced in the \n"
"# main text.\n"
"# This only supports up to 2 arguments and no recursion.\n"
"# However, recursion and more argumnents are\n"
"# planned to be supported in the future.\n"
"I18nArgument[] arguments\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/I18nArgument\n"
"# section key, override the value in expanded.\n"
"# Use expanded for text that do not need expansion.\n"
"# Please note that expanded here will not be translated \n"
"# to any language.\n"
"\n"
"string section\n"
"string key\n"
"string expanded\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/TtsText\n"
"# this message is to specify \n"
"# raw text to the TTS server. \n"
"\n"
"string text\n"
"\n"
"# Language id in RFC 3066 format\n"
"# This field is mandatory\n"
"string lang_id\n"
;
  }

  static const char* value(const ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.text);
      stream.next(m.rawtext);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetSpeechDurationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::GetSpeechDurationRequest_<ContainerAllocator>& v)
  {
    s << indent << "text: ";
    s << std::endl;
    Printer< ::pal_interaction_msgs::I18nText_<ContainerAllocator> >::stream(s, indent + "  ", v.text);
    s << indent << "rawtext: ";
    s << std::endl;
    Printer< ::pal_interaction_msgs::TtsText_<ContainerAllocator> >::stream(s, indent + "  ", v.rawtext);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_GETSPEECHDURATIONREQUEST_H
