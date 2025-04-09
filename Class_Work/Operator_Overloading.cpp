#include <iostream>
using namespace std;

class point
{
    
    int x,y,z;

    public:

    point(){
        x = 0,y = 0;
    }
    point(int a,int b){
        x = a;
        y = b;
     
    }

    point operator-();

    void display(){
        cout<<x<<endl;
        cout<<y<<endl;
        
    }

};

// define outside the class.
point point::operator-(){
    x = -x;
    y  = -y;
}


int main(){
    point o1(10,20);
    -o1;
     o1.display(); 
}