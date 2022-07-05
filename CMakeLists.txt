cmake_minimum_required(VERSION 3.22)
project(DCRS)

set(CMAKE_CXX_STANDARD 14)

add_executable(DCRS src/disease.h main.cpp  src/location.h src/case.h)
