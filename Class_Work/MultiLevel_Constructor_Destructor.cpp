#include <iostream>
using namespace std;

// Order Will Be:A---->>B--->>C---->>D.:Constructor.
//Order : D-->>C-->>B-->>A.:Destructor.

class A
{
    int x,y;
    public:

    A(){
        cout<<"Base Constructor(A)"<<endl;
    }

    A(int r,int s){
        x = r;
        y = s;
        cout<<"Base Class Constructor(A)"<<x<<" "<<y<<endl;
    }

    ~A(){
        cout<<"Base Class Destructor(B)"<<endl;
    }
};

class B:public A
{
   int i,m;
    public:

    B(int p,int q,int r,int s):A(r,s){
        i = p;
        m = q;
        cout<<"Derieved Class(B)"<<i<<m<<endl;
    }


    B(){
        cout<<"Derieved Constructor(B)"<<endl;
    }

    ~B(){
        cout<<"Derieved  Class Destructor(B)"<<endl;
    }
};
class C: public B
{
   int n,m;
    public:

    C(int u,int v,int p,int q,int r ,int s):B(p,q,r,s){
        n = u;
        m = v;
        cout<<"Derieved Constructor(C)"<<n<<" "<<m<<endl;
    }
    C(){
        cout<<"Derieved Constructor(C)"<<endl;
    }

    ~C(){
        cout<<"Derieved  Class Destructor(C)"<<endl;
    }
};
class D: public C
{
    public:
    D(){
        cout<<"Derieved Constructor(D)"<<endl;
    }

    ~D(){
        cout<<"Derieved  Class Destructor(D)"<<endl;
    }
};

int main(){
    // B obj2(1); //Parameterized.Costructor Calls.
    D Obj1;       //Non_Parameterized Constructor Calls.

}



