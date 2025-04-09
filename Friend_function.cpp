#include <iostream>
using namespace std;
class sample
{
    int a,b;
    public:
    void setvalue(){
        a=10,b=40;
    }
    friend float mean(sample s);

};

float mean(sample s){
    return float (s.a+s.b)/2;
}

int main(){
    sample x;
    x.setvalue();
    cout<<"Mean of two data members is given as: "<<mean(x);
}