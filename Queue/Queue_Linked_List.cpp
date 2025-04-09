#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* front = NULL;
node* rear = NULL;

void enqueue(int value){
    node* node1 = new node();
    node1->data = value;
    node1->next = NULL;

    if(rear==NULL) {
        front=rear=node1;
    }
    else{
        rear->next = node1;
        rear = node1;
    }
    cout<<"Enqueued Value is: "<<value<<endl;
}

void dequeue(){
    if(front==NULL){
        cout<<"Queue is empty"<<endl;
        return;
    }
    node* temp = front;
    front = front->next;
    if(front==NULL) rear=NULL;
    cout<<"Dequeued Element is: "<<temp->data<<endl; 
}

void display(){
    if(front==NULL) {
        cout<<"The queue is empty"<<endl;
        return;
    }
    node* temp = front;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    enqueue(30);
    enqueue(50);
    enqueue(202);
    dequeue();
    display();
}