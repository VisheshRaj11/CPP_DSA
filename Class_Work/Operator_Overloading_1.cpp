#include <iostream>
using namespace std;

class score
{
    int val;
    public:
    score(){
        val = 0;
    }

    void operator++(){
        val = val+1;
    }

    int show(){
        return val;
    }
};

int main(){
    score s1,s2;
    cout<<s1.show()<<endl;
    cout<<s2.show()<<endl;

    ++s1;
    ++s1;
    ++s2;

    cout<<s1.show()<<endl;
    cout<<s2.show()<<endl;
}
