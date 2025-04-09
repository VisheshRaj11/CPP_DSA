#include <bits/stdc++.h>
using namespace std;

void insert(vector<int>& tree,int data){
    tree.push_back(data);
}

void inorder(vector<int>& tree,int idx){
    if(idx>=tree.size()) return;
    inorder(tree,2*idx+1);//Left Child.
    cout<<tree[idx]<<" ";//Root.
    inorder(tree,2*idx+2);//Right.
}

int main(){
    int data;
    vector<int> tree;

    while(true){
        cin>>data;
        if(data<0) break;
        insert(tree,data);
    }

    inorder(tree,0);
}