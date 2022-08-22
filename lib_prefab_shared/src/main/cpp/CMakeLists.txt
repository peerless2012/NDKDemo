cmake_minimum_required(VERSION 3.6)

project(PrefabShared)

file(GLOB INCLUDES include/*.h)

file(GLOB SOURCES src/*.cpp)

include_directories(include)

add_library(${PROJECT_NAME} SHARED ${INCLUDES} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE log)

#find_package(PrefabFuc REQUIRED CONFIG)
#
#target_link_libraries(${PROJECT_NAME} PRIVATE log PrefabFuc::PrefabFuc)
