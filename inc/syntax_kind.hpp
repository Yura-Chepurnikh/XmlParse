#pragma once

#include <iostream>

enum class SyntaxKind {
    OPEN_TAG,
    CLOSE_TAG,
    COMMENT,
    DOUBLE_MARKS,
    APOS,
    ALNUM,
    ATTRIBUTE,
    EQUAL,
    BINARY_EXPRESSION,
    EOF_TOKEN,
    UNKNOWN_TYPE,
    WHITE_SPACE, 
    SLASH,
};

std::ostream& operator<<(std::ostream& stream, SyntaxKind& kind);