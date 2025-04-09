#include <iostream>
using namespace std;
// Forward Declaration for the classes;
class B;
class C;

class A
{
    int a;
    public:
    void valueA(){
        a = 10;
    }
    friend int cube(A,B,C);

}A1;

class B
{
    int b;
    public:
    void valueB(){
        b = 10;
    }
    friend int cube(A,B,C);

}B1;

class C
{
    int c;
    public:
    void valueC(){
        c = 10;
    }
    friend int cube(A,B,C);

}C1;

int cube(A A1,B B1,C C1){
    int cube = (A1.a*B1.b*C1.c);
}

int  main(){
    A1.valueA();
    B1.valueB();
    C1.valueC();
    cout<<"Multiply of three integer is: "<<cube(A1,B1,C1);
}

