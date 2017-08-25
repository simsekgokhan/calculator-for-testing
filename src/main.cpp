#include <iostream>
#include<string>
#include<algorithm>

#include "core/string_parser.h"

struct Adder
{
    static int add(int left, int right) {
        return left + right;
    }
};

struct Divider
{
    static int divide(int left, int right) {
        return left / right;
    }
};

struct Calculator
{
    static int calculate() { return 0; }
};

struct Logger
{
    // todo
};

int main(int argc, char *argv[])
{

    std::string cmd;
    std::cout << "Usage: 4+5, then hit Enter." << std::endl;
    std::cout << "Exit: '00 + Enter'" << std::endl;
    std::cout << "----------------------------------------------\n" << std::endl;
    std::cin >> cmd;

    do {       
        auto pos = find_if(std::cbegin(cmd), std::cend(cmd),
                           [](char ch) {return ch < 48 || ch > 57; });

        char const ch = (pos != cmd.end()) ? *pos : '0';              

        int const l(StringParser::numberLeftOf(cmd, pos));
        int const r(StringParser::numberRightOf(cmd, pos));

        if (ch == '+') {
            int result = Adder::add(l, r);
            std::cout << '=' << result << std::endl;
        }
        else if (ch == '/') {
            int result = Divider::divide(l,r);
            std::cout << '=' << result << std::endl;
        }
        else {
            std::cout << "Error: Unsupported operation '" << ch << "'" << std::endl;
        }

        std::cout << "\n---\n\n";
        std::cin >> cmd;
    } while (cmd != "00");
   

	std::cout << "...................." << std::endl;
	std::cout << "The End \n\n";
	return 0;
}