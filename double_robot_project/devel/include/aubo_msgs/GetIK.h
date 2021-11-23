// Generated by gencpp from file aubo_msgs/GetIK.msg
// DO NOT EDIT!


#ifndef AUBO_MSGS_MESSAGE_GETIK_H
#define AUBO_MSGS_MESSAGE_GETIK_H

#include <ros/service_traits.h>


#include <aubo_msgs/GetIKRequest.h>
#include <aubo_msgs/GetIKResponse.h>


namespace aubo_msgs
{

struct GetIK
{

typedef GetIKRequest Request;
typedef GetIKResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetIK
} // namespace aubo_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::aubo_msgs::GetIK > {
  static const char* value()
  {
    return "bc7f0118878bed264062021158285cff";
  }

  static const char* value(const ::aubo_msgs::GetIK&) { return value(); }
};

template<>
struct DataType< ::aubo_msgs::GetIK > {
  static const char* value()
  {
    return "aubo_msgs/GetIK";
  }

  static const char* value(const ::aubo_msgs::GetIK&) { return value(); }
};


// service_traits::MD5Sum< ::aubo_msgs::GetIKRequest> should match
// service_traits::MD5Sum< ::aubo_msgs::GetIK >
template<>
struct MD5Sum< ::aubo_msgs::GetIKRequest>
{
  static const char* value()
  {
    return MD5Sum< ::aubo_msgs::GetIK >::value();
  }
  static const char* value(const ::aubo_msgs::GetIKRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::aubo_msgs::GetIKRequest> should match
// service_traits::DataType< ::aubo_msgs::GetIK >
template<>
struct DataType< ::aubo_msgs::GetIKRequest>
{
  static const char* value()
  {
    return DataType< ::aubo_msgs::GetIK >::value();
  }
  static const char* value(const ::aubo_msgs::GetIKRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::aubo_msgs::GetIKResponse> should match
// service_traits::MD5Sum< ::aubo_msgs::GetIK >
template<>
struct MD5Sum< ::aubo_msgs::GetIKResponse>
{
  static const char* value()
  {
    return MD5Sum< ::aubo_msgs::GetIK >::value();
  }
  static const char* value(const ::aubo_msgs::GetIKResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::aubo_msgs::GetIKResponse> should match
// service_traits::DataType< ::aubo_msgs::GetIK >
template<>
struct DataType< ::aubo_msgs::GetIKResponse>
{
  static const char* value()
  {
    return DataType< ::aubo_msgs::GetIK >::value();
  }
  static const char* value(const ::aubo_msgs::GetIKResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // AUBO_MSGS_MESSAGE_GETIK_H
