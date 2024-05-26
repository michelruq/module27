cmake_minimum_required(VERSION 3.5)

project(module27)

include_directories(./logger)

set(SRC_LIST 
          main.cpp 
          ./logger/logger.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})

set(CXX_FLAGS "${CXX_FLAGS} -std=c++17 -Wall")