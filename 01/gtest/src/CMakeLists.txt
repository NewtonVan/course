cmake_minimum_required(VERSION 3.14)
project(MAIN)

add_library(fb STATIC hello.cpp)
add_executable(main main.cpp)
target_link_libraries(main fb)
target_include_directories(fb PUBLIC ${MS_SOURCE_DIR}/include)
target_include_directories(main PRIVATE ${MS_SOURCE_DIR}/include)