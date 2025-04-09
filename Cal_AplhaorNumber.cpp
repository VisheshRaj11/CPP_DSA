#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;

    int aplha = (int)ch;

    if(aplha>=65 && aplha<=90){
        cout<<"The given character is the alphabet";
    }

    else if(aplha>=97 && aplha<=122){
        cout<<"THe given number is the alphabet";
    }
    else{
        cout<<"Invalid input";
    }
}