// Generated by gencpp from file nautilus_wall_following/error_analysis.msg
// DO NOT EDIT!


#ifndef NAUTILUS_WALL_FOLLOWING_MESSAGE_ERROR_ANALYSIS_H
#define NAUTILUS_WALL_FOLLOWING_MESSAGE_ERROR_ANALYSIS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nautilus_wall_following
{
template <class ContainerAllocator>
struct error_analysis_
{
  typedef error_analysis_<ContainerAllocator> Type;

  error_analysis_()
    : avg_error(0.0)
    , max_error(0.0)  {
    }
  error_analysis_(const ContainerAllocator& _alloc)
    : avg_error(0.0)
    , max_error(0.0)  {
  (void)_alloc;
    }



   typedef float _avg_error_type;
  _avg_error_type avg_error;

   typedef float _max_error_type;
  _max_error_type max_error;





  typedef boost::shared_ptr< ::nautilus_wall_following::error_analysis_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nautilus_wall_following::error_analysis_<ContainerAllocator> const> ConstPtr;

}; // struct error_analysis_

typedef ::nautilus_wall_following::error_analysis_<std::allocator<void> > error_analysis;

typedef boost::shared_ptr< ::nautilus_wall_following::error_analysis > error_analysisPtr;
typedef boost::shared_ptr< ::nautilus_wall_following::error_analysis const> error_analysisConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nautilus_wall_following::error_analysis_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nautilus_wall_following::error_analysis_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nautilus_wall_following

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'nautilus_wall_following': ['/home/ubuntu/nautilus-F110-2020/wall_follow_ws/src/nautilus_wall_following/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nautilus_wall_following::error_analysis_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nautilus_wall_following::error_analysis_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nautilus_wall_following::error_analysis_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nautilus_wall_following::error_analysis_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nautilus_wall_following::error_analysis_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nautilus_wall_following::error_analysis_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nautilus_wall_following::error_analysis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "02c9ccf4f42efdb87083aa4f2e65fcfe";
  }

  static const char* value(const ::nautilus_wall_following::error_analysis_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x02c9ccf4f42efdb8ULL;
  static const uint64_t static_value2 = 0x7083aa4f2e65fcfeULL;
};

template<class ContainerAllocator>
struct DataType< ::nautilus_wall_following::error_analysis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nautilus_wall_following/error_analysis";
  }

  static const char* value(const ::nautilus_wall_following::error_analysis_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nautilus_wall_following::error_analysis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
float32 avg_error\n\
float32 max_error\n\
";
  }

  static const char* value(const ::nautilus_wall_following::error_analysis_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nautilus_wall_following::error_analysis_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.avg_error);
      stream.next(m.max_error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct error_analysis_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nautilus_wall_following::error_analysis_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nautilus_wall_following::error_analysis_<ContainerAllocator>& v)
  {
    s << indent << "avg_error: ";
    Printer<float>::stream(s, indent + "  ", v.avg_error);
    s << indent << "max_error: ";
    Printer<float>::stream(s, indent + "  ", v.max_error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAUTILUS_WALL_FOLLOWING_MESSAGE_ERROR_ANALYSIS_H
