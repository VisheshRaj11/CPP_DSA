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
//---------------------------------------
void insertEnd(node** header,int data){
    node* node1 = create(data);
    if((*header)->next==NULL){
        (*header)->next = node1;
        (*header)->data++;
        return;
    }
    node* temp = *header;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = node1;
    (*header)->data++;
}

//---------------------------------------
void insertBeg(node** header,int data){
    node* node1 = create(100);
    node1->next = (*header)->next;
    (*header)->next = node1;  
    (*header)->data++; 
    
}

//----------------------
void insertRandom(node** header,int data,int pos){
    node* node1 = create(data);
    if((*header)->next==NULL){
        (*header)->next = node1;
        (*header)->data++;
        return;
    }

    if(pos==1){
        insertBeg(header,data);
        return;
        // (*header)->data++;
    }

    node* temp = (*header)->next;
    for(int i=1;i<pos-1 && temp->next!=NULL;i++){
        temp = temp->next;
    }
    node1->next = temp->next;
    temp->next = node1;
    (*header)->data++;
}

//----------------------------------
void deleteBeg(node** header){
    if((*header)->next==NULL) return;
    node* temp = (*header)->next;
    (*header)->next = temp->next;
    delete temp;
    (*header)->data--;
}
//---------------------------------
void deleteEnd(node** header){
    if((*header)->next==NULL) return;
    node* temp = (*header)->next;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    (*header)->data--;
}

//------------------------------
void deleteRandom(node** header,int pos){
    if((*header)->next==NULL) return;
    if(pos==1){
        node* temp = (*header)->next;
        (*header)->next = temp->next;
        delete temp;
        (*header)->data--;
    }
    node* temp = (*header)->next;
    node* pre = NULL;
    for(int i=1;i<pos-1 && temp->next!=NULL;i++){
        pre = temp;
        temp = temp->next;
    }
    
    pre->next = temp->next;
    delete temp;
    (*header)->data--;

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

    node* header = create(0);

    int data;

    for(int i=1;i<=n;i++){
        cin>>data;
        insertEnd(&header,data);
    }

    insertBeg(&header, 100);

    insertRandom(&header,500,3);

    deleteBeg(&header);

    deleteEnd(&header);

    deleteRandom(&header,3);

    print(header);
}