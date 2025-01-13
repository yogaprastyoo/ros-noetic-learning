#ifndef INTELLIGENT_H_
#define INTELLIGENT_H_

#include <ros/ros.h>
#include "std_msgs/Int8.h"
#include "std_msgs/String.h"

#include "msgs/RobotInfo.h"

#include <string>
#include <memory>

/**
 * Struct
 */
struct RobotInfo {
    int id;
    std::string name;
};

/**
 * Class Intelligent
 */
class Intelligent {
public:
    Intelligent();
    void Loop();

private:
    ros::NodeHandle node_handle_;
    ros::Publisher publisher_robot_info_;
    ros::Subscriber subscribe_robot_info_;

    // variable
    RobotInfo robot_;
    // int id_counter_;

    // talker.cc
    void Talker();

    // listener.cc
    void Listener();

    // intelligent.cc
    void RobotInfoCallback(const msgs::RobotInfo &message);

    // running.cc
    void Start();
};

#endif