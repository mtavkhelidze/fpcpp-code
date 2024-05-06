set(TEST_BIN "${PROJECT_NAME}-test")

add_executable(${TEST_BIN} identity_test.cpp)
target_link_libraries(${TEST_BIN} gtest_main)
gtest_discover_tests(${TEST_BIN})
