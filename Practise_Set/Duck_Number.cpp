#include <iostream>
#include <string>
using namespace std;

bool isDuck(string n){

    if(n[0]=='0') return false;

    for(int i=1;i<n.length();i++){
       if(n[i]=='0'){
        return true;
       }
    }
    return false;
}

//Duck number is the number which contains atleast one zero but not at the begin.

int main(){
    string n;
    cin>>n;

    if(isDuck(n)) cout<<"The given number is duck";
    else cout<<"Not Duck";
}