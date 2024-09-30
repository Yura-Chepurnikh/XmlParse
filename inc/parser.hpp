#pragma once

#include "./lexer.hpp"
#include "./syntax_token.hpp"
#include <iostream>
#include <string>
#include <vector>

class Parser {
private:
    int position;
    std::string text;

    std::vector<SyntaxToken> tokens;
public:
    Parser(const std::string& text);

    inline void Next();
    SyntaxToken NextToken();
    auto Parse();
};