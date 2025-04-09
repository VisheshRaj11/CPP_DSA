#include <iostream>
using namespace std;

void countFreq(int arr[],int n,int key){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == key) count++; 
    }
    cout<<"The number of occurence of the key element is: "<<count;
}

int main(){
    int n,key=2;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countFreq(arr,n,key);
}