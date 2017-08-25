#pragma once

#include<string>

using namespace std;

struct StringParser
{
    static int numberLeftOf(string const& str, string::const_iterator pos);
    static int numberRightOf(string const& str, string::const_iterator pos);
};
