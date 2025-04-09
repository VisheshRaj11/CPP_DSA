#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int x = a-b;

    try
    {
        if(x!=0){
            cout<<"Result: "<<a/x;
        }
        else{
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<"Exception Catched "<<x;
    }
    cout<<"end";
    
}
