#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;

    if(a>=b){
        if(a>=c){
            cout<<"a is greater";
        }
        else{
            cout<<"c is greater";
        }
    }
    else{
        if(b>=c){
            cout<<"b is greater";
        }
        else{
            cout<<"c is greater";
        }
    }
}