#include <bits/stdc++.h>
using namespace std;

template<class T>
int findmin(T a,T b){
   return(a<b?a:b);
}

int main(){
    int num1=2,num2 =3;
    cout<<"int: "<<findmin<int>(num1,num2)<<endl;
    cout<<"float:"<<findmin<float>(num1,num2);
}
