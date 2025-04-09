#include <bits/stdc++.h>
using namespace std;

template<class T>
class abc
{
    T a, b;
    public:
    abc(T x,T y){
        a = x;
        b = y;
    }

    void swap(T& a,T& b){
        T temp = a;
        a = b;
        b = temp;
        cout<<a<<" "<<b;
    }
};

int main(){
    abc<int> obj1(20,30);
    // obj1.swap();

}