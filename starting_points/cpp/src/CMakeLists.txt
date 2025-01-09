enable_testing()

add_executable(
    game_of_life_test
    game_of_life_test.cpp
)

target_link_libraries(
    game_of_life_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(game_of_life_test)