#include "../inc/parser.hpp"
#include "../inc/hash_table.hpp"
#include <iostream>
#include <string>
#include <utility>
#include <vcruntime.h>
using namespace std;

int main() {
    // while (true) {
    //     cout << ">> ";
    //     string input;
    //     getline(cin, input);


    //     Parser* parser = new Parser(input);
    //     delete parser;
    // }

    Hashtable<int, int>* hashTable = new Hashtable<int, int>();

    int key;
    int value;

    for (size_t i = 0; i < 3; ++i) {
        cout << "Enter the key: ";
        cin >> key;
        
        cout << "Enter the value: ";
        cin >> value;

        hashTable->Insert(key, value);
    }

    cout << hashTable->get(2);

    return 0;
}