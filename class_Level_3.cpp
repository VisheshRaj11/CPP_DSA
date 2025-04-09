#include <iostream>
using namespace std;
//When member function declare inside the class but define outside.
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void set(int l,int b);
    int computeArea();
};

//Define:
void Rectangle::set(int l,int b){
    length = l;
    breadth = b;
}

//Define:
int Rectangle::computeArea(){
    return length*breadth;
}

int main(){
    Rectangle rect;

    rect.set(4,5);

    int Area = rect.computeArea();
    cout<<"Area of the rectangle is :"<<Area;
}