#include "../inc/parser.hpp"
using namespace std;

Parser::Parser(const std::string& text) : text(text)
{
    Lexer* lexer = new Lexer(text);

    while (true) {
        auto token = lexer->NextToken();

        if (token.kind == SyntaxKind::EOF_TOKEN)
            break;

        cout << token.kind << " " << token.position << " " << token.text << endl;

        if (token.kind != SyntaxKind::UNKNOWN_TYPE && 
            token.kind != SyntaxKind::WHITE_SPACE)
        tokens.push_back(token);
    }

    delete lexer;
}

void Parser::Next() { ++position; }

SyntaxToken Parser::Peek(int offset) {
    int pos = position + offset;
    if (pos >= tokens.size())
        return tokens[tokens.size() - 1];
    return tokens[pos];
}

SyntaxToken Parser::GetCurrentToken() {
    return Peek(0);
}

auto Parser::Parse() {  

}