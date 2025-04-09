#include <iostream>
using namespace std;

class A
{
public:
    A(){
        cout<<"Base Constructor(A)"<<endl;
    }

    ~A(){
        cout<<"Base Destructor(A)"<<endl;
    }
};

class B
{
public:
    B(){
        cout<<"Base Constructor(B)"<<endl;
    }

    ~B(){
        cout<<"Base Destructor(B)"<<endl;
    }
};

class C:public A,public B
{
public:
    C(){
        cout<<"Base Constructor(C)"<<endl;
    }

    ~C(){
        cout<<"Base Destructor(C)"<<endl;
    }
};

int main(){
    C obj;
}