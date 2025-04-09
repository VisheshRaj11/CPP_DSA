#include <iostream>
using namespace std;

class Apple
{
    public:
    int n=5;

    void countApple(int& count){
        count += n;
    }
    
};

class Banana
{ 
    public:
    int m=5;

    void countBanana(int& count){
        count+=m;
    }

};


class Fruits:public Apple,public Banana
{
    public:
    void countfruits(int& count){
        countApple(count);
        countBanana(count);
        cout<<"The total numbers of fruits is:"<<count;
    }

};

int main(){
    int count=0;
    Fruits f1;
    f1.countfruits(count);
}