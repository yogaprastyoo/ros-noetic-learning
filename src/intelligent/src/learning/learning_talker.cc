#include "intelligent.h"

void Intelligent::Talker() {
    msgs::RobotInfo robot;
    robot.id = id_counter_++;
    robot.name = "robot-" + std::to_string(id_counter_);

    publisher_chatter_.publish(robot);
}