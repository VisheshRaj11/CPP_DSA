#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

node* createNode(int data){
    node* node1 = new node();
    node1->data = data;
    node1->left = NULL;
    node1->right = NULL;
    return node1;
}

node* insertNode(node* root,int data){
    if(root==NULL) return createNode(data);
    if(data<root->data) root->left = insertNode(root->left,data);
    else if(data>root->data) root->right = insertNode(root->right,data);
    return root;
}

int height(node* root){
    if(root==NULL) return 0;

    int leftH = height(root->left);
    int rightH = height(root->right);

    return max(leftH,rightH)+1;
}

int main(){
    int x;
    cin>>x;
    node* root = NULL;

    for(int i=0;i<x;i++){
        int data;
        cin>>data;
        root = insertNode(root,data);
    }

    cout<<"The height of the Bst is: "<<height(root);
}

