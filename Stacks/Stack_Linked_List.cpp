#include <iostream>
using namespace std;

// There is no concept of overflow in terms of linked_list : Because it is a dynamic memory allocation.

/// Here we create a struct:
struct node
{
    int value;
    node* next;
};

node* top = NULL;

//To push the value:
void push(int value){
    node* node1 = new node();
    node1->value = value;
    node1->next = top;
    //*** 
    top = node1;
    cout<<"Pushed Value: "<<value<<endl;
}

void pop(){
    if(top==NULL){
        cout<<"Underflow/Stack is empty."<<endl;
    }
    else{
        node* temp = top;
        top = top->next;
        cout<<"Popped Value is: "<<temp->value<<endl;
        delete temp;
    }
}

void display(){
    if(top==NULL) {
        cout<<"Stack is empty.";
    }
    node* temp = top;

        
    cout<<"Stack: ";
     while(temp!=NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
     }
}


//To delete the whole stack:
void initStack(){
    while(top!=NULL){
        node* temp = top;
        top = top->next;
        delete temp;
    }
}

int main(){
    // int value;

    // for(int i=0;i<5;i++){
    //     cin>>value;
    //     push(value);
    // }

    // By using while loop:
    int choice,value;
    while(true){
        cin>>choice;
        switch (choice){

            case 1:
            cin>>value;
            push(value);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            initStack();
            cout<<"Exiting the program.";
            break;

            default:
            cout<<"Invalid Choice.";
            
         }
    }
    // cout<<"Stack is given as: ";
    // for(int i=0;i<3;i++){
    //     pop();
    // }


    // display();
}