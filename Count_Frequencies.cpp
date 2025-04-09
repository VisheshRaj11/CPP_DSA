#include <iostream>
using namespace std;

void freq(int arr[],int n){
    int freq[n]={0};
    for(int i=0;i<n;i++){
       freq[arr[i]]++;
    }

    for(int ele:freq){
        if(ele>0)
        cout<<ele<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    freq(arr,n);
}