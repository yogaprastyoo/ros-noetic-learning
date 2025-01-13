#ifndef COMMUNICATION_ROBOT_H
#define COMMUNICATION_ROBOT_h

#include <ros/ros.h>
#include <msgs/RobotInfo.h>

#include <memory>
#include <string>

/**
 * Struct
 */
struct RobotInfo {
    int id;
    std::string name;
};

class Robot {
public:
    Robot();
    void PublishData();
    // ~Robot();

private:
    ros::NodeHandle node_handle_;
    ros::Publisher publisher_communication_data_;
    ros::Subscriber subscriber_robot_info_;

    RobotInfo robot_;

    void RobotInfoCallback(const msgs::RobotInfo &message);
};

#endif