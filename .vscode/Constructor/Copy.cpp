#include <iostream>
using namespace std;


//Class:
class Counter
{
    //Data Member:
    int c;
    public :
    //Constructor:
    Counter(int a ){
        c=a;
    }
    //Copy Constructor:
    Counter(Counter &obj){
        c = obj.c;
    }

    //Display function:
    void show(){
        cout<<c<<endl;
    }
};

int main(){
    //Creation of the object:
    Counter c1(20);
    Counter c2(c1);
    c1.show();
    c2.show();

}