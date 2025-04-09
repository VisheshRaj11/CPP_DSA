#include <iostream>
#include <string> 
using namespace std;

void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool flag  = true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag) break;
    }
}

void smallDiff(int arr[],int n){
    
    int minDiff = arr[1]-arr[0];
    for(int i=0;i<n-1;i++){
        int diff = arr[i+1]-arr[i];
        if(diff < minDiff) minDiff = diff;
    }
    cout<<minDiff;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    smallDiff(arr,n);
}

