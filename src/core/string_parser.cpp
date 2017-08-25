
#include "string_parser.h"

int StringParser::numberLeftOf(std::string const& str, std::string::const_iterator pos)
{
    return stoi(std::string(str.cbegin(), pos));
}

int StringParser::numberRightOf(std::string const& str, std::string::const_iterator pos)
{
    return stoi(std::string(pos + 1, str.cend()));
}

