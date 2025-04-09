#include <bits/stdc++.h>
using namespace std;

void postOrder(vector<int>& tree,int idx){
    if(tree.size()<=idx) return;
    postOrder(tree,2*idx+1);
    postOrder(tree,2*idx+2);
    cout<<tree[idx]<<" ";
}

void oddSum(vector<int>& tree){
    int odd_sum = 0;
    for(int i=0;i<tree.size();i++){
        if(tree[i]%2!=0) {
            odd_sum+= tree[i];
        }
        else continue;
    }
    cout<<"Odd Sum: "<<odd_sum;
}

int main(){
    int n;
    cin>>n;
    vector<int> tree(n);
    
    for(int i=0;i<n;i++){
        cin>>tree[i];
    }

    postOrder(tree,0);

    oddSum(tree);
}