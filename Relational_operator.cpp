#include<iostream>
using namespace std;
int main(){
    //a==b--- 1(True)
    //a!=b--- 0(False)
    //a>b---- 1
    //a<b--- 0
    // int x=4,y=5;
    // cout<<(x==y)<<endl<<(x!=5)<<endl<<(x>y)<<endl<<(x<=y)<<endl<<(x>=y)<<endl;

//Always usee the bracket in th relational operators like we have done above 

//Ques:What is the result of the following code fragement 
    // bool p = false;
    // bool q = false;
    // bool r = true;
    // cout<<(p == q ==r);  // Here we can start with left to right because it is the equality operator. 

//Order precedence( (),[],++,-- >>  *,/ > +,-)

//In asignment operators from left to right 
    int p = 5;
    int q = 10;
    p +=q -=p ; //Here we have to calculate from the right side of the statement .

    cout<<p<<endl<<q;
} 