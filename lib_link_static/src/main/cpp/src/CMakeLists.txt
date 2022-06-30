cmake_minimum_required(VERSION 3.10.2)

project(LinkStatic)

include_directories(include)

file(GLOB INCLUDES include/*.h)
file(GLOB SOURCES src/*.cpp)

add_library(LinkStatic SHARED ${SOURCES} ${INCLUDES})
target_link_libraries(LinkStatic Calculator)
target_link_directories(LinkStatic PUBLIC include)