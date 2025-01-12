#include "intelligent.h"

Intelligent::Intelligent() {
    node_handle_.getParam("/robotId", robot_.id);
    node_handle_.getParam("/robotName", robot_.name);

    publisher_chatter_ = node_handle_.advertise<msgs::RobotInfo>("/intelligent/chatter", 100);
    subscribe_chatter_ = node_handle_.subscribe("/intelligent/chatter", 1, &Intelligent::ChatterCallback, this);
}

void Intelligent::ChatterCallback(const msgs::RobotInfo &message) {
    robot_.id = message.id;
    robot_.name = message.name;
}