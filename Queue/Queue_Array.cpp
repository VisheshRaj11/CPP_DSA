#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 5

int que[MAX_SIZE];
int front=-1,rear=-1;

void enqueue(int value){
    if((rear+1)%MAX_SIZE==front){
        cout<<"Queue is overflow"<<endl;
        return;
    }
    // Initailize to both front and rear.
    if(front==-1) front = 0;
    rear = (rear+1)%MAX_SIZE;
    que[rear] = value;
    cout<<"The enqueued value is: "<<value<<endl;
}

void dequeue(){
    if(front==-1){
        cout<<"The queue is empty"<<endl;
        return;
    }
    cout<<"Dequeued ELement is: "<<que[front]<<endl;
    if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%MAX_SIZE;
    }
}

void display(){
    if(front==-1){
            cout<<"The queue is empty."<<endl;
        }
        cout<<"Queue Elements: ";
        int i = front;
        while(true){
            cout<<que[i]<<" ";
            if(i==rear) break;
            i = (i+1)%MAX_SIZE;
        }
    cout<<endl;
}

int main(){
    enqueue(20);enqueue(30); display(); dequeue();display();
}