#include "../inc/parser.hpp"
#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    
    while (true) {
        string input;
        getline(cin, input);

        Parser parser(input);
    }

    return 0;
}