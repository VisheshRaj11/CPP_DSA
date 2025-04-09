#include <iostream>
using namespace std;

bool isPrime(int n){
    //1 is not prime.
    if(n<=1) return false;

    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }

    return true;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(isPrime(arr[i])) cout<<arr[i]<<" is the prime number"<<endl;
        else cout<<arr[i]<<" is not the prime number"<<endl;
    }
}