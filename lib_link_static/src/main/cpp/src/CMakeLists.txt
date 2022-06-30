cmake_minimum_required(VERSION 3.10.2)

project(Main)

include_directories(include)

file(GLOB INCLUDES include/*.h)
file(GLOB SOURCES src/*.cpp)

add_library(Main SHARED ${SOURCES} ${INCLUDES})
target_link_libraries(Main Calculator)
target_link_directories(Main PUBLIC include)