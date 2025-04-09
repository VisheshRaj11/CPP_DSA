#include <iostream>
using namespace std;

void diagElement(int arr[3][3],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j) cout<<"The diagonal elements is given as: "<<arr[i][j]<<" ";
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[3][3];
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    diagElement(arr,n,m);
}