#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    //Three digit number
    if(x%5==0 && x%3==0){
        cout<<"This is divisible by 3 and 5";
    }
    else{
        cout<<"This is not divisible by 3 AND 5";
    }
}