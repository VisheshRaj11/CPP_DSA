#include <bits/stdc++.h>
using namespace std;

void insert(vector<int>& tree,int data){
    tree.push_back(data);
}

void preorder(vector<int>& tree,int idx){
    //Base Case:
    if(idx>=tree.size()) return;
    cout<<tree[idx]<<" ";
    //To Left Child:
    preorder(tree,2*idx+1);
    //To Right Child:
    preorder(tree,2*idx+2);
}

int main(){
    vector<int> tree;
    int data;

    //Insert Data:
    while(true){
        if(data<0) break;
        else insert(tree,data);
    }
    
    //Pre-order function:
    preorder(tree,0); 
}