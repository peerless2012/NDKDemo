cmake_minimum_required(VERSION 3.13)

project(Beneficiary)

# https://stackoverflow.com/questions/46055431/cmake-on-android-find-library-fail-to-find-with-custom-path
# https://stackoverflow.com/a/46057018/3769941
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY BOTH)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE BOTH)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE BOTH)

set(PROVIDER_ROOT_DIR ${CMAKE_SOURCE_DIR}/../../../../lib_module_provider)
set(PROVIDER_SOURCE_DIR ${PROVIDER_ROOT_DIR}/src/main/cpp)
set(PROVIDER_BINARY_DIR ${PROVIDER_ROOT_DIR}/.cxx/${CMAKE_BUILD_TYPE})
set(PROVIDER_RUNTIME_DIR ${PROVIDER_ROOT_DIR}/build/intermediates/cmake/cmake${CMAKE_BUILD_TYPE}/obj/${ANDROID_ABI})

# https://stackoverflow.com/questions/12075371/cmake-find-library-custom-library-location
list(APPEND CMAKE_PREFIX_PATH ${PROVIDER_RUNTIME_DIR})
message("CMAKE_PREFIX_PATH = ${CMAKE_PREFIX_PATH}")

# include provider header
include_directories(${PROVIDER_SOURCE_DIR}/include)
# find provider library
#find_library(provider-lib Provider)
#message("provider-lib = ${provider-lib}")

file(GLOB INCLUDES include/*.h)

file(GLOB SOURCES src/*.cpp ${PROVIDER_RUNTIME_DIR}/*.so)

message("${PROJECT_NAME} src = ${SOURCES}")

include_directories(include)

add_library(${PROJECT_NAME} SHARED ${INCLUDES} ${SOURCES})
target_link_directories(${PROJECT_NAME} PRIVATE ${PROVIDER_RUNTIME_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE Provider)