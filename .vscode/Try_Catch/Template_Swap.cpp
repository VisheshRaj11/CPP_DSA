#include <bits/stdc++.h>
using namespace std;

template<class T>
void swapTwo(T& a,T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int num1,num2;
    cin>>num1>>num2;
    swapTwo<int>(num1,num2);
    cout<<num1<<" "<<num2;
}