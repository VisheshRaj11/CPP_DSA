#include <iostream>
using namespace std;

//For the deletion at random
struct node* deletePosi(node** head,int position){
    //if head null:
    if(*head==NULL) return;
    //If positon =1:
    if(position==1){
        //Use deletion at beginning
        deletebeg(&head);
    } 
    //Make temp variable:
    node* temp = *head;

    //Initially the previous one is null.
    node* previous = NULL;

    //Here we have to traverse upto position.
    for(int i=1;i<position && temp->next!=NULL){
        //Now temp shift one forward. so previous = temp
        previous = temp;
        //One forward
        temp = temp -> next;
        //Linked the previous and remaining node after deletion.
        previous->next = temp->next;
        delete temp;

        return head;
    }


}