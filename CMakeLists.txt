cmake_minimum_required(VERSION 3.28)
project(fpcpp_code)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.14.0
)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)
enable_testing()

add_subdirectory(ctfp)
