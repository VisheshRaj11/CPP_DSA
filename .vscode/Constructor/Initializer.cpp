#include <iostream>
using namespace std;

class rectangle{
    int l,b;
    public:
    //Initializer list:
    rectangle(int x, int y):l(x),b(y){}
    int area(){
        return l*b;
    }
};

int main(){
    rectangle r(20,30);
    cout<<r.area();
}