#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    try
    {
        if(n%2!=0){
            cout<<n;
        }
        else{
            throw(n);
        }
    }
    catch(int i)
    {
        cout<<"Exception is caught"<<i;
    }
    cout<<"end";
    
}