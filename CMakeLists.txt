cmake_minimum_required(VERSION 3.0.0)
project(FemAle VERSION 0.1.0)

include_directories(./in
)

add_executable(FemAle ./src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
