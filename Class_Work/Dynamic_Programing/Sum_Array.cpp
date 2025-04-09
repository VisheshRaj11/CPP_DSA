#include <bits/stdc++.h>
using namespace std;

int main(){
    int* n = NULL;
    n = new int;

    int* arr = NULL;
    arr = new int[*n];

    if(n!=NULL && arr!=NULL){
        cin>>*n;
        int sum=0;
        for(int i=0;i<*n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        cout<<"The sum of array is given as: "<<sum;
        
    }else{
        cout<<"The memory is not allocated.";
    }

    delete n;
    delete[] arr;
}