
#include "gtest/gtest.h"

/* Example Test:
 *
 * TEST( [Test_Case_Name], [Test_Name] )
 * TEST( [Test_Case_Name], [UnitOfWorkName_ScenarioUnderTest_ExpectedBehavior] )
 * TEST( StringParserTests, NumberLeftOf_StringWithoutNumber_ReturnsFalse) {
    // ...
   }
*/

// (test_case_name, test_name) 
TEST(StringParserTests, NumberLeftOf_StringWithoutNumber_ReturnsFalse)
{
    EXPECT_EQ(0, 42);
}

TEST(StringParserTests, SomeTest)
{
    EXPECT_EQ(0, 0);
}

TEST(LoggerTests, Test1)
{
    EXPECT_EQ(0, 0);
}
