cmake_minimum_required(VERSION 3.25)
project(SP_Y2S2M5)

set(CMAKE_CXX_STANDARD 17)

add_executable(SP_Y2S2M5 main.cpp Demo.cpp doctest.h TestCounter.cpp sources/MagicalContainer.cpp sources/MagicalContainer.hpp sources/AscendingIterator.cpp sources/PrimeIterator.cpp sources/SideCrossIterator.cpp Test.cpp)
