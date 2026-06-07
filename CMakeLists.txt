cmake_minimum_required(VERSION 3.22)
project(Raptor)
set(CMAKE_CXX_STANDARD 20)
set(SOURCE source/main.cpp source/window.cpp)
add_executable(${PROJECT_NAME} ${SOURCE}
	source/window.h)

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
    COMPILE_WARNING_AS_ERROR ON
)

if (MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic)
endif()

set(DAWN_FETCH_DEPENDENCIES ON)
add_subdirectory("dawn" EXCLUDE_FROM_ALL)

target_link_libraries(${PROJECT_NAME} PRIVATE webgpu_dawn webgpu_glfw glfw)