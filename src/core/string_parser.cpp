
#include "string_parser.h"

int StringParser::numberLeftOf(string const& str, string::const_iterator pos)
{
    return stoi(string(str.cbegin(), pos));
}

int StringParser::numberRightOf(string const& str, string::const_iterator pos)
{
    return stoi(string(pos + 1, str.cend()));
}

