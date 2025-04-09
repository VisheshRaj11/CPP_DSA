#include <iostream>
using namespace std;
class Rectangle
{
public:

    int length;
    int breadth;

    int computeArea(){
        return length* breadth;
    }
};

class Circle
{
public:
    int radius;

    int computeArea()
    {
        return (3.14*radius*radius);
    }
};

int main(){
    //Here we create an object for the rectangle class.
    Rectangle rect;
    Circle cir;

    //Now assign the values to the object attributes.
    rect.length = 5;
    rect.breadth = 3;

    cir.radius = 2;

    //Now create a new variable: area
    int area = rect.computeArea();
    cout<<"Area of rectangle is: "<<area<<endl;

    //Important: Always use the (obj.data_member or member_function);
    int Area = cir.computeArea();
    cout<<"Area of the circle is: "<<Area;
}   