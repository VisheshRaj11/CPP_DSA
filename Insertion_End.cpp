#include <iostream>
using namespace std;
int main(){
    int n,insert;
    //We need give the less value to the n:Then the array (n-1);
    cin>>n;
    cin>>insert; 
    int arr[10];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    //Insertion at the end:
    arr[n] = insert;
    n++;
    
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
   
}
