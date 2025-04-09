#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int temp = n;
    int len = 0;

    while(n>0){
        len++;
        n = n/10;
    }

    n = temp;

    int sum = 0;
    while(n>0){
        int rem = n%10;
        sum += static_cast<int>(pow(rem,len));
        n = n/10;
    }

    return temp==sum;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
    if(isArmstrong(arr[i])) cout<<arr[i]<<" is the amrstrong number"<<endl;
    else cout<<arr[i]<<" is not the armstrong number"<<endl;
    }

}