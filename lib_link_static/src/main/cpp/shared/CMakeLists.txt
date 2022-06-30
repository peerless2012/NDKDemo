cmake_minimum_required(VERSION 3.6)

project(Calculator)

file(GLOB INCLUDES include/*.h)
file(GLOB SOURCES "src/*.cpp")

include_directories(include)

add_library(Calculator SHARED ${SOURCES} ${INCLUDES})
target_link_libraries(Calculator Calculator_static)
target_include_directories(Calculator PUBLIC include)
