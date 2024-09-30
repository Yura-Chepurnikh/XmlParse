#include "./hash_table.hpp"
#include <vector>
#include <iostream>
using namespace std;

template<typename K, typename V>
struct TreeNode {
    Hashtable<V, K>* node;
    vector<Hashtable<K, V>> children;
};

template<typename K, typename V>
class Tree {
private:
    Tree<K, V>* root;
public:
    void Insert(TreeNode<K, V> newNode) {
        root = InsertRec(newNode);
    }
    TreeNode<K, V> InsertRec(TreeNode<K, V> newNode) {
        if (root == nullptr) {
            return TreeNode<K, V>(newNode);
        }

        if (newNode.node.value == nullptr) {
            
        }
    }

    void Display();
    void DisplayRec();
};




