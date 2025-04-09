#include <bits/stdc++.h>
using namespace std;

template<class T>
class alpha
{
    protected:
    T a;
    public:
    void check(){
        cout<<"Hello"<<endl;
    }
};

template<class T,class T1>
class beta:public alpha{
    private:
    T1 b;
    public:
    void get(){
        cin>>a>>b;
    }

    void display(){
        cout<<aplha<T>a<<endl;
        cout<<b<<endl;
    }
};

int main(){
    
}