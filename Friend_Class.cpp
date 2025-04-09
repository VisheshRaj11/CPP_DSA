#include <iostream>
using namespace std;

class A
{
    int a,b;
    public:
        void output(){
            cout<<a<<" "<<b;
        }
    friend class B;
        
};

class B
{
    int c;
    public:
    void ip(A &obj){
        obj.a = 23;
        obj.b = 24;
        
    }
};


int main(){
    A objA;
    B obj1;
    obj1.ip(objA);
    objA.output();
}

