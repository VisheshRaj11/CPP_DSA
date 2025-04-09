#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    int height;
};

node* createNode(int data) {
    node* node1 = new node();
    node1->data = data;
    node1->left = NULL;
    node1->right = NULL;
    node1->height = 1;
    return node1;  
}

int height(node* root) {
    if (root == NULL) return 0;
    return root->height;
}

void updateHeight(node* root) {
    root->height = 1 + max(height(root->left), height(root->right));
}

int getBalance(node* root) {
    if (root == NULL) return 0;
    return height(root->left) - height(root->right);
}

node* rotateLeft(node* root) {
    node* y = root->right;
    node* T2 = y->left;

    y->left = root;
    root->right = T2;

    updateHeight(root);
    updateHeight(y);

    return y;
}

node* rotateRight(node* root) {
    node* x = root->left;
    node* T2 = x->right;

    x->right = root;
    root->left = T2;

    updateHeight(root);
    updateHeight(x);

    return x;
}

node* insertNode(node* root, int data) {
    if (root == NULL) return createNode(data);

    if (data < root->data) 
        root->left = insertNode(root->left, data);
    else if (data > root->data) 
        root->right = insertNode(root->right, data);
    else 
        return root; // Duplicate keys not allowed

    // Update the height of the root
    updateHeight(root);

    // Calculate the balance factor
    int balance = getBalance(root);

    // Balance the tree
    // Left Left Case
    if (balance > 1 && data < root->left->data) 
        return rotateRight(root);

    // Right Right Case
    if (balance < -1 && data > root->right->data) 
        return rotateLeft(root);

    // Left Right Case
    if (balance > 1 && data > root->left->data) {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }

    // Right Left Case
    if (balance < -1 && data < root->right->data) {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }

    return root;
}

void inorder(node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    int x;
    cin >> x;

    node* root = NULL;

    for (int i = 0; i < x; i++) {
        int data;
        cin >> data;
        root = insertNode(root, data);
    }

    inorder(root);

    return 0;
}