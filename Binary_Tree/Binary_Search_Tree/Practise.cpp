#include <bits/stdc++.h>
using namespace std;

void swap(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}

void maxHeapify(int heap[],int size,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<size && heap[left]>heap[largest]) largest = left;
    if(right<size && heap[right]>heap[largest]) largest = right;
    if(largest!=i){
        swap(heap[i],heap[largest]);
        maxHeapify(heap,size,largest);
    }
}

void buildHeap(int heap[],int size){
    for(int i = size/2-1;i>=0;i--){
        maxHeapify(heap,size,i);
    }
}


void insertHeap(int heap[],int& size,int value){
    heap[size] = value;
    int i = (size);
    (size)++;
    while(i!=0 && heap[i]>heap[(i-1)/2]){
        swap(heap[i],heap[(i-1)/2]);
        i = (i-1)/2;
    }
}

void heapSort(int heap[],int size){
    buildHeap(heap,size);
    for(int i = size-1;i>0;i--){
        swap(heap[i],heap[0]);
        maxHeapify(heap,i,0);
    }
}

void printheap(int heap[],int n){
    for(int i = 0;i<n;i++){
        cout<<heap[i]<<" ";
    }
}

int main(){
    int x;
    cin>>x;
    int n = 0;
    int heap[n];
    for(int i = 0;i<x;i++){
        int value;
        cin>>value;
        insertHeap(heap,n,value);
    }
    // buildHeap(heap,n);
    cout<<"Before Sorting: ";
    printheap(heap,n);
    cout<<endl;
    cout<<"After sorting : ";
    heapSort(heap,n);
    printheap(heap,n);

}

