#include <robot.h>

Robot::Robot() {
    subscriber_robot_info_ = node_handle_.subscribe("/intelligent/robot_info", 1, &Robot::RobotInfoCallback, this);
}

void Robot::RobotInfoCallback(const msgs::RobotInfo &message) {
    robot_.id = message.id;
    robot_.name = message.name;
}