// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* maketree(int arr[], Node* root, int i, int n) {
    if (i < n) {
        Node* temp = new Node(arr[i]);
        root = temp;

        root->left = maketree(arr, root->left, 2 * i + 1, n);
        root->right = maketree(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

void preorder(Node* root1, Node* root2, int lvl) 
{
    if(root1==NULL || root2==NULL) return;
    
    if(lvl%2==0){
        swap(root1->data,root2->data);
    }
    
    preorder(root1->left,root2->right,lvl+1);
    preorder(root1->right,root2->left,lvl+1);
}

void reverseAlternate(Node* root) {
    preorder(root->left, root->right, 0);
}

void printInorder(Node* node) 
{
   if(node==NULL) return ;
   printInorder(node->left);
   cout<<node->data<<" ";
   printInorder(node->right);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Node* root = maketree(arr, root, 0, n);
    reverseAlternate(root);

    printInorder(root);

    return 0;
}
