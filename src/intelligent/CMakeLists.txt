cmake_minimum_required(VERSION 3.10.0)
add_compile_options(-std=c++11)
project(intelligent)

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

add_executable(${PROJECT_NAME}_learning
  src/main.cc
  src/intelligent.cc
  src/learning/learning_talker.cc
  src/learning/learning_listener.cc
  src/learning/learning_running.cc
)

target_link_libraries(${PROJECT_NAME}_learning ${catkin_LIBRARIES})

