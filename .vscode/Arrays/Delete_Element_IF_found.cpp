#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int delt;
    cin>>delt;
    
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==delt){
            flag = true;
            for(int j=i;j<n-1;j++){
                arr[j] = arr[j+1];
            }
            n--;
            i--;
        }
    }
    
    if(flag){
       for(int i=0;i<n;i++){
           cout<<arr[i]<<" ";
       }
       
    }
    else{
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }  
    
}