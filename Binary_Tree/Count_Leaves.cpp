#include <bits/stdc++.h>
using namespace std;

void insert(vector<int>& tree,int data){
    tree.push_back(data);
}

int countLeaves(vector<int>& tree,int n){
    int count = 0;
    
    for(int i=0;i<n;i++){
        int left = 2*i+1;
        int right = 2*i+2;

        //Now check for leaf nodes.
        if(left>=n && right>=n){
            count++;
        }
    }

    return count;

}

int main(){
    int data;
    vector<int> tree;
    int n = tree.size();
    while(true){
        cin>>data;
        if(data<0) break;
        insert(tree,data);
    }

    cout<<"The number of leaf nodes: "<<countLeaves(tree,n);

}