#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    
    vector<int> heap;

    
    for(int i=0;i<x;i++){
        int data;
        cin>>data;
        heap.push_back(data);
        make_heap(heap.begin(),heap.end());
    }
    
    for(int i:heap) cout<<i<<" ";
    
    
}
