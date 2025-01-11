cmake_minimum_required(VERSION 3.5.0)
add_compile_options(-std=c++11)
project(msgs)

find_package(catkin REQUIRED COMPONENTS
  std_msgs
  message_generation
)

add_message_files(
  FILES
  RobotInfo.msg
)

generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(CATKIN_DEPENDS
  CATKIN_DEPENDS
  std_msgs
  message_runtime 
)