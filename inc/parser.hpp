#include "./lexer.hpp"
#include "./syntax_token.hpp"
#include <iostream>
#include <string>

class Parser {
private:
    int position;
    std::string text;
public:
    Parser(const std::string& text);

    inline void Next();
    SyntaxToken NextToken();
    auto Parse();
};