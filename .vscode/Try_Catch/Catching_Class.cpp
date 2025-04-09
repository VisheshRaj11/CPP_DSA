#include <bits/stdc++.h>
using namespace std;

class error{
int err_code;
char* err_des;

public:
    error(int c,const char* d){
        err_code = c;
        err_des = new char[strlen(d)];
        strcpy(err_des,d);
    }
    void err_display(){
        cout<<"Error code: "<<err_code<<endl<<"Error_descripion: "<<err_des;
    }
};

int main(){
    try{
        throw error(99,"test exception");
    }catch(error e){
        cout<<"Exception caught"<<endl;
        e.err_display();
    }
}