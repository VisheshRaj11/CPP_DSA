#include <iostream>
using namespace std;

struct node
{
    char data;
    node* left;
    node* right;
};

struct node* createNode(char data){
    node* node1 = new node();
    node1->data = data;
    node1->left = NULL;
    node1->right = NULL;
    return node1;
 }

 void inOrder(node* root,char arr[],int& index){
    if(root==NULL) return;

    inOrder(root->left,arr,index);

    arr[index++] = root->data;

    inOrder(root->right,arr,index);
 }

 int main(){

    node* root = createNode('A');
    root->left = createNode('B');
    root->right = createNode('C');
    root->left->left = createNode('D');
    root->left->right = createNode('D');
    root->right->left = createNode('D');
    root->right->right = createNode('D');


    char arr[7];
    int index = 0;

    inOrder(root,arr,index);

    cout<<"Inorder traverse in the array is given as: ";
    for(int i=0;i<index;i++){
        cout<<arr[i]<<" ";
    }

 }