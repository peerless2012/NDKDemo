cmake_minimum_required(VERSION 3.6)

add_subdirectory(hello-world/hello)
add_subdirectory(hello-world/world)
add_subdirectory(hello-world)

project(LinkShared)

include_directories(include)

file(GLOB INCLUDES include/*.h)
file(GLOB SOURCES src/*.cpp)

add_library(LinkShared SHARED ${SOURCES} ${INCLUDES})
target_link_libraries(LinkShared PUBLIC HelloWorld)
target_include_directories(LinkShared PUBLIC include)