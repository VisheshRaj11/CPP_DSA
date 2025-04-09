#include <bits/stdc++.h>
using namespace std;
void divide(int a,int b,int c){
    if(a-b!=0){
        cout<<c/(a-b)<<endl;
    }
    else{
        throw(a-b);
    }
}
int main(){
    try {cout<<"In try block"<<endl;divide(10,20,30);divide(10,10,30);}
    catch(int i) { cout<<"Exception is Caught "<<i<<endl;}   
}