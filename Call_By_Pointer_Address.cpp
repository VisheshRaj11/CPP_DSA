#include <iostream>
using namespace std;

//Formal arguments:Pointers
void swapp(int *x,int *y){
    int z = *x;
    *x = *y;
    *y = z;
}

int main(){
    int a = 20,b = 25;
    //Actual Arguments are: address
    swapp(&a,&b);
    cout<<"The value of a and b after swapping :"<<a<<" "<<b;
}