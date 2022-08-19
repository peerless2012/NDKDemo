cmake_minimum_required(VERSION 3.6)

project(UsePrefab)

file(GLOB INCLUDES include/*.h)

file(GLOB SOURCES src/*.cpp)

include_directories(include)

add_library(${PROJECT_NAME} SHARED ${INCLUDES} ${SOURCES})