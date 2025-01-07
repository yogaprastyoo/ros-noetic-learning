#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char **argv) {
    // Initialize the ROS system and become a node.
    ros::init(argc, argv, "eros_robot_learnig");
    ros::NodeHandle nh;

    // Create a publisher object.
    ros::Publisher chatter_pub =
        nh.advertise<std_msgs::String>("chatter", 1000);

    // Set the loop frequency.
    ros::Rate loop_rate(10);

    // Main loop
    int count = 0;
    while (ros::ok()) {
        // Create a message object.
        std_msgs::String msg;
        std::stringstream ss;
        ss << "hello world " << count;
        msg.data = ss.str();

        // Log the message.
        ROS_INFO("%s", msg.data.c_str());

        // Publish the message.
        chatter_pub.publish(msg);

        // Handle callbacks and sleep to maintain the loop rate.
        ros::spinOnce();
        loop_rate.sleep();
        ++count;
    }

    return 0;
}
