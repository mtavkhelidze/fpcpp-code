cmake_minimum_required(VERSION 3.28)
project(fpcpp_code)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

message(STATUS "CMake version   : " ${CMAKE_VERSION})
message(STATUS "Processor       : " ${CMAKE_SYSTEM_PROCESSOR})
message(STATUS "Operating System: " ${CMAKE_SYSTEM})

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.14.0
)
FetchContent_MakeAvailable(googletest)
SET(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
include(GoogleTest)
add_subdirectory("rapidcheck")
enable_testing()

add_subdirectory(ctfp)
