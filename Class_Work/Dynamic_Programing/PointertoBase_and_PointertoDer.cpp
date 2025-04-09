#include <bits/stdc++.h>
using namespace std;

class BC{
    public:
    void printBC(){
        cout<<"Printing in the base class"<<endl;
    }

    void show(){
        cout<<"Show of base"<<endl;
    }
};

class DC:public BC{
    public:
    void printDC(){
        cout<<"Printing in the derieved class"<<endl;
    }

    void show(){
        cout<<"Show of derieved"<<endl;
    }
};

int main(){
    BC* bptr;
    BC base;
    bptr = &base;
    bptr->show();

    DC* derieved;

    // bptr = &derieved;
    // bptr->printDC();

    bptr->show();

    DC* dptr;
    // dptr = &derieved;
    cout<<"dptr is the pointer of derievd one"<<endl;
    dptr->show();
    dptr->printDC();
    ((DC*)bptr)->show();
    ((DC*)bptr)->printDC();

    // dptr=&base;


}