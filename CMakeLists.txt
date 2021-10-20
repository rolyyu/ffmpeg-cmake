cmake_minimum_required(VERSION 3.14)
project(eagle C CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


## Major modules +++++++++++++++++++++++++++++++++++++++
add_subdirectory(lib/ffmpeg)
add_subdirectory(lib/x264)
add_subdirectory(lib/x265)
## Major modules ---------------------------------------


## Executable +++++++++++++++++++++++++++++++++++++++

add_subdirectory(test)
add_subdirectory(test2)

## Executable ---------------------------------------