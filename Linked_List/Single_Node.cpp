#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

struct node* create(int value){
    struct node* node1 = new node();
    node1->data = value;
    node1->next = NULL;
    return node1;
}

void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    struct node* head = create(10);
    print(head);
}

