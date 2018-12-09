cmake_minimum_required(VERSION 2.8.3)
project(PKG_NAME)

find_package(catkin REQUIRED)

# add_message_files(
#   DIRECTORY msg
#   FILES File1.msg
# )

catkin_python_setup()

# generate_messages(
#   DEPENDENCIES
#   std_msgs
# )

catkin_package()

# catkin_install_python(PROGRAMS
#   nodes/PKG_NAME_node.py
#   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )
