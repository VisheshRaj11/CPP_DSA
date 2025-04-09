#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    // int f =1;  //It is used  to store the latest value of the i.
    // for(int i=1;i<n;i++){
    //     if(n%i==0){
    //         f = i;
    //     }
    //     else{
    //         continue;
    //     }
    // }
    // cout<<f;


    //Method 02:
    int f=1;  //same as above;
             
              //Here we use n/2 because we now that the factor of any numbers comes upto its half.
              //We have to move reverse because we have to find the highest common factor.
    for(int i=n/2;i>=1;i--){
        if(n%i==0){
            f = i;
            break;
        }
        else{
            continue;
        }
    }
    cout<<f;
}