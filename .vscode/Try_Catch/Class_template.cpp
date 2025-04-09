#include <bits/stdc++.h>
using namespace std;

template<class T>
class abc{
    T a,b;
    public:
    abc(T x,T y){
       a = x;
       b = y;
    }

    T max1(){
        return(a>b?a:b);
    }
};

int main(){
    abc<int>obj(10,20);
    cout<<obj.max1()<<endl;
    abc<float>obj2(30,40);
    cout<<obj2.max1();
}