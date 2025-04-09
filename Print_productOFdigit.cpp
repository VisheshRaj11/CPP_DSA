#include<iostream>
using namespace std;
int main(){
    int n,pro=1,rem;
    cout<<"Enter the number here: ";
    cin>>n;

    while(n>0){
        rem  = n%10;   //Gives last digit
       pro *=rem;
        n = n/10;      //Remove last digit.
    }
    cout<<"The sum of the given digit are: "<<pro;
}