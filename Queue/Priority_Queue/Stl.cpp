// 
#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<pair<int,int>> pq;
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int pr;
        int ele;
        cin>>pr>>ele;
        pq.push({pr,ele});
    }
    
    while(!pq.empty()){
        cout<<"The element is : "<<pq.top().second<<" with priority: "<<pq.top().first<<endl;
        pq.pop();    
    }
}