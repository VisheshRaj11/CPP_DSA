#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the number here: ";
    cin>>n;
    
    while(n>0){
        n /= 10;
        count++;
        
    }
    cout<<count;


}