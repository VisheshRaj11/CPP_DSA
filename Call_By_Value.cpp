#include <iostream>
using namespace std;

//Formal Arguments:Normal Variable.
void change(int x,int y){
    x = 10;
    y = 20;
}


int main(){
    int a = 20,b = 30;

// Actual rgu,
    change(a,b);
    cout<<"The value of a and b are: "<<a<<" "<<b;
}