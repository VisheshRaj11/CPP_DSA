#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int target){
        int lo = 0,hi = n-1;
        while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid]>target) hi = mid-1;
        else lo = mid+1;
    }
}

int main(){
    int n,target;
    cin>>n>>target;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int found = binarySearch(arr,n,target);
    cout<<"The element found at the index: "<<found;

    
}