cmake_minimum_required(VERSION 3.14)
project(lr3)

set(CMAKE_CXX_STANDARD 11)

file(GLOB_RECURSE SRCS
    "include/*.h"
    "src/lib/*.cpp"
)

file(GLOB_RECURSE TEST_SRCS
    "include/*.h"
    "tests/*.cpp"
)

include_directories(AFTER "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_library(lr3_lib ${SRCS})

add_executable(lr3 src/main.cpp)
add_executable(lr3_test ${TEST_SRCS})

target_link_libraries(lr3 lr3_lib)
target_link_libraries(lr3_test lr3_lib)