#include <bits/stdc++.h>
using namespace std;

struct HashEntry{
    int key;
    bool isOccupied;
};

void initialize(HashEntry hashTable[],int tableSize){
    for(int i = 0;i<tableSize;i++){
        hashTable[i].key = -1;
        hashTable[i].isOccupied = false;
    }
}

int hashFunction(int tableSize,int key){
    return key%tableSize;
}

void insertKey(HashEntry hashTable[],int tableSize,int key){
    int idx = hashFunction(tableSize,key);

    while(hashTable[idx].isOccupied){
        idx = (idx+1)%tableSize;
    }

    hashTable[idx].key = key;
    hashTable[idx].isOccupied = true;
    cout<<"The key: "<<key<<" inserted at index: "<<idx;
}

void displayTable(HashEntry hashTable[],int tableSize){
    cout<<"Hash Table: ";
    for(int i =0;i<tableSize;i++){
        if(hashTable[i].isOccupied){
            cout<<"Index: "<<i <<hashTable[i].key<<endl;
        }
        else cout<<"Index: "<<i<<" is empty"<<endl;
    }
}

int main(){
    int tableSize;
    cin>>tableSize;

    HashEntry* Table = new HashEntry[tableSize];
    
    //Initailization is must:
    initialize(Table,tableSize);

    int choice,key;
    while(true){
        cin>>choice;
        switch(choice){
            case 1:{
                cin>>key;
                insertKey(Table,tableSize,key);
                break;
            }
            case 2:{
                displayTable(Table,tableSize);
                break;
            }

            case 3:{
                cout<<"Exiting the Program "<<endl;
                delete[] Table;
                return 0;
            }

            default:
            cout<<"Invalid Choice"<<endl;

        }
    }
}