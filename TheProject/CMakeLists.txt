cmake_minimum_required(VERSION 3.30)
project(TheProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(TheProject main.cpp
        functions/functions.h
        functions/functions.cpp
        classes/FootballPlayer.cpp
        classes/FootballPlayer.h
)
