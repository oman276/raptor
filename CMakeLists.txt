cmake_minimum_required(VERSION 3.22)
project(Raptor)
set(CMAKE_CXX_STANDARD 20)
set(SOURCE source/main.cpp)
add_executable(${PROJECT_NAME} ${SOURCE}
	source/window.h)

set(DAWN_FETCH_DEPENDENCIES ON)
add_subdirectory("dawn" EXCLUDE_FROM_ALL)

target_link_libraries(app PRIVATE webgpu_dawn webgpu_glfw glfw)