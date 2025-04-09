#include <iostream>
using namespace std;

int main(){
    int *p;
    {
        int v = 23;
        p = &v;
        cout<<"Value of that address of v is: "<<*p<<endl;
        cout<<"Address of the v: "<<p<<endl;
    }
    p = NULL;
    cout<<"Value of that address of v: "<<*p<<endl;
    cout<<"Address of the v: "<<p;
}