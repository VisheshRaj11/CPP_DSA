#include <bits/stdc++.h>
using namespace std;

template<class T1,class T2>
void product(T1 num1,T2 num2){
    cout<<"Product of two numbers: " <<num1*num2;
}

// mulitple template for different data type.

int main(){
    int num1 = 50;
    float num2 = 50;
    product<int,float>(num1,num2);

}