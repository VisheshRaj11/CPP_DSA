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
    //Data is small than root->data : Placed it to left.
    if(data<root->data){
        root->left = insertNode(root->left,data);
    }
    //Data is large than root->data : Placed it to right.
    else if(data>root->data){
        root->right = insertNode(root->right,data);
    }
    return root;
}

void preOrder(node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


int main(){
    int x;
    cin>>x;
    //Create root:
    node* root = NULL;
    for(int i=0;i<x;i++){
        int data;
        cin>>data;
        root = insertNode(root,data);
    }

    preOrder(root);
}