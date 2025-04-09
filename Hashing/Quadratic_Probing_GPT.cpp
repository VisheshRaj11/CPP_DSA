#include <bits/stdc++.h>
using namespace std;

struct HashEntry {
    int key;
    bool isOccupied;
};

void initialize(HashEntry hashTable[], int tableSize) {
    for (int i = 0; i < tableSize; i++) {
        hashTable[i].key = -1;
        hashTable[i].isOccupied = false;
    }
}

int hashFunction(int tableSize, int key) {
    return key % tableSize;
}

void insertKey(HashEntry hashTable[], int tableSize, int key) {
    int idx = hashFunction(tableSize, key);
    int i = 0;

    // Quadratic probing to handle collisions
    while (hashTable[(idx + i * i) % tableSize].isOccupied) {
        i++;
        if (i == tableSize) {  // If the table is full, stop probing
            cout << "Hash table is full, cannot insert key: " << key << endl;
            return;
        }
    }

    int finalIdx = (idx + i * i) % tableSize;
    hashTable[finalIdx].key = key;
    hashTable[finalIdx].isOccupied = true;
    cout << "The key: " << key << " inserted at index: " << finalIdx << endl;
}

void displayTable(HashEntry hashTable[], int tableSize) {
    cout << "Hash Table: " << endl;
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i].isOccupied) {
            cout << "Index: " << i << " Key: " << hashTable[i].key << endl;
        } else {
            cout << "Index: " << i << " is empty" << endl;
        }
    }
}

int main() {
    int tableSize;
    cin >> tableSize;

    // Dynamically allocate the hash table
    HashEntry* Table = new HashEntry[tableSize];

    // Initialize the hash table
    initialize(Table, tableSize);

    int choice, key;
    while (true) {
        cout << "Enter your choice: \n1. Insert Key \n2. Display Table \n3. Exit\n";
        cin >> choice;
        switch (choice) {
            case 1: {
                cin >> key;
                insertKey(Table, tableSize, key);
                break;
            }
            case 2: {
                displayTable(Table, tableSize);
                break;
            }
            case 3: {
                cout << "Exiting the Program." << endl;
                delete[] Table;  // Free dynamically allocated memory
                return 0;
            }
            default:
                cout << "Invalid Choice" << endl;
        }
    }
}
