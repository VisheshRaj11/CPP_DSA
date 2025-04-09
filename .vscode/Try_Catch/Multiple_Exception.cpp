#include <bits/stdc++.h>
using namespace std;

void test(int x){
    try
    {
        if(x==1) throw(x);
        else if(x==0) throw(x);
        else if(x==-1) throw(x);
    }
    catch(int i)
    {
        cout<<"Exception is Caught "<<i;
    }
    catch(char c)
    {
        cout<<"Exception is Caught "<<c;
    }
    catch(double d)
    {
        cout<<" Exception is Caught "<<d<<" ";
    }
    
}

int main(){
    test(1);
    test(-1);
    test(0);
}