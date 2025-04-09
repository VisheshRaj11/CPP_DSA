#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*next;
};

void insertNodeBeg(node*& head,int data,int& count){
    node* node1 = new node();
    node1->data = data;
    node1->next = head;
    head = node1;
}

void printLinkedList(node* head){
    node* temp = head;
    cout<<"Linked List: ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    int x;
    int count = 0;
    while(true){
        cin>>x;
        if(x<0) break;
        insertNodeBeg(head,x,count);
    }
    printLinkedList(head);
}