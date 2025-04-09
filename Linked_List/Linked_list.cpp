#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

int main(){

    //Linked_List One.
    node  *head1 = new node();
    head1->data = 1;
    head1->next = new node();
    head1->next->data = 2;
    head1->next->next = NULL; 

    //Linked_List Two:
    node *head2 = new node();
    head2->data = 3;
    head2->next = new node();
    head2->next->data = 4;
    head2->next->next = NULL;

   // Now make the second node of list point to the head of the head2.
    head2->next->next = head2;

    //Print it :
    node *current = head1;
    while(current != NULL){
        cout<<current->data<<" ";
        current = current->next;
    }

}