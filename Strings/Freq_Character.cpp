#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin,s);

    int freq[256]={0};

    for(char ch:s){
        freq[ch]++;
    }

    for(int i=0;i<256;i++){
        if(freq[i]>0){
            cout<<freq[i]<<" ";
        }
    }
}