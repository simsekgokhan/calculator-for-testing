#pragma once

#include<string>

struct StringParser
{
    static int numberLeftOf(std::string const& str, std::string::const_iterator pos);
    static int numberRightOf(std::string const& str, std::string::const_iterator pos);
};
