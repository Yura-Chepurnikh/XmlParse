#include "../inc/parser.hpp"
#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    Parser parser("<roots><root1><child1><child2><child3></child3><child4></child4><child5></child5></child2></child1></root1><root1><child1><child2><child3></child3><child4></child4><child5></child5></child2></child1></root1></roots>");
    parser.Parse();
    return 0;
}