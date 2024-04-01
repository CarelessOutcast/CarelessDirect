# add_definitions(-DCMAKE_BUILD_TYPE="Debug")

cmake_minimum_required(VERSION 3.29.0)
project(DMSC VERSION 1.0.0 LANGUAGES CXX)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(NoInSourceBuilds)
# include(CmakeBuildOptions)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(src bin)
add_subdirectory(test)

include(Install)
