#include <bits/stdc++.h>
using namespace std;
 class Test
 {
    public:
    Test(){
        cout<<"Constructor of test"<<endl;
    }
    ~Test(){
        cout<<"Destructor of test"<<endl;
    }
 };


 int main(){
    try
    {
        Test t1;
        throw 10;
    }
    catch(int i)
    {
       cout<<"Caught"<<i<<endl;
    }
    
 }