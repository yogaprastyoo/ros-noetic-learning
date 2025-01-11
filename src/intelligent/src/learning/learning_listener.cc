#include "intelligent.h"

void Intelligent::Listener() {
    ROS_INFO("LISTENER: ID: %d, Name: %s", robot_.id, robot_.name.c_str());
}