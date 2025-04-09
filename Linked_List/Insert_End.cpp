#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};


void insertBeg(node*& head,int data){
    node* node1 = new node();
    node1->data = data;
    node1->next = head;
    head = node1;
}

void insertEnd(node*& head,int data){
    node* node1 = new node();
    node1->data = data;
    node1->next = NULL;

    //empty:
    if(head==NULL){
        head = node1;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = node1;
}

void printLinkedList(node* head){
    node* temp = head;
    cout<<"Linked List Elements: ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
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
    insertEnd(head,20);
    printLinkedList(head);
}