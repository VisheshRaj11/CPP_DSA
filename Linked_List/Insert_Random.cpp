#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* createNode(int data){
    node* node1 = new node();
    node1->data = data;
    node1->next = NULL;
    return node1;
}

void insertBeg(node*& head,int data){
    node* node1 = createNode(data);
    node1->next = head;
    head = node1;
}

void insertRandom(node*& head,int data,int position){
    node* node1 = createNode(data);

    if(head==NULL || position<=1){
        // insert Beg:
        insertBeg(head,data);
        return;
    }

    node* temp = head;
    int currentPosition = 1;
    while(temp!=NULL && currentPosition<position-1){
        temp = temp->next;
        currentPosition++;
    }
    if(temp==NULL){
        cout<<"LinkedList out of Bound";
    }
    else{
        node1->next = temp->next;
        temp->next = node1;
    }
}

void printLinkedList(node* head){
    node* temp = head;
    cout<<"LinkedList Elements: ";
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){
    node* head = NULL;
    int x;
    while(true){
        cin>>x;
        if(x<0) break;
        insertBeg(head,x);
    }
    insertRandom(head,100,3);
    insertRandom(head,120,2);
    printLinkedList(head);
}