#include <bits/stdc++.h>
using namespace std;

void sorting(int arr[],int n,int start,int end){

    // bool flag = true;
    for(int i=start;i<end;i++){
        for(int j = start;j<end-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    
    for(int i = 0;i< n;i++){
        cout<<arr[i]<<" ";
    }
}
bool sorted(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]) return false;
        }
    }
    return true;
}

void patch(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]) continue;
        else {
            count++;
            patch(arr,n);
        }
    }
    cout<<count<<endl;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int end,start;
    cin>>start>>end;
    sorting(arr,n,start,end);
    cout<<endl;
    if(sorted(arr,n))  cout<<endl<<"The array is sorted "<<endl;
    patch(arr,n);
}