#include <iostream>

using namespace std;

//Here the data members are private .So they can be access by the member function which is public
class Student
{
private:
    int len;
    int bre;

public: 
    //Here the accessibility is done : By giving the parimeter to the public function:
    void set(int l,int b){
        len = l;
        bre = b;

    }

    int compute(){
        return len*bre;
    }


};


int main(){
    Student s;

    s.set(18,02);

    int Area = s.compute();
    cout<<"The Area of the student is: "<<Area;
}