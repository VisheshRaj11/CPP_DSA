#include <iostream>
using namespace std;


//Basic type to class type.
class time
{
int hrs;
public :
time(int t){
    hrs = t/60;
}
};

void main(){
    time t1(85);
}