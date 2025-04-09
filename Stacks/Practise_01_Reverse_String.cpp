#include <iostream>
#include <stack>
using namespace std;

int main(){

    Method1:
    stack<char> stk;
    char ch;
    int n=5;

    for(int i=0;i<n;i++){
        cin>>ch;
        stk.push(ch);
    }

    while((!stk.empty())){
        cout<<stk.top();
        stk.pop();
    }

    // //Method2:
    // string s;
    // cin>>s;

    // stack<char> stk;

    // for(int ch: s){
    //     stk.push(ch);
    // }

    // string s1;

    // while(!stk.empty()){
    //     s1+=stk.top();
    //     stk.pop();
    // }

    // cout<<s1;
    
}