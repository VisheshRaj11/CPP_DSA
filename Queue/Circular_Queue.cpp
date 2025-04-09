#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value){
    //Check for overflow.
    if((rear+1)%SIZE==front){
        cout<<"Queue Overflow"<<endl;
        return;
    }

    if(front==-1){
        front = 0;
    }
     rear = (rear+1)% SIZE;
     queue[rear] = value;
     cout<<"Enqueued Element: "<<value<<endl;
}

void dequeue(){
    //Check for underflow.
    if(front==-1){
        cout<<"Queue is empty"<<endl;
    }
   
   cout<<"Dequeued value: "<<queue[front]<<endl;


   //Means one element is remaining.
   if(rear==front){
    front = rear = -1;
   }

   else{
    front = (front+1)%SIZE;
   }
}

void display(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"Current Queue: ";
    int i = front;
    while(true){
        cout<<queue[i]<<" ";
        if(i==rear) break;
        i = (i+1)%SIZE;
    }
    cout <<endl;
}

int main(){
    int value;
    cin>>value;

    enqueue(value);
    dequeue();
    display();

}




