#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 20,y = 25;
    cout<<"The value of x and y before swapping:"<<x<<" "<<y<<endl;

    swap(x,y);

    cout<<"The value of x and y after swapping:"<<x<<" "<<y;
}
