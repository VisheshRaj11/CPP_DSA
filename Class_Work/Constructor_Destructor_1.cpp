#include <iostream>
using namespace std;

class A
{
    int x;
    public:

    A(){
        cout<<"Base Constructor"<<endl;
    }

    A(int a){
        x = a;
        cout<<"Calling Base Class parameterized "<<x<<endl;
    }

    ~A(){
        cout<<"Base Class Destructor"<<endl;
    }
};

class B:public A
{
    int i;
    public:
    B(){
        cout<<"Derieved Constructor"<<endl;
    }

    B(int p):A(p){
        i=p;
        cout<<"Calling Derieved Class parameterized "<<i<<endl;
    }

    ~B(){
        cout<<"Derieved  Class Destructor"<<endl;
    }
};

int main(){
    // B obj2(1); //Parameterized.Costructor Calls.
    B Obj1;       //Non_Parameterized Constructor Calls.

}



