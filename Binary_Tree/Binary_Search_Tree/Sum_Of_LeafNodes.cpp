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
    node1->right  = NULL;
    return node1;
}

node* insertNode(node* root,int data){
    if(root==NULL) return createNode(data);
    //Left:
    if(data<root->data){
        root->left = insertNode(root->left,data);
    }
    else if(data>root->data){
        root->right = insertNode(root->right,data);
    }
}

int sum(node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return sum(root->left)+sum(root->right);
}

int main(){
    int x;
    cin>>x;
    node* root = NULL;
    for(int i=0;i<x;i++){
        int data;
        cin>>data;
        insertNode(root,data);
    }
    
    cout<<"The sum of leaf: "<<sum(root);
    
    
}