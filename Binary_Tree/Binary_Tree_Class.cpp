#include <iostream>
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

node* insert(node* root,int data){
    if(root==NULL){
        return createNode(data);
    }
    
    if(data<root->data){
        root->left = insert(root->left,data);
    }
    else if (data>root->data){
        root->right =insert(root->right,data);
    }
    
    return root;
}

void preorder(node* root){
    if(root==NULL) return;
    //Root:
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postOrder(node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main() {
    int x;
    cin>>x;
    node* root = NULL;
    
    for(int i=0;i<x;i++){
        int data;
        cin>>data;
        root = insert(root,data);
    }
    
    // Preorder Traversal:
    preorder(root);
    
    
    cout<<endl;
    //Inorder Traversal:
    inorder(root);
    
    cout<<endl;
    //Post Traversal:
    postOrder(root);
    
    
}