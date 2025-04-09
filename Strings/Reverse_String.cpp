#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int len = s.length();
    for(int i=0;i<len/2;i++){
        swap(s[i],s[len-i-1]);
    }

    cout<<s;

}