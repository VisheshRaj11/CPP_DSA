#include <iostream>
#include <cctype>
using namespace std;
//Phone number format: XXX-XXX-XXXX

bool isValid(string phone){
    //Length should be equal to 12.
    if(phone.length()!=12) return false;
    //3 & 7 char should be hyphen.
    if(phone[3]!='-' || phone[7]!='-') return false;
    for(int i=0;i<12;i++){
        //if(hyphen):
        if(i==3 || i==7) continue;
        //Number must be digit.
        if(!isdigit(phone[i])) return false;
    }
    return true;

}
int main(){
    string phone;
    cin>>phone;

    if(isValid(phone)){
        cout<<"Yes the number is valid"<<endl;
        for(char c: phone) cout<<c;
    }
    else cout<<"No, the number is not valid.";
}