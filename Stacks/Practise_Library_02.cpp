#include <iostream>
#include <stack>
using namespace std;

int main(){
    int choice,value;

    stack<int> stk;
    
    while(true){
        cin>>choice;

        switch(choice){
            case 1:
            cin>>value;
            cout<<value<<" is the pushed onto the stack";
            stk.push(value);
            break;

            case 2:
            if(stk.empty()) cout<<"Stack Underflow";
            else{
                cout<<stk.top()<<" is the popped element.";
                stk.pop();
            }
            break;

            case 3:
            if(stk.empty()) cout<<"Stack is empty.";
            else{
                stack<int> temp;
                while(!stk.empty()){
                    temp.push(stk.top());
                    stk.pop();
                }
                
                while(!temp.empty()){
                    cout<<temp.top();
                    temp.pop();
                }
            }
            break;

            case 4:
            return 0;
            break;

            default:
            cout<<"Invalid Choice";
        }
    }
}
