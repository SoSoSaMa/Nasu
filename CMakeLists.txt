cmake_minimum_required(VERSION 3.14)

PROJECT(Nasu)

SET(SRC_LIST lockfree/main.cpp)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall")

#set(CMAKE_BUILD_TYPE "Release")

#include_directories(lockfree)

INCLUDE_DIRECTORIES(lockfree)

ADD_EXECUTABLE(Nasu ${SRC_LIST} "lockfree/БъЭЗ1.hpp")
