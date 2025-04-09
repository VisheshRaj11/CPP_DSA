#include <iostream>
using namespace std;

//Forward declaration of the class;
class ClassB;

class ClassA
{
    private:
        int a;
    public:
        void ipa(){a=10;}

      friend int add(ClassA,ClassB);  

}A; //Here A is object.

class ClassB
{
private:
    int b;
public:
    void ipb(){b=40;}

 friend int add(ClassA,ClassB);   
}B;

//Standalone function:
int add(ClassA objectA,ClassB objectB){
    int s = objectA.a+objectB.b;
    return s;
}

int main(){
    A.ipa();
    B.ipb();
    cout<<add(A,B);
}
