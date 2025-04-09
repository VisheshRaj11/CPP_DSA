#include <iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp =arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int mindex = i;
        for(int j = i+1 ;j<n ;j++){
            if(arr[j]<arr[mindex]) mindex  = j;
        }
        swap(arr,i,mindex);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionSort(arr,n);

    for(int ele:arr){
        cout<<ele<<" ";
    }
}
