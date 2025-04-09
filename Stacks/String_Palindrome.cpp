#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> stk;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        char data;
        cin>>data;
        stk.push(data);
    }

    stack<char> temp = stk;
    stack<char> pal;
    while(!stk.empty()){
        pal.push(stk.top());
        stk.pop();
    }

    //Method 1:
    if(temp==pal) cout<<"The String is the Palindrome";
    else cout<<"The String is not the Palindrome";


    // Method 2:
    // int flag = 0;
    //  while(!temp.empty() && !pal.empty()){
    //     if(pal.top()!=temp.top()){
    //         flag=1;
    //         break;
    //     }
    //     temp.pop();
    //     pal.pop();
    // }

    // if(flag) cout<<"The String is the Palindrome";
    // else cout<<"The String is not the Palindrome";

    
}