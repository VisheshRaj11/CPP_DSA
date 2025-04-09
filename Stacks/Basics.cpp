#include <iostream>
using namespace std;

//For stack size:
#define MAX 100

int stack[MAX];
int top = -1;

//To add the value in the stack:
void push(int value){
    if(top>=MAX-1){
        cout<<"Stack Overflow";
    }
    else{
        stack[++top] = value;
        cout<<"Inserted Value: "<<value<<endl;
    }
}

void pop(){
    if(top<0){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        int removed = stack[top--];
        cout<<"Popped Value: "<<removed<<endl;
    }
}

int peek(){
    if(top<0){
         cout<<"Stack is empty"<<endl;
        return -1;
    } 
    else{
        return stack[top];
    } 
 }

 bool isempty() {
    return top == -1;
 }

//For the printing:
 void print(){
    if(top==-1){
        cout<<"Stack is empty";
    }

    for(int i=0;i<=top;i++){
        cout<<stack[i]<<" ";
    }
 }


 int main(){
    int n;
    cin>>n;
    int value;

    for(int i=0;i<n;i++){
        cin>>value;
        push(value);
    }

    cout<<"Top Element is: "<<peek()<<endl;

    pop();

    cout<<"Top Element is: "<<peek()<<endl;

    print();

 }
