#include <bits/stdc++.h>
using namespace std;

class BC
{
    public:
    virtual void show(){
        cout<<"Show in the base class"<<endl;
    }
};
class DC:public BC
{
    public:
    virtual void show(){
        cout<<"Show in the derieve class"<<endl;
    }
};

int main(){
    BC* bptr;
    BC base;
    bptr = &base;
    bptr->show();

    DC derieve;
    bptr =&derieve;
    bptr->show();
}