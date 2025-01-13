#include "intelligent.h"

void Intelligent::Talker() {
    msgs::RobotInfo message;

    message.id = robot_.id;
    message.name = robot_.name;

    publisher_robot_info_.publish(message);
}