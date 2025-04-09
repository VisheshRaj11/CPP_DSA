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
    if(root==NULL){
        return createNode(data);
    }
    if(data<root->data){
        root->left = insertNode(root->left,data);
    }
    else if(data>root->data){
        root->right = insertNode(root->right,data);
    }
    return root;
}

node* searchNode(node* root,int data){
    if(root==NULL||root->data==data) return root;
    if(root->data>data){
        return searchNode(root->left,data);
    }
    return searchNode(root->right,data);
}

node* findMin(node* root){
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}

node* deleteNode(node* root,int value){
    if(root==NULL) return root;
    if(value<root->data){
        root->left = deleteNode(root->left,value);
    }
    else if(value>root->data){
        root->right = deleteNode(root->right,value);
    }
    else{
        // One child || No child.
        if(root->left==NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

        else if(root->right==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }

        //Two Child:
        node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right,temp->data);
    }
}

void preorder(node* root){
    if(root==NULL) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
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

    preorder(root);

    cout<<endl;

    deleteNode(root,25);

    cout<<endl;

    preorder(root);

    // (searchNode(root,10)==NULL)?cout<<"Not Found":cout<<"Found";
}