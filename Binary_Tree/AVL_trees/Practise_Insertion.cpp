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
    root->height = 1+ max(height(root->left),height(root->right));
}

//      y                               x
//     / \     Right Rotation          /  \
//    x   T3   - - - - - - - >        T1   y 
//   / \       < - - - - - - -            / \
//  T1  T2     Left Rotation            T2  T3
 

node* rotateLeft(node* x){
    node* y = x->right;
    node* T2 = y->left;

    // After Rotation:
    y->left = x;
    x->right = T2;

    //UpdateHeight:
    updateHeight(x);
    updateHeight(y);

     return(y);
}


node* rotateRight(node* y){
    node* x = y->left;
    node* T2 = x->right;

    //After Rotation:
    x->right = y;
    y->left = T2;

    //UpdateHeight:
    updateHeight(y);
    updateHeight(x);

    return (x);
}


node* insertNode(node* root,int data){
    if(root==NULL) return createNode(data);
    if(data<root->data) root->left = insertNode(root->left,data);
    else if(data>root->data) root->right = insertNode(root->right,data);
    else  return root;

    //Update height:
    updateHeight(root);

    //Balance Factor Value:
    int balance = getBalance(root);

    //Now Balanced the tree by rotation:
    //Left Left case:
    if(balance>1 && data<root->left->data) return rotateRight(root);

    //Right Right Case:
    if(balance<-1 && data>root->right->data) return rotateLeft(root);

    //Left_Right Case:
    if(balance>1 && data>root->left->data){
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }

    // Right-Left Case:
    if(balance<-1 && data<root->right->data){
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }

    return root;
}


void inOrder(node* root){
    if(root==NULL) return ;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}


void levelOrder(node* root) {
    if (root == NULL) return;

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    cout<<endl;
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

    cout<<"The elements are in inorder: ";

    inOrder(root);
    
    cout<<"The elements are in level order traversal: ";

    levelOrder(root);

}




