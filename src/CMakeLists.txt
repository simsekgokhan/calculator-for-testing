
# --- Calculator

set(SOURCES 
    core/string_parser.cpp
)
add_executable(calculator main.cpp ${SOURCES})


# --- Calculator Unit Tests

add_subdirectory(gtest-1.8.0)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(SOURCES_TEST
    core/string_parser_test.cpp
)

add_executable(calculator_unit_tests ${SOURCES_TEST})
target_link_libraries(calculator_unit_tests gtest gtest_main)
