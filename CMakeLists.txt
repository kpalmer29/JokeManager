cmake_minimum_required(VERSION 3.15)
project(jokeMgr)

set(CMAKE_CXX_STANDARD 14)

add_executable(jokeMgr main.cpp joke.cpp joke.h jokeMgr.cpp jokeMgr.h Category.cpp Category.h)