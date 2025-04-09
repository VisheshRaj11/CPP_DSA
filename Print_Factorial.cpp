#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  number here: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
            fact *=i;
    }
    cout<<fact;
}