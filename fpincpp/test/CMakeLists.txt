set(TEST_BIN "${PROJECT_NAME}-test")

add_executable(${TEST_BIN})
target_link_libraries(${TEST_BIN} rapidcheck)
gtest_discover_tests(${TEST_BIN})
