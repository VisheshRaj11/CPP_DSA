#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x<0){
        cout<<"Absolute value: "<<-(x);
    }
    else if(x==0){
        cout<<"zero";
    }
    else{
        cout<<"Absolute value: "<<x;
}
}