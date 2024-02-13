cmake_minimum_required(VERSION 3.16)
project(Strategy)

set(CMAKE_CXX_STANDARD 14)

add_executable(Inheritance main.cpp Navigation.cpp Navigation.h NaviEconomicStrategy.cpp NaviEconomicStrategy.h NaviFastStrategy.cpp NaviFastStrategy.h NaviScenicStrategy.cpp NaviScenicStrategy.h
        NavigationStrategy.h
        DisplayStrategy.h
        display_2D.cpp
        display_2D.h
        display_3D.cpp
        display_3D.h)
