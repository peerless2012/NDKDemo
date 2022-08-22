cmake_minimum_required(VERSION 3.6)

project(Prefab)

file(GLOB INCLUDES include/*.h)

file(GLOB SOURCES src/*.cpp)

message("CMAKE_PREFIX_PATH = ${CMAKE_PREFIX_PATH}")
message("PrefabFuc_DIR = ${PrefabFuc_DIR}")

include_directories(include)

add_library(${PROJECT_NAME} SHARED ${INCLUDES} ${SOURCES})

find_package(lib_prefab_static REQUIRED CONFIG)

find_package(lib_prefab_shared REQUIRED CONFIG)

target_link_libraries(${PROJECT_NAME} PRIVATE log lib_prefab_static::PrefabFunc lib_prefab_shared::PrefabShared)