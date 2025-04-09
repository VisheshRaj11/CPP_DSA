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

void deletionEnd(node*& head){
    if(head==NULL){
        cout<<"The LinkedList is Empty"<<endl;
        return;
    }

    if(head->next==NULL){
        delete head;
        head->next = NULL;
        return;
    }

    node* temp = head;
    // Traverse to second Last Node: 
    while(temp->next->next!=NULL){
        temp = temp->next;
    }

    cout<<"The Delete Node is: "<<temp->next->data<<endl;
    delete temp->next;
    temp->next = NULL;
    }

void printLinkedlist(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){
    node* head = NULL;
    int data;
    while(true){
        cin>>data;
        if(data<0) break;
        insertBeg(head,data);
    }
    deletionEnd(head);
    printLinkedlist(head);
}