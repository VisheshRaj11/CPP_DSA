#include <bits/stdc++.h>
using namespace std;

class Base
{
    public:
    virtual void print(){
        cout<<"Print base class"<<endl;
    }

    void show(){
        cout<<"Show the base class"<<endl;
    }
};
class derieve:public Base
{
    public:
    void print(){
        cout<<"Print derieve class"<<endl;
    }

    void show(){
        cout<<"Show the derieve class"<<endl;
    }
};

int main(){
    Base* bptr;
    derieve d;
    bptr = &d;

    bptr->print();

    bptr->show();
}