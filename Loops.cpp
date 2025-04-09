#include<iostream>
using namespace std;
int main(){
    //Syntax for loop:
    int n;
    cout<<"Enter the  number: ";
    cin>>n;
    // for(int i=0;i<n;i++){
    //     cout<<"Hello World"<<endl;
    // }


    //Syntax of while loop:It is used if we dont know the situation or uppperlimits.Alternate of for loop:
    int i =1; //Init outeside the loop
    while(i<=10){
        cout<<i<<" ";
        i++;
    }

    //Do-while loop: Run atleast one:
    int i=1;
    do{
        cout<<i<<endl;
    }
    while(i<=10);
}