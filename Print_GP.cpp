#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    //We have to find the gp :
    //First note the common ratio:
    //then this common ratio helps below;

    //For ex(1,2,4,8,16,...):
    //So here common ratio is 2: then we multiply common ratio at the end of the loop:
    // int a = 1;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a *=2;     //Multiply by common ratio.
    // }

    //For ex(3,12,48...):Common ratio is 4:So we will multiply by 4 at the end of the loop:
    int a =3;  //as a first term

    for(int i =1;i<=n;i++){
        cout<<a<<" ";
        a *=4;
    }
}