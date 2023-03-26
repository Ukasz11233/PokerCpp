cmake_minimum_required(VERSION 3.19)
project(Poker)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES pokerModel/card.cpp pokerCommon/rank.h)

add_subdirectory(lib pokerModel)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run tests/testCard.cpp ${SOURCE_FILES})

target_link_libraries(Google_Tests_run gtest gtest_main)

add_executable(Poker main.cpp ${SOURCE_FILES})

