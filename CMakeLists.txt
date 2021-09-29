cmake_minimum_required(VERSION 3.20)
project(laba2class)

set(CMAKE_CXX_STANDARD 23)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)

add_executable(laba2class main.cpp test.cpp)

include(FindPkgConfig)
find_package(Epicycloid REQUIRED)
include_directories(${EPICYCLOID_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${EPICYCLOID_LIBRARY})

target_link_libraries(${PROJECT_NAME} gtest gtest_main)