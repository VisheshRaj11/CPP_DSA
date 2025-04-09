#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& arr,int k){
    int n = arr.size();
    //Handle the cases where k>n;
    k = k%n;
    //Now make the temporary vector to store the value of the result.
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n] = arr[i];
    }
    //Now store it back to the original array.
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
}

void print(vector<int>& arr){
    int n = arr.size();

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    cout<<"Array before rotation: ";
    print(arr);

    rotate(arr,k);

    cout<<"Array after rotation: ";
    print(arr);
}