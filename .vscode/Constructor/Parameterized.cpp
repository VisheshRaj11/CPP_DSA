#include <iostream>
using namespace std;

class Rectangle
{
    int a, b;
    public :
    Rectangle(int x,int y){
        a = x;
        b = y;
    }


int  area(){
    return a*b;
}
};

int main(){
    Rectangle r1(20,30);
    cout<<r1.area();

}