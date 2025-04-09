#include <bits/stdc++.h>
using namespace std;

class sample{
    public:
    virtual void example()=0;
    void show(){
        cout<<endl<<"This is the sample abstract class."<<endl;
    }
};

class derieved:public sample{
    public:
    void example(){
        cout<<"C++"<<endl;
    }
};

int main(){
sample* ptr;
derieved obj1;
ptr = &obj1;

//example of derieve should be called because ptr have the address of obj of derieve.
ptr->example();
ptr->show();

}