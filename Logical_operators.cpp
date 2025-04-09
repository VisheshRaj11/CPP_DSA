#include<iostream>
using namespace std;
int main(){
    //Logical operators are(&&,||/or,and)
    int x;
    cin>>x;
    //Three digit number
    if(x>99 && x<1000){
        cout<<"This is the three digit number";
    }
    else{
        cout<<"Not a three digit number";
    }
}