
#include "gtest/gtest.h"
#include "string_parser.h"

/* Example Test:
 *
 * TEST( [Test_Case_Name], [Test_Name] )
 * TEST( [Test_Case_Name], [UnitOfWorkName_ScenarioUnderTest_ExpectedBehavior] )
 * TEST( StringParserTests, NumberLeftOf_StringWithoutNumber_ReturnsFalse) {
    // ...
   }
*/

// (test_case_name, test_name) 
TEST(StringParserTests, compare_int)
{
    // EXPECT_TRUE(StringParser::compare_int(4,5)); // Fake failed test
    EXPECT_TRUE(StringParser::compare_int(4,4));    // Fake passing test
}

TEST(StringParserTests, SomeTest)
{
    EXPECT_EQ(0, 0);
}

TEST(LoggerTests, Test1)
{
    EXPECT_EQ(0, 0);
}
