cmake_minimum_required(VERSION 3.6)

project(HelloWorld)

include_directories(include)

file(GLOB INCLUDES include/*.h)
file(GLOB SOURCES src/*.cpp)

add_library(HelloWorld SHARED ${SOURCES} ${INCLUDES})

target_link_libraries(HelloWorld PUBLIC Hello)
target_link_libraries(HelloWorld PUBLIC World)
target_include_directories(HelloWorld PUBLIC include)