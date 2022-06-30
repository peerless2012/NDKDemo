cmake_minimum_required(VERSION 3.6)

project(World)

include_directories(include)

file(GLOB INCLUDES include/*.h)
file(GLOB SOURCES src/*.cpp)

add_library(World SHARED ${SOURCES} ${INCLUDES})
target_include_directories(World PUBLIC include)