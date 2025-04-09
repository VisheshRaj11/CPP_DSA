#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1("man");
    string s2 = "hi";
    string s3;
    s3 = s1;
    cout<<s3<<endl;

    //Operator Overloading:
    s3 = "neither"+s1+"nor";
    cout<<s3<<endl;
    s3 = s2;
    cout<<s3<<endl;

    s1.swap(s2);
    cout<<s1<<"nor"<<s2<<endl;
}