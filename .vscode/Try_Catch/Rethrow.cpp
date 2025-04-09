#include <bits/stdc++.h>
using namespace std;
 
 void divide(double a,double b){
    try
    {
        if(b==0.0){
            throw b;
        }
        else cout<<a/b;
    }
    catch(double)
    {
        cout<<"Caught Double inside function"<<endl;
        throw ;
    }
    
 }

 int main(){
    try{
        divide(10.5,2.0);
        divide(20.0,0.0);
    }
    catch(double){
        cout<<"Caught double inside the main function"<<endl;
    }

    cout<<"End of the main"<<endl;
 }