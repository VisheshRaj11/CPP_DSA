#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    //Here we use 2n-1 for the last term:(upperlimit of the loop)
    //For(1,3,5,7,...):
    // for(int i =1;i<=2*n-1;i += 2){
    //     cout<<i<<" ";
    // }

    //For(4,7,10,13,16....):
    //We can findout the last term with the formula [a = a+(n-1).d]:
    // for(int i = 4;i<=3*n+1;i += 3){
    //     cout<<i<<" ";
    // }

    //Method 2:By introducing extra variable in it.
    int a =4;
    for(int i =1;i<=n;i++){
        cout<<a<<" ";
        a +=3;   //Here we add 3 as a common difference of the ap.
    }
    
}