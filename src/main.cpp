#include <iostream>
#include<string>
#include<algorithm>

#include "core/string_parser.h"

using namespace std;

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

    string cmd;
    cout << "Usage: 4+5, then hit Enter." << endl;
    cout << "Exit: '00 + Enter'" << endl;
    cout << "----------------------------------------------\n" << endl;
    cin >> cmd;

    do {       
        auto pos = find_if(cbegin(cmd), cend(cmd),
                           [](char ch) {return ch < 48 || ch > 57; });

        char const ch = (pos != cmd.end()) ? *pos : '0';              

        int const l(StringParser::numberLeftOf(cmd, pos));
        int const r(StringParser::numberRightOf(cmd, pos));

        if (ch == '+') {
            int result = Adder::add(l, r);
            cout << '=' << result << endl;
        }
        else if (ch == '/') {
            int result = Divider::divide(l,r);
            cout << '=' << result << endl;
        }
        else {
            cout << "Error: Unsupported operation '" << ch << "'" << endl;
        }

        cout << "\n---\n\n";
        cin >> cmd;
    } while (cmd != "00");
   

	cout << "...................." << endl;
	cout << "The End \n\n";
	return 0;
}