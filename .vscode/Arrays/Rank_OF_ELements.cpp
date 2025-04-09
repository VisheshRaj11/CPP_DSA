#include <bits/stdc++.h>
using namespace std;

void convert(int arr[],int n){
    vector<pair<int,int>> IndexValue;
    for(int i=0;i<n;i++){
        IndexValue.push_back({arr[i],i});
    }
    
    sort(IndexValue.begin(),IndexValue.end());

    int restore[n];
    
    for(int i=0;i<n;i++){
        restore[IndexValue[i].second] = i;
    }
    
    cout<<"Converted Array: ";
    for(int i=0;i<n;i++){
            cout<<restore[i]<<" ";
        }
    
}

int main(){
    int n;
    cin>>n;
    if(n<=0){ cout<<-1;}
    
    else{
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 
        cout<<"Input Array: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
        convert(arr,n);
    }
}
