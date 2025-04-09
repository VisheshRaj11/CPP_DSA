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

void deletionBeg(node*& head){
    if(head==NULL){
        cout<<"The LinkedList is Empty"<<endl;
        return;
    }
    node* temp = head;
    head = head->next;
    cout<<"The Delete Node is: "<<temp->data<<endl;
    delete temp;
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
    deletionBeg(head);
    printLinkedlist(head);
}