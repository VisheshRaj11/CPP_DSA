#include <bits/stdc++.h>
using namespace std;

void swap(int* x,int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void maxHeapify(int heap[],int size,int i){
    int largest = i;
    int left = 2*i+1;
    int right  = 2*i+2;
    if(left<size &&heap[left]>heap[largest]) largest = left;
    if(right<size &&heap[right]>heap[largest]) largest = right;
    if(largest!=i){
        swap(&heap[i],&heap[largest]);
        maxHeapify(heap,size,largest);
    }
}

void buildMaxHeap(int heap[],int size){
    for(int i = (size/2)-1;i>=0;i--){
        maxHeapify(heap,size,i);
    }
}

void maxSort(int heap[],int size){
    buildMaxHeap(heap,size);
    for(int i=size-1;i>0;i--){
        swap(&heap[0],&heap[i]);
        maxHeapify(heap,i,0);
    }
}

void printHeap(int heap[],int size){
    for(int i=0;i<size;i++){
        cout<<heap[i]<<" ";
    }
}

int main(){
    int b;
    cin>>b;
    int heap[b];
    for(int i=0;i<b;i++){
        cin>>heap[i];
    }
    maxSort(heap,b);
    printHeap(heap,b);
}