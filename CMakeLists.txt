cmake_minimum_required(VERSION 3.28)
project(fpcpp_code)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

message(STATUS "CMake version   : " ${CMAKE_VERSION})
message(STATUS "Processor       : " ${CMAKE_SYSTEM_PROCESSOR})
message(STATUS "Operating System: " ${CMAKE_SYSTEM})

SET(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.14.0
)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

SET(CMAKE_CXX_FLAGS_DEBUG "-DRC_ENABLE_GTEST=ON")
add_subdirectory("rapidcheck")

include_directories(
        rapidcheck/include
        rapidcheck/extras/gtest/include
)

enable_testing()
add_subdirectory(ctfp)
