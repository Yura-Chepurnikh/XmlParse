#pragma once

#include <iostream>
#include <vector>
#include <string>

struct Node {
    std::string value;
    Node* parent;
    std::vector<Node*> children;
    Node(const std::string& str) : value(str) { }
};