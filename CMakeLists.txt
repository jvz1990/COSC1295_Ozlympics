cmake_minimum_required(VERSION 3.10)
project(ass1cpp2)

set(CMAKE_CXX_STANDARD 17)

add_executable(ass1cpp2 main.cpp persons/person.cpp persons/person.hpp support/data.cpp support/data.hpp persons/athletes/athlete.cpp persons/athletes/athlete.hpp games/game.cpp games/game.hpp persons/athletes/cyclist.cpp persons/athletes/cyclist.hpp support/util.cpp support/util.hpp)