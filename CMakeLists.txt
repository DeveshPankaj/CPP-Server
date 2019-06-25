cmake_minimum_required(VERSION 3.10)
project(CPP_Server)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP_Server main.cpp server.cpp server.h request.cpp request.h response.cpp response.h)