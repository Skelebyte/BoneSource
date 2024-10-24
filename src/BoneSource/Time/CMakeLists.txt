cmake_minimum_required(VERSION 3.10)
project(BoneSource VERSION 0.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE SOURCES "src/BoneSource/**/*.cpp")

add_library(BoneSource STATIC ${SOURCES})

target_include_directories(BoneSource PUBLIC 
	"${PROJECT_SOURCE_DIR}/src/BoneSource"
	"${PROJECT_SOURCE_DIR}/deps/include/glad"
	"${PROJECT_SOURCE_DIR}/deps/include/GLFW"
	"${PROJECT_SOURCE_DIR}/deps/include/KHR"
)

target_link_libraries(BoneSource 
	"${PROJECT_SOURCE_DIR}/deps/lib/glfw3.lib" # change this to glfw3.a if you are not windows
)

set_target_properties(BoneSource PROPERTIES POSITION_INDEPENDENT_CODE ON)