#pragma once

#include<string>

struct StringParser
{
    // Function for testing only
    static bool compare_int(int x, int y) { return x == y; }

    static int numberLeftOf(std::string const& str, std::string::const_iterator pos);
    static int numberRightOf(std::string const& str, std::string::const_iterator pos);
};
