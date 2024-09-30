#pragma once

#include <iostream>
#include <vector>
using namespace std;

template<typename K, typename V>
struct Node {
    K key;
    V value;
    Node* next;

    Node(K k = K(), V v = V(), Node* n = nullptr) : key(k), value(v), next(n) { }
};

template<typename K, typename V>
class Hashtable {
private:
    vector<Node<K, V>*> table;
    const int SIZE = 1024;
public:
    Hashtable() {
        table.resize(SIZE, nullptr);
    }

    int HashFunc(int key)
    {
        return key % SIZE;
    }
    
    ~Hashtable()
    {
        for (auto node : table) {
            while (node) {
                Node<K, V>* temp = node;
                node = node->next;
                delete temp;
            }
        }
    };

    int HashFunc(const char* key)
    {
        int hash = 0;
        int len = strlen(key);
        for (int i = 0; i < len; ++i) 
            hash = (hash * 31) + key[i];
        return hash % SIZE;
    }
    
    V get(K key) {
        int index = HashFunc(key);
        Node<K, V>* node = table[index];

        while (node) {
            if (node->key == key)
                return node->value;
            node = node->next;
        }
        throw std::runtime_error("Key not found!!!");
    }

    void Insert(K key, V value) {
        int index = HashFunc(key);
    
        Node<K, V>* newNode = new Node<K, V>(key, value);

        if (table[index] == nullptr) {
            table[index] = newNode;
        } 
        else {
            Node<K, V>* node = table[index];
            while (node->next) {
                node = node->next;
            }
            node->next = newNode;
        }
    }
};
