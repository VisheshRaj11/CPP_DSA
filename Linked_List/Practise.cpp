#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* createNode(int data){
    Node* node1 = new Node();
    node1->data = data;
    node1->next = NULL;
    return node1;
}

void insert(Node*& head,int data){
    Node* node1 = createNode(data);
    if(head==NULL){
        node1->next = head;
        head = node1;
    }
    else{
        Node* temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        temp->next = node1;
    }
}

void deleteBeg(Node*& head){
    if(head==nullptr) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd(Node*& head){
    if(head==nullptr) return;
    if(head->next==nullptr){
        delete head;
        head->next = nullptr;
        return;
    }
    Node* temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = NULL;
}

void deleteRan(Node*& head,int pos){
    if(head==nullptr) return;
    if(head->next==nullptr || pos == 1){
        deleteBeg(head);
        return;
    }
    Node* temp = head;
    int current = 1;
    while(temp!=nullptr && current<pos-1){
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

void display(Node*& head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    Node* head = nullptr;
    int n;
    while(true){
        cin>>n;
        if(n<0) break;
        insert(head,n);
    }
    display(head);
    deleteBeg(head);
    display(head);
    deleteEnd(head);
    display(head);
    deleteRan(head,2);
    display(head);

}