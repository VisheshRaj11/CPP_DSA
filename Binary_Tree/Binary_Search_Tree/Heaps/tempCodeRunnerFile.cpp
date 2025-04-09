#include <bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void minHeapify(int heap[],int size, int i){
        int smallest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        if(left<size && heap[left]<heap[smallest]) smallest = left;
        if(right<size && heap[right]) smallest = right;

        if(smallest!=i){
            swap(&heap[i],&heap[smallest]);
            minHeapify(heap,size,smallest);
        }
}

void buildMinHeap(int heap[],int size){
    for(int i=(size/2)-1;i>=0;i--){
        minHeapify(heap,size,i);
    }
}

void heapSort(int heap[],int size){
    buildMinHeap(heap,size);
    for(int i = size-1;i>=0;i--){
        swap(&heap[0],&heap[i]);
        minHeapify(heap,i,0);
    }
}

void printHeap(int heap[],int size){
    for(int i=0;i<size;i++){
        cout<<heap[i]<<" ";
    }
}

int main(){
    int x;
    cin>>x;
    int heap[x];
    for(int i=0;i<x;i++){
        cin>>heap[i];
    }
    heapSort(heap,x);
    printHeap(heap,x);

}