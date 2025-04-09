#include <iostream>
using namespace std;
//Default Arguments:
void display(char ='*',int  = 1);

int main(){
    display();
    display('#');
    display('h',5);

}

void display(char c,int n){
    for(int i=1;i<=n;i++){
        cout<<c;
    }
    cout<<endl;
}
