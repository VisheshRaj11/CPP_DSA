#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem;
    cout<<"Enter the number here: ";
    cin>>n;

    while(n>0){
        rem = n%10;   //Gives last digit
        rev = rev*10 + rem;  //To reverse..
        n = n/10;      //Remove last digit.
    }
    cout<<"The reverse of the given digit are: "<<rev;
}