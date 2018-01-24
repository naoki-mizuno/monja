#include <ros/ros.h>

int
main(int argc, char* argv[]) {
    ros::init(argc, argv, "PKG_NAME_node");

    ros::spin();

    return 0;
}
