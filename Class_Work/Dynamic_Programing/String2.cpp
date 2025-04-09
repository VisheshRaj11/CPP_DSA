#include <bits/stdc++.h>
using namespace std;

class example
{
    const char* ptr;
    public:
    example(){
        ptr = new char[8];
        ptr = "Dynamic";
    }

    void show(){
        cout<<ptr<<endl;
    }
};

int main(){
    example* ex = new example();
    ex->show();
}