#include <bits/stdc++.h>
using namespace std;

template<class T>
void display(T x){
    cout<<"Template display"<<x<<endl;
}


template<class T1,class T2>
void display(T1 a,T2 b){
    cout<<"Template :"<<a<<" "<<b<<endl;
}

template<class T1,class T2,class T3>
void display(T1 x,T2 y,T3 z){
    cout<<"Template: "<<x<<" "<<y<<" "<<z;
}

void display(int x){
    cout<<"Ordinary Function :"<<x<<endl;
}
void display(char x){
    cout<<"Ordinary Function :"<<x<<endl;
}

int main(){
    display(100);
    display(50,50);
    display('a');
    display(100,22,33);
}

