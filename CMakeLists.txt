cmake_minimum_required(VERSION 3.9)
project(TanksMapGenerator)

set(CMAKE_CXX_STANDARD 11)

add_executable(TanksMapGenerator main.cpp menu.cpp menu.h map.cpp map.h bush.cpp bush.h ice.cpp ice.h water.cpp water.h bricks.cpp bricks.h rocks.cpp rocks.h normal.cpp normal.h tile.cpp tile.h inputvalidator.cpp inputvalidator.h mapreader.cpp mapreader.h mapmodificator.cpp mapmodificator.h test.cpp test.h mapconverter.cpp mapconverter.h objectmap.cpp objectmap.h)