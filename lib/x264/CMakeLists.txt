cmake_minimum_required(VERSION 3.14)
project(x264)

find_package(PkgConfig REQUIRED)
pkg_check_modules(X264  REQUIRED IMPORTED_TARGET x264)

add_library(${PROJECT_NAME} INTERFACE IMPORTED GLOBAL)

target_include_directories(${PROJECT_NAME} INTERFACE
    ${X264_INCLUDE_DIRS}
)
target_link_options(${PROJECT_NAME} INTERFACE
    ${X264_LDFLAGS}
)
