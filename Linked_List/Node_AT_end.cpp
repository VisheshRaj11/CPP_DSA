#include <iostream>
using namespace std;

//EMPTY  STRUCTURE NODE:
struct node
{
 int data;
 struct node* next;
};

//NODE Create:
struct node* create(int value){
    struct node* node1 = new node();
    node1->data = value;
    node1->next = NULL;
    return node1;
}

//Insert Value;
struct node* insertAtEnd(node* head,int value){
    node* node1 = create(value);
    node* temp = head;

    if(temp==NULL) return node1;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node1;
    return head;
}

//Print List:
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node* head = NULL;
    head = insertAtEnd(head,400);
    print(head);

}