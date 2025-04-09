#include <iostream>
using namespace std;
int main(){
    int n,j,insert;
    cin>>n>>j;
    
    cin>>insert; 
    int arr[10];
    

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //First shift the element of that index where you want to insert the value;
    for(int i=0;i<n;i++){
        if(i==j){
            arr[i+1] = arr[i];
        } 
    }
    
    arr[j] = insert;
    
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    
}
