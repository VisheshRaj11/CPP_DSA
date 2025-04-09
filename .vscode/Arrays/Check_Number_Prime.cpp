#include <iostream>
using namespace std;

bool isprime(int num){
    if(num<=1) return false;

    for(int i=2;i*i<=num;i++){
        if(num%i==0) return false;
    }
    //Example->if num = 2 Then check i=2--->>i*i<=num--->>2*2<=4-->false(Loop does not execute).

    return true;
}

int main(){
    int count;
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   

    for(int i=0;i<n;i++){
        if(isprime(arr[i])){
            cout<<arr[i]<<" is the prime number"<<endl;
        }
        else cout<<arr[i]<<" is not a prime number"<<endl;
    }
  }