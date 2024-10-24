cmake_minimum_required(VERSION 3.10)
project(BoneSource VERSION 0.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE SOURCES "src/BoneSource/**/*.cpp")

add_library(BoneSource STATIC ${SOURCES})

target_include_directories(BoneSource PUBLIC "${PROJECT_SOURCE_DIR}/src/BoneSource")

set_target_properties(BoneSource PROPERTIES POSITION_INDEPENDENT_CODE ON)