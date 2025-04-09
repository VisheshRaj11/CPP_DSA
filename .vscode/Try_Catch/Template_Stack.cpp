#include <bits/stdc++.h>
using namespace std;

template<class T>
class Stack{
    private:
    T arr[100];
    int topIdx;

    public:
    Stack(){
        topIdx = -1;
    }

    void push(T value){
        if(topIdx>=99){
            cout<<"Stack is Overflow"<<endl;
            return;
        }
        arr[++topIdx] = value;
        cout<<"Pushed Value"<<value<<endl;
    }


    void pop(){
        if(topIdx<0){
            cout<<"Stack is underflow"<<endl;
            return;
        }
        int remove = arr[topIdx--];
        cout<<"Pop element is: "<<remove<<endl; 
    }
};

int main(){
  Stack<int> stk;
  int choice;
  
    while(true){
        cin>>choice;
        switch(choice){
            case 1:{
                int data;
                cin>>data;
                stk.push(data);
                break;
            }
            case 2:{
               float data;
                cin>>data;
                stk.push(data);
                break;
            }
            case 3:{
                char data;
                cin>>data;
                stk.push(data);
                break;
            }

            case 4:{
                stk.pop();
            }

            default:
            cout<<"Invalid Choice"<<endl;
        }
    }
//    stk.push(20);
//    stk.push(40);
//    stk.push(50);
//    stk.pop();
//    stk.pop();
}


















