#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
    int height;
};

node* createNode(int data){
    node* node1 = new node();
    node1->data = data;
    node1->left = NULL;
    node1->right = NULL;
    node1->height = 1; 
    return node1;
}

int height(node* root){
    if(root==NULL) return 0;
    return root->height;
}

int getBalance(node* root){
    if(root==NULL) return 0;
    return (height(root->left)-height(root->right));
}

void updateHeight(node* root){
    root->height  = 1+max(height(root->left),height(root->right));
}

//      y                               x
//     / \     Right Rotation          /  \
//    x   T3   - - - - - - - >        T1   y 
//   / \       < - - - - - - -            / \
//  T1  T2     Left Rotation            T2  T3

node* rotateRight(node* y){
    node* x = y->left;
    node* T2 = x->right;

    //  After Rotation:
    x->right = y;
    y->left = T2;

    //Udpate:
    updateHeight(y);
    updateHeight(x);
    return x;
}

node* rotateLeft(node* x){
    node* y = x->right;
    node* T2 = y->left;

    //After Rotation:
    y->left = x;
    x->right = T2;

    //UdpateHeight:
    updateHeight(x);
    updateHeight(y);

    return(y);
}

node* insertNode(node* root,int data){
    if(root==NULL) return createNode(data);
    if(data<root->data){
        root->right = insertNode(root,data);
    }
    else if(data>root->data){
        root->right = insertNode(root,data);
    }

    return root;

    updateHeight(root);


    int balance = getBalance(root);
    

    //Rotation:

    // Left Left Case:
    if(balance>1 && data<root->left->data){
        return rotateRight(root);
    }

    //Right Right Case:
    if(balance<-1 && data>root->right->data){
        return rotateLeft(root);
    }

    //Left Right Case:
    if(balance>1 && data>root->left->data){
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }

    //Right-Left Case:
    if(balance<-1 && data<root->right->data){
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }

    return root;
}


node* findMin(node* root){
    if(root== NULL) return;
    while(root->left!=NULL){
        root = root->left;
    }
}

node* deleteNode(node* root,int key){
    if(root==NULL) return;
    if(key<root->data) root->left = deleteNode(root->left,key);
    else if(key>root->data) root->right = deleteNode(root->right,key);
    else{
        // for One child or no child.
        if(!root->right || !root->left){
            node* temp = root->right? root->right:root->left;
            delete root;
            return temp;
        }
        else{
            // This is the for two child:Find the smallest one in the right part of the tree.
            node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root,temp->data);
        }
    }
}

int main(){
    node* root = NULL;
    int x;
    cin>>x;

    for(int i=0;i<x;i++){
        int data;
        cin>>data;
        root = insertNode(root,data);
    }   


}