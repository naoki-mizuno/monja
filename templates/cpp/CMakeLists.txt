cmake_minimum_required(VERSION 2.8.3)
project(PKG_NAME)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

find_package(catkin REQUIRED COMPONENTS
MONJA_DEPENDENCIES
)

find_package(Boost REQUIRED)

catkin_package(
  CATKIN_DEPENDS
MONJA_DEPENDENCIES
)

add_library(PKG_NAME
  src/PKG_NAME.cpp include/PKG_NAME.h
)

target_link_libraries(PKG_NAME
  ${Boost_LIBRARIES}
  ${catkin_LIBRARIES}
)

include_directories(
  include
  ${Boost_INCLUDE_DIRS}
  ${catkin_INCLUDE_DIRS}
)

add_executable(PKG_NAME_node
  src/PKG_NAME_node.cpp
)

target_link_libraries(PKG_NAME_node
  ${Boost_LIBRARIES}
  ${catkin_LIBRARIES}
)

install(TARGETS PKG_NAME_node
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
