#include <iostream>
using namespace std;

enum seasons{spring=34,summer = 4,autumn =6,winter = 32};


int main(){

    // We can overwrite here:Like we have overwrite the value of autumn to summmer;
    seasons s;
    s = autumn;
    s = summer;
    cout<<"The value of the summer is given: "<<s<<endl;

     return 0;
}