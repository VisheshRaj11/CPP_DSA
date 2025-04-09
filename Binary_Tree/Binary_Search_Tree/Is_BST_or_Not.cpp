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
    if(data<root->data){
        root->left = insertNode(root->left,data);
    }
    else if(data>root->data){
        root->right = insertNode(root->right,data);
    }
    return root;
}

int preval = INT_MIN;
bool isBST(node* root){
    if(root==NULL) return true;

    if(!isBST(root->left)) return false;
    
    if(root->data<=preval) return false;

    preval = root->data;

    return isBST(root->right);
}

int main(){
    int n;
    cin>>n;
    node* root = NULL;

    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        root = insertNode(root,data);
    }

    if(isBST(root)) cout<<"The given tree is BST";
    else cout<<"This is not the BST";
}