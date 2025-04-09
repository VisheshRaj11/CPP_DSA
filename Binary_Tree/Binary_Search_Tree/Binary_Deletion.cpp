#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left ;
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

node* findMin(node* root){
    if(root==NULL){
        cout<<"tree is empty.";
        return;
    }
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}

node* deleteNode(node* root,int key){
    if(root==NULL) return root;
    //Traverse the tree to find the node to delete.
    if(key<root->data){
        root->left = deleteNode(root->left,key);
    }
    else if(key>root->data){
        root->right = deleteNode(root->right,key);
    }

    else{
        // Node with one child or no child.

        //No child in left.
        if(root->left==NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

        //No child in right.
        else if(root->right==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }

        //Node with two childern: get the inorder successor
        node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right,temp->data);
    }
    return root;
}

//By Inorder we can check the tree is binary or not .
//Because in Inorder the tree is become the sorted one .
// Hence we know if the tree is sorted: then it is BST.

int main(){
    int x;
    cin>>x;
    node* root = NULL;
    for(int i=0;i<x;i++){
        int data;
        cin>>data;
        root = insertNode(root,data);
    }
}