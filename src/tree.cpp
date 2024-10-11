#include "../inc/tree.hpp"

Node::Node() { }

void Node::AddRec(Node* root, int value) {
    if (root == nullptr) {
        return Node(root, value);
    }

    if (root.left)
}

void Node::Add(int value) {
    root = AddRec(root, value);
}