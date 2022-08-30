cmake_minimum_required(VERSION 3.16.3)

project(SOCKET VERSION 0.1)

configure_file(SOCKET.h.in SOCKET.h)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

add_subdirectory(external/glfw)

add_subdirectory(ADDER)

target_include_directories(${PROJECT_NAME} PUBLIC ADDER PUBLIC external/glfw/include/GLFW)

target_link_directories(${PROJECT_NAME} PRIVATE external/glfw/src)

target_link_libraries(${PROJECT_NAME} ADDER glfw)