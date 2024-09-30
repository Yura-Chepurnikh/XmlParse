#include "../inc/parser.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        cout << ">> ";
        string input;
        getline(cin, input);


        Parser* parser = new Parser(input);
        delete parser;
    }
    return 0;
}