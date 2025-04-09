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

void insertEnd(node*& head,int data){
    node* node1  = createNode(data);
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

void insertRandom(node*& head,int data,int position){
    node* node1 = createNode(data);
    if(head==NULL || position==1){
        node1->next = head;
        head = node1;
        return;
    }
    int current = 1;
    node* temp = head;
    while(temp!=NULL && current<position-1){
        temp = temp->next;
    }
    node1->next = temp->next;
    temp->next = node1;
}

void deleteBeg(node*& head){
    if(head==NULL) {
        cout<<"The LinkedList is empty"<<endl;
        return;
    }
    node* temp = head;
    cout<<"The delete node is: "<<temp->data<<" ";
    head = head->next;
    delete temp;
}

void deleteEnd(node*& head){
    if(head==NULL){
        cout<<"The LinkedList is empty."<<endl;
    }
    node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    cout<<"The delete node is: "<<temp->next->data<<" ";
    delete temp->next;
    temp->next = NULL;
}

void deleteRandom(node*& head,int position){
   if(head==NULL){
    cout<<"The LinkedList is empty."<<endl;
    return;
   }

   if(position<=1){
    node* temp = head;
    head = head->next;
    delete temp;
    return;
   }

   node* temp = head;
   int current = 1;
   while(temp->next!=NULL && current<position-1){
    temp = temp->next;
   }
   if(temp==NULL){
    cout<<"The LinkedList is out of bound"<<endl;
   }else{
    node* delNode = temp->next;
    cout<<"The deleted node is: "<<delNode->data<<" ";
    temp->next = delNode->next;
    delete delNode;
   }
    
}

void display(node*& head){
    node* temp = head;
    cout<<"The LinkedList is given as: ";
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
        if(x%2==0){
        insertBeg(head,x);
        }
    }
    display(head);
}