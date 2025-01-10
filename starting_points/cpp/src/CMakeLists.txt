add_executable(
    game_of_life_test
    game_of_life_test.cpp
)

target_link_libraries(
    game_of_life_test
    GTest::gtest_main
)

if(ENABLE_COVERAGE)
    message(STATUS "Coverage enabled")
    target_compile_options(game_of_life_test PRIVATE -coverage)
    target_link_options(game_of_life_test PRIVATE -coverage)
endif()

include(GoogleTest)
gtest_discover_tests(game_of_life_test)