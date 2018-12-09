cmake_minimum_required(VERSION 3.1.3)
project(PKG_NAME)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(catkin REQUIRED COMPONENTS
MONJA_DEPENDENCIES
)

find_package(Boost REQUIRED)

# add_message_files(
#   DIRECTORY msg
#   FILES File1.msg
# )

catkin_python_setup()

# generate_messages(
#   DEPENDENCIES
#   std_msgs
# )

catkin_package(
  CATKIN_DEPENDS
MONJA_DEPENDENCIES
)

include_directories(
  ${Boost_INCLUDE_DIRS}
  ${catkin_INCLUDE_DIRS}
)

add_executable(PKG_NAME
  src/PKG_NAME.cpp
)

target_link_libraries(PKG_NAME
  ${Boost_LIBRARIES}
  ${catkin_LIBRARIES}
)

install(TARGETS PKG_NAME
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
