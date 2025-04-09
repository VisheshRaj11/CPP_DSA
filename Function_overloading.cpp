#include <iostream>
using namespace std;

//Here we have seen that the functions are same but they have different functionalities.
class A
{
    public:
    void sum(int x,int y){
        cout<<"Sum"<<" "<<(x+y)<<endl;
    }

    void sum(float x,float y){
        cout<<"Sum"<<" "<<(x+y)<<endl;
    }

    void sum(char x,char y){
        cout<<"Sum"<<" "<<(x+y)<<endl;
    }
};

int main(){
    A s ;
    int x=20,y=30;
    float c = 7.5,d = 5.2;
    char a = 'q',b = 'p';

    s.sum(x,y);
    s.sum(c,d);
    s.sum(a,b);
}