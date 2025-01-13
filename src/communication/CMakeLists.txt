cmake_minimum_required(VERSION 3.10.0)
add_compile_options(-std=c++11)
project(communication)

find_package(catkin REQUIRED COMPONENTS
  msgs
  roscpp 
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES ${PROJECT_NAME}
)

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(${PROJECT_NAME}_robot
  src/main.cc
  src/robot/robot.cc
  src/robot/robot_running.cc
)

target_link_libraries(${PROJECT_NAME}_robot ${catkin_LIBRARIES})

