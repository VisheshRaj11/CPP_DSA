#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    if(arr[n]){
        arr[n-1] = arr[n];
    }

   for(int i=0;i<n-1;i++){
    cout<<arr[i]<<" ";
   }
}