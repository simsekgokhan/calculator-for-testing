
## 1. Main app
set(SOURCES 
    core/string_parser.cpp
)
add_executable(calculator main.cpp ${SOURCES})

## 2. Unit tests
set(SOURCES_TEST
    core/string_parser_test.cpp
)
add_executable(calculator_unit_tests ${SOURCES_TEST})
target_link_libraries(calculator_unit_tests gtest gtest_main)
