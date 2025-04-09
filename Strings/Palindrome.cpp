#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    //Make the temporary string to the store the original string.
    string temp = s;
    for(int i=0;i<s.length()/2;i++){
        swap(s[i],s[s.length()-i-1]);
    }
    if(s==temp) return true;
    else return false;
}

int main(){
    string s;
    cin>>s;
    
    if(isPalindrome(s)) cout<<"string is the palindrome";
    else cout<<"String is not the palindrome";
}