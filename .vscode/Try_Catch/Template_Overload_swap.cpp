#include <bits/stdc++.h>
using namespace std;

template<class T1,class T2>
void swap(T1& a,T2& b){
    int temp = a;
    a = b;
    b = temp;
}

void swap(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10,b = 20;
    swap(a,b);
    cout<<a<<" "<<b;
}