#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
void preOrder(const vector<int>& tree, int index);
void inOrder(const vector<int>& tree, int index);
void postOrder(const vector<int>& tree, int index);
void insert(vector<int>& tree, int data);

int main() {
    vector<int> tree; // Vector to store the binary tree
    int data;

    cout << "Enter integers to insert into the tree (enter -1 to stop):\n";
    while (true) {
        cin >> data;
        if (data < 0) break; // Stop if input is less than 0
        insert(tree, data);
    }

    cout << "Pre-order Traversal: ";
    preOrder(tree, 0);
    cout << endl;

    cout << "In-order Traversal: ";
    inOrder(tree, 0);
    cout << endl;

    cout << "Post-order Traversal: ";
    postOrder(tree, 0);
    cout << endl;

    return 0;
}

// Function to insert an element in the binary tree represented by a vector
void insert(vector<int>& tree, int data) {
    tree.push_back(data); // Insert the new data
}

// Function to perform pre-order traversal
void preOrder(const vector<int>& tree, int index) {
    if (index >= tree.size()) return; // Check bounds
    cout << tree[index] << " "; // Visit the node
    preOrder(tree, 2 * index + 1); // Visit left child
    preOrder(tree, 2 * index + 2); // Visit right child
}

// Function to perform in-order traversal
void inOrder(const vector<int>& tree, int index) {
    if (index >= tree.size()) return; // Check bounds
    inOrder(tree, 2 * index + 1); // Visit left child
    cout << tree[index] << " "; // Visit the node
    inOrder(tree, 2 * index + 2); // Visit right child
}

// Function to perform post-order traversal
void postOrder(const vector<int>& tree, int index) {
    if (index >= tree.size()) return; // Check bounds
    postOrder(tree, 2 * index + 1); // Visit left child
    postOrder(tree, 2 * index + 2); // Visit right child
    cout << tree[index] << " "; // Visit the node
}