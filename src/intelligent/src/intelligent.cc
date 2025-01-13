#include "intelligent.h"

Intelligent::Intelligent() {
    node_handle_.getParam("/robotId", robot_.id);
    node_handle_.getParam("/robotName", robot_.name);

    publisher_robot_info_ = node_handle_.advertise<msgs::RobotInfo>("/intelligent/robot_info", 100);
    subscribe_robot_info_ = node_handle_.subscribe("/intelligent/robot_info", 1, &Intelligent::RobotInfoCallback, this);
}

void Intelligent::RobotInfoCallback(const msgs::RobotInfo &message) {
    robot_.id = message.id;
    robot_.name = message.name;
}