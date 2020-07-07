cmake_minimum_required(VERSION 3.10.2)
SET(CMAKE_CXX_STANDARD 17)
project(Serendipity CXX)

include_directories(includes)
file(GLOB SOURCES "src/*.cpp")
add_executable(run ${SOURCES})


