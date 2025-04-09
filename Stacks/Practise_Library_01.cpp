#include <iostream>
#include <stack>
using namespace std;

int main(){
    
    //creation.
    stack<int> stk;

    //Stack Size.
    stk.size();
    
    //To push:
    int n;
    cin>>n;
    stk.push(n);

    //To pop:
    stk.pop();

    //Check for empty:
    stk.empty();

    //Check for top element:
    stk.top();

}