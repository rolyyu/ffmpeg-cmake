cmake_minimum_required(VERSION 3.14)
project(sdl2)

find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL2  REQUIRED IMPORTED_TARGET sdl2)

add_library(sdl2 INTERFACE IMPORTED GLOBAL)
target_include_directories(sdl2 INTERFACE
    ${SDL2_INCLUDE_DIRS}
)
target_link_options(sdl2 INTERFACE
    ${SDL2_LDFLAGS}
)
