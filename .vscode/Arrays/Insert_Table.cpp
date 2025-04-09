#include <iostream>
using namespace std;


void insert(int arr[],int n,int value){
    for(int i=0;i<n;i++){
        arr[i] = value*(i+1);
    }

}

void print(int arr[],int n){
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,value;
    cin>>n;
    cout<<"Enter the value:";
    cin>>value;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insert(arr,n,value);

    print(arr,n);
}

