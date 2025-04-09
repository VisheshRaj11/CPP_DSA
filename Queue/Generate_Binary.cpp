#include <bits/stdc++.h>
using namespace std;

void display(stack<int> rev){
    while(!rev.empty()){
        cout<<rev.top();
        rev.pop();
    }
    cout<<" ";
}

int main(){
    int n;
    cin>>n;
    queue<int> que;
    for(int i=1;i<=n;i++){
        int num = i;
        queue<int> q;
        while(num!=0){
            int d = num%2;
            q.push(d);
            num  = num/2;
        }
        stack<int> rev;
        while(!q.empty()){
            rev.push(q.front());
            q.pop();
        }
        display(rev);
    }
    
}