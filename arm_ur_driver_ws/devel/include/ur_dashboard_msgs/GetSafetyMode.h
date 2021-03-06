// Generated by gencpp from file ur_dashboard_msgs/GetSafetyMode.msg
// DO NOT EDIT!


#ifndef UR_DASHBOARD_MSGS_MESSAGE_GETSAFETYMODE_H
#define UR_DASHBOARD_MSGS_MESSAGE_GETSAFETYMODE_H

#include <ros/service_traits.h>


#include <ur_dashboard_msgs/GetSafetyModeRequest.h>
#include <ur_dashboard_msgs/GetSafetyModeResponse.h>


namespace ur_dashboard_msgs
{

struct GetSafetyMode
{

typedef GetSafetyModeRequest Request;
typedef GetSafetyModeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetSafetyMode
} // namespace ur_dashboard_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ur_dashboard_msgs::GetSafetyMode > {
  static const char* value()
  {
    return "42900ff79a0c74f885536dc5add71b7e";
  }

  static const char* value(const ::ur_dashboard_msgs::GetSafetyMode&) { return value(); }
};

template<>
struct DataType< ::ur_dashboard_msgs::GetSafetyMode > {
  static const char* value()
  {
    return "ur_dashboard_msgs/GetSafetyMode";
  }

  static const char* value(const ::ur_dashboard_msgs::GetSafetyMode&) { return value(); }
};


// service_traits::MD5Sum< ::ur_dashboard_msgs::GetSafetyModeRequest> should match
// service_traits::MD5Sum< ::ur_dashboard_msgs::GetSafetyMode >
template<>
struct MD5Sum< ::ur_dashboard_msgs::GetSafetyModeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ur_dashboard_msgs::GetSafetyMode >::value();
  }
  static const char* value(const ::ur_dashboard_msgs::GetSafetyModeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur_dashboard_msgs::GetSafetyModeRequest> should match
// service_traits::DataType< ::ur_dashboard_msgs::GetSafetyMode >
template<>
struct DataType< ::ur_dashboard_msgs::GetSafetyModeRequest>
{
  static const char* value()
  {
    return DataType< ::ur_dashboard_msgs::GetSafetyMode >::value();
  }
  static const char* value(const ::ur_dashboard_msgs::GetSafetyModeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ur_dashboard_msgs::GetSafetyModeResponse> should match
// service_traits::MD5Sum< ::ur_dashboard_msgs::GetSafetyMode >
template<>
struct MD5Sum< ::ur_dashboard_msgs::GetSafetyModeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ur_dashboard_msgs::GetSafetyMode >::value();
  }
  static const char* value(const ::ur_dashboard_msgs::GetSafetyModeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur_dashboard_msgs::GetSafetyModeResponse> should match
// service_traits::DataType< ::ur_dashboard_msgs::GetSafetyMode >
template<>
struct DataType< ::ur_dashboard_msgs::GetSafetyModeResponse>
{
  static const char* value()
  {
    return DataType< ::ur_dashboard_msgs::GetSafetyMode >::value();
  }
  static const char* value(const ::ur_dashboard_msgs::GetSafetyModeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UR_DASHBOARD_MSGS_MESSAGE_GETSAFETYMODE_H
