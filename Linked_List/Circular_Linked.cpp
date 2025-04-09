#include<bits/stdc++.h>
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

void insertNode(node*& head,int data){
    node* node1 = createNode(data);
    
    if(head==NULL){
        head = node1;
        node1->next = head;
        return;
    }
    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = node1;
    node1->next = head;
}

void deleteByValue(node*& head,int key){
    if(head==NULL) return;

    node* temp = head;
    node* prev = NULL;

    // IF there is only one node to delete.
    if(temp->data==key && temp->next == head){
        delete temp;
        head=NULL;
        return;
    }

    //If node to delete is head.
    if(temp->data==key){
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = head->next;
        delete head;
        head = temp->next;
        return;
    }

    //if node to delete is other than head.
    while(temp->next!=head && temp->data!=key){
        prev = temp;
        temp = temp->next;
    }
    if(temp->data==key){
        prev->next = temp->next;
        delete temp;
    }
    else cout<<"Node is not found"<<endl;

}

void display(node*& head){
    if(head==NULL) return;
    node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main(){
    int x;
    node* head = NULL;
    while(true){
        cin>>x;
        if(x<0) break;
        insertNode(head,x);
    }
    display(head);
    deleteByValue(head,30);
    display(head);
}