#include <bits/stdc++.h>
using namespace std;

template<class T>
class add
{
    T* arr;
    int x;
    public:
    add(){
        arr = new T[x];
        for(int i=0;i<x;i++){
            cin>>arr[i];
        }
    }

    T sum1(){
        T sum = 0;
        for(int i=0;i<x;i++){
            sum+=arr[i];
        }
        return sum;
    }
};

int main(){
    add<int>obj1;
    cout<<obj1.sum1()<<endl;
    add<float>obj2;
    cout<<obj2.sum1()<<endl;

}