#include "../inc/syntax_kind.hpp"
using namespace std;

std::ostream& operator<<(std::ostream& stream, SyntaxKind& kind) {
    switch (kind) {
    case SyntaxKind::ALNUM:
        stream << "ALNUM";
        break;
    case SyntaxKind::OPEN_TAG:
        stream << "OPEN_TAG";
        break;
    case SyntaxKind::CLOSE_TAG:
        stream << "CLOSE_TAG";
        break;  
    case SyntaxKind::EQUAL:
        stream << "EQUAL";
        break;
    case SyntaxKind::DOUBLE_MARKS:
        stream << "DOUBLE_MARKS";
        break;
    default:    
        stream << "UNKNOWN_TYPE";
        break;
    }
    return stream;
}