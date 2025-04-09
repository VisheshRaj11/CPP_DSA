#include <bits/stdc++.h>
using namespace std;

void readKeys(int keys[],int numKeys){
    for(int i = 0;i<numKeys;i++){
        cin>>keys[i];
    }
}

void initializeTable(int Hashtable[],int tableSize){
    for(int i = 0;i<tableSize;i++){
        Hashtable[i] = -1;
    }
}

void insertKey(int hashTable[],int tableSize,int key){
    int idx = idx%tableSize;
    int i = 0;
    while(hashTable[idx]!=-1){
        i++;
        idx = (idx+i*i)%tableSize;
    }
    hashTable[idx] = key;
}

void printTable(int hashTable[],int tableSize){
    for(int i = 0;i<tableSize;i++){
        if(hashTable[i]!=-1){
            cout<<hashTable[i]<<" ";
        }
    }
}


int  main(){
    const int tableSize = 10;
    int numKeys;
    cin>>numKeys;

    int keys[numKeys];
    readKeys(keys,numKeys);

    int hashTable[tableSize];
    initializeTable(hashTable,tableSize);

    for(int i = 0;i<numKeys;i++){
        insertKey(hashTable,tableSize,keys[i]);
    }

    printTable(hashTable,tableSize);
}