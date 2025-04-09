#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    try
    {
        int i = 0;
        while(1){
            cout<<arr[i]<<" ";
            i++;
            if(i==5){
                throw(i);
            }
        }
    }

    catch(int j){
        cout<<"Exception is Caught "<<j<<" ";
    }
    cout<<"end";
}