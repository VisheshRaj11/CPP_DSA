#include <iostream>
using namespace std;

void linearSearch(int arr[],int n,int target){
    bool flag = false;
    int idx = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            idx = i;
            flag = true;
            break;
        }
    }
    if(flag) cout<<"Element is found in the array: 5"<<idx;
    else cout<<"Element is not found in the array";
}

int main(){
    int n,target;
    cin>>n>>target;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    linearSearch(arr,n,target);
}