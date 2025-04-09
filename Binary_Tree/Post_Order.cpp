#include <bits/stdc++.h>
using namespace std;

void insert(vector<int>& tree,int data){
    tree.push_back(data);
}

void postorder(vector<int>& tree,int idx){
    if(tree.size()<=idx) return;
    postorder(tree,2*idx+1);
    postorder(tree,2*idx+2);
    cout<<tree[idx]<<" ";
}

int main(){
    int data;
    vector<int> tree;
    while(true){
        if(data<0) break;
        insert(tree,data);
    }
}