#include <bits/stdc++.h>
using namespace std;

class Complex1
{
    float x,y;
    public:
    Complex1(){
        x = 0.0;
        y = 0.0;
    }
    Complex1(float real,float img){
        x = real;
        y = img;
    }

    Complex1 operator+(Complex1 obj1){
        Complex1 temp;
        temp.x = x+obj1.x;
        temp.y = y+obj1.y;
        return temp;
    }

    void show(){
        cout<<x<<" +i"<<y<<endl;
    }
};

int main(){
    Complex1 o1(2.2,4.5),o2(1.2,3.1),o3;
    o3 = o1+o2;
    o3.show();
}