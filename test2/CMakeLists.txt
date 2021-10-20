cmake_minimum_required(VERSION 3.14)
project(test2)

list(APPEND SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

## Dependencies +++++++++++++++++++++++++++++++++++++++
target_link_libraries(${PROJECT_NAME} ffmpeg x264 x265)
## Dependencies ---------------------------------------