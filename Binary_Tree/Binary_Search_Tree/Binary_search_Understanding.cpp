#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
};

node* createnode(int data){
    node* node1 = new node;
    node1->data = data;
    node1->left = NULL;
    node1->right = NULL;
    return node1;
}

node* insert(node* root,int data){
    if(root == NULL){
        return createnode(data);
    }

    //if data is less than root->data.
    if(data<root->data){
        root->left = insert(root->left,data);
    }

    // if data is greater than root->data.
    else if(data>root->data){
      root->right = insert(root->right,data);
    }
    return root;
}

void preorder(node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}

node* min(node* root){
    node* temp = root;
    while(temp != NULL && temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
node* del(node* root, int key){
    //Root:Null
    if(root==NULL) return root;
    //Key<root->data:Go left.
    else if(key<root->data){
        root->left = del(root->left,key);
    }
    //Key>root->data: Go Right.
    else if(key>root->data){
        root->right = del(root->right,key);
    }

    //Root Node: Is the key.
    else{
        //These are for single child.
        if(root->left == NULL){
            node* temp = root->right;
            free(root);
            return temp;
        }
        //These are for single child.
        else if(root->right == NULL){
            node* temp = root->left;
            free(root);
            return temp;
        }
        node* temp = min(root->right);
        root->data = temp->data;
        root->right = del(root->right,temp->data);
    }
        return root;
}

node* search(node* root,int data){
    //Null:
    if(root==NULL || root->data == data) return root;
    //Data<Root->Data: go left.
    if(root->data>data) return search(root->left,data);
    //Data>Root->Data: Go Right.
    return search(root->right,data);
}
int main(){
    int x;
    cin>>x;
    node* root = NULL;
    for(int i=0 ;i<x;i++){
        int data;
        cin>>data;
        root = insert(root,data);
    }
    
    preorder(root);
    root=del(root,4);
    cout<<endl;
    preorder(root);
    (search(root,7)==NULL)?cout<<"Not found":cout<<"Found";
}