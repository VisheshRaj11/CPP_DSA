#include <iostream>
using namespace std;

void removeElement(int arr[],int n,int position){
    for(int i=0;i<n;i++){
        if(i == position){
            arr[position] = arr[position+1];
        }
    }
}

int main(){
    int n,position;
    cin>>n>>position;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    removeElement(arr,n,position);

    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }


}