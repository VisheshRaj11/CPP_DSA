#include<iostream>
using namespace std;
int main(){
//Arithmentic operators:(+,-,*,/)

    // int x =5;
    // //Increment
    // ++x;//Pre
    // x++;//Post
    // cout<<x++<<endl;

    // //Decrement
    // --x;//Pre
    // x--;//Post 
    // cout<<x--<<endl;

    //Modulo Operator:
    //Always apply on integers.
    //It gives you the last value of the digit called remainder.
    //if a>b----then a%b-- ..;
    //a<b------- then a%b--a;
    //if a%(-b)-----a%b
    //if (-a)%b----(-(a%b))
    //if(-a)%(-b)

    int x=5;
    int y=2;
    cout<<x%y<<endl<<y%x<<endl;
    

//Assignment operators(*=,+=,-=,/=%=)

     x += 5;
     cout<<x<<endl;

     x -= 5;
     cout<<x;

}