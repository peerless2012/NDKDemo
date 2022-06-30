cmake_minimum_required(VERSION 3.6)

project(Calculator_static)

include_directories(include)

file(GLOB INCLUDES "include/*.h")
file(GLOB SOURCES "src/*.cpp")

add_library(Calculator_static STATIC ${SOURCES} ${INCLUDES})
target_include_directories(Calculator_static PUBLIC include)