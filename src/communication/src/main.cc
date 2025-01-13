#include <robot.h>

int main(int argc, char** argv) {
    ros::init(argc, argv, "Robot");

    std::unique_ptr<Robot> robot(new Robot());
    ros::Rate rate(1);

    while (ros::ok()) {
        ros::spinOnce();
        robot->PublishData();
        rate.sleep();
    }

    return 0;
}
