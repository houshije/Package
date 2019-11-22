cmake_minimum_required(VERSION 3.5.0)

include_directories(${CMAKE_SOURCE_DIR}/sdk/platform/)

add_executable(testMutex main.c
    ${CMAKE_SOURCE_DIR}/sdk/platform/src/OsStand.c
    ${CMAKE_SOURCE_DIR}/sdk/platform/src/OsMutex.c
    )

target_link_libraries(testMutex
    pthread)
