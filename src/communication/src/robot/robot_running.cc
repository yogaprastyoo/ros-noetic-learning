#include <robot.h>

void Robot::PublishData() {
    ROS_INFO("COMM: ID: %d, Name: %s", robot_.id, robot_.name.c_str());
}