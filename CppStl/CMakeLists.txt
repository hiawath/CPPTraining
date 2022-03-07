cmake_minimum_required(VERSION 3.0.0)
project(cppstl VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(cppstl main.cpp item.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
