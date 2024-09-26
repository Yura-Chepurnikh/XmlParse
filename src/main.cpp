#include "../inc/lexer.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        cout << ">> ";
        string input;
        getline(cin, input);

        Lexer* lexer = new Lexer(input);
        while (true) {
            auto token = lexer->NextToken();
            if (token.kind == SyntaxKind::EOF_TOKEN)
                break;

            cout << token.kind << " " << token.position << " " << token.text << endl;
        }
    }

    return 0;
}