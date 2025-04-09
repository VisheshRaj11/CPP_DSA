#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "arlcome";
    string y = "wearomea";
    cout<<y.find("ea")<<endl;
    cout<<s.find("lc")<<endl;
    string s3 = s.substr(0,2);
    cout<<s3<<endl;
}