#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

struct node* create(int data){
    node* node1 = new node();
    node1->data = data;
    node1->next = NULL;
    return node1;
}

void insertBeg(node** head,int data){
    node* node1 = create(data);
    node* temp = *head;
    node1->next = temp;
    *head = node1;
}

void reverse_list(node** head){
    node* temp = *head;
    node* pre = NULL;
    node* next = NULL;

    while(temp!=NULL){
        next = temp->next;
        temp->next = pre;
        pre = temp;
        temp = next;
    }
    *head = pre;
}

void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
    int n;
    cin>>n;

    int data;
    node* head = create(20);

    for(int i=1;i<=n;i++){
        cin>>data;
        insertBeg(&head,data);
    }
    cout<<"The list is given as: ";
    print(head);

    cout<<"The Reverse of the list is given as: ";
    reverse_list(&head);
    print(head);

}