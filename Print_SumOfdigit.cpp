#include<iostream>
using namespace std;
int main(){
    int n,sum=0,rem;
    cout<<"Enter the number here: ";
    cin>>n;

    while(n>0){
        rem  = n%10;   //Gives last digit
        sum  = sum + rem;
        n = n/10;      //Remove last digit.
    }
    cout<<"The sum of the given digit are: "<<sum;
}