#include <bits/stdc++.h>
using namespace std;

template<class T>
int sum(T arr[]){
    int sum = 0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    return sum;
}

template<class Type>
void read(Type a[]){
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
}

int main(){
    int arr[5];
    float arr1[5];
    read<int>(arr);
    cout<<"Sum of the array is : "<<sum<int>(arr);
    read<float>(arr1);
    // cout<<"Sum of the array is : "<<sum<float>(arr);
   
}
