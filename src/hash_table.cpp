// #include "../inc/hash_table.hpp"

// #include <iostream>
// #include <stdexcept>
// #include <string.h>

// template<typename K, typename V>
// Node<K,V>::Node(K k, V v, Node* n) : key(k), value(v), next(n) { }

// template<typename K, typename V>
// int Hashtable<K,V>::HashFunc(int key)
// {
//     return -key % SIZE;
// }

// template<typename K, typename V>
// int Hashtable<K,V>::HashFunc(const char* key)
// {
//     int hash = 0;
//     int len = strlen(key);
//     for (int i = 0; i < len; ++i) 
//         hash = (hash * 31) + key[i];
//     return hash % SIZE;
// }

// template<typename K, typename V>
// void Hashtable<K,V>::Insert(K key, V value)
// {
//     int index = HashFunc(key);
    
//     Node<K, V>* newNode = new Node<K, V>(key, value);

//     Node<K, V>* node = table;
//     if (table[index] == nullptr) {
//         table[index] = newNode;
//     } 
//     else {
//         Node<K, V>* node = table[index];
//         while (node) {
//             node = node->next;
//         }
//         newNode = node->next;
//     }
//     delete newNode;
// }

// template<typename K, typename V>
// V Hashtable<K,V>::get(K key)
// {
//     int index = HashFunc(key);
//     Node<K, V>* node = table[index];

//     while (node) {
//         if (node->key == key)
//             return node->value;
//         node = node->next;
//     }
//     throw std::runtime_error("Key not found!!!");
// }

// template<typename K, typename V>
// Hashtable<K,V>::Hashtable() 
// {
//     for (auto row : table) {
//         row = nullptr;
//     }
// }

// template<typename K, typename V>
// Hashtable<K,V>::~Hashtable()
// {
//     delete table;
// }