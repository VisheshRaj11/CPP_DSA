#include <bits/stdc++.h>
using namespace std;

void test(int x){
    try{
        if(x>0 || x%2==0 || x%2!=0) throw x;
        else if(x<0) throw x;
        else if(x==0) throw x;
    }
    catch(...){
        cout<<"Exception is caught"<<endl;
    }
}

int main(){
    test(1);
    test(2);
    test(0);
    test(-5);
}