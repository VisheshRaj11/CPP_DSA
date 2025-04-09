#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int arr[n1],brr[n2],crr[n1+n2];
    for(int i=0;i<n1;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n2;i++){
        cin>>brr[i];
    }

    //Now storing the array arr in crr:
    for(int i=0;i<n1;i++){
        crr[i] = arr[i];
    }

    //Now storing the value of brr in crr:
    for(int i=0;i<n2;i++){
        crr[n1+i] = brr[i];
    }

    for(int i=0;i<n1+n2;i++){
        cout<<crr[i]<<" ";
    }
}