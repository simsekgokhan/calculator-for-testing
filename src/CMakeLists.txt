
## 1. --- Calculator

set(SOURCES 
    core/string_parser.cpp
)
add_executable(calculator main.cpp ${SOURCES})

## 2. --- Calculator Unit Tests

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
add_subdirectory(googletest-release-1.8.1)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(SOURCES_TEST
    core/string_parser_test.cpp
)
add_executable(calculator_unit_tests ${SOURCES_TEST})
target_link_libraries(calculator_unit_tests gtest gtest_main)
