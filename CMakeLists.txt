project(rhaddon)
cmake_minimum_required(VERSION 3.25)

set(CMAKE_C_FLAGS "{CMAKE_C_FLAGS} -Wall -Wextra")
set(SOURCES src/)
add_executable(rhad ${SOURCES})

include_directories(include)
