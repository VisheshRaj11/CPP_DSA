#include <bits/stdc++.h>
using namespace std;

class string1
{
private:
    char* str;
public: 
    string1(char*s){
        int length = strlen(s);
        str = new char[length+1];
        strcpy(str,s);
    }

    ~string1(){
        delete[] str;
    }

    void display(){
        cout<<str<<endl;
    }
};

int main(){
    string1 s("This is the string");
    s.display();
}