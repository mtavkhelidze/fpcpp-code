set(TEST_BIN "${PROJECT_NAME}-test")

add_executable(${TEST_BIN} 01.04.01.identity_test.cpp
        01.04.02.compose_test.cpp
        ../include/compose.h)
target_link_libraries(${TEST_BIN} gtest_main rapidcheck)
gtest_discover_tests(${TEST_BIN})
