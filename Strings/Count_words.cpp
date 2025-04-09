#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin,s);

    int word_count = 0;
    stringstream ss(s);   
    // string word;  // or without word.

    while(ss>>s){  //while(ss>>s):// or without word.
        word_count++;
    }

    cout<<word_count<<endl;
}