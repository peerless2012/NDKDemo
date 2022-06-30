cmake_minimum_required(VERSION 3.6)

project(Hello)

include_directories(include)

file(GLOB INCLUDES include/*.h)
file(GLOB SOURCES src/*.cpp)

add_library(Hello SHARED ${SOURCES} ${INCLUDES})
target_include_directories(Hello PUBLIC include)