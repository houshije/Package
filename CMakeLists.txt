cmake_minimum_required(VERSION 3.5.0)
project(Package C)

include_directories(${CMAKE_SOURCE_DIR}/sdk/include)

add_subdirectory(test/testMutex)
