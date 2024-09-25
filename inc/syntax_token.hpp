#include "./syntax_kind.hpp"
#include <iostream>
#include <string>


struct SyntaxToken {
    int position;
    std::string text;
    SyntaxKind kind;
};