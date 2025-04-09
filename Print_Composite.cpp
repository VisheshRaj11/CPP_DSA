#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //Composite means it has extra factor other than 1,n.
    //Prime means it has no extra factor;------  
   

 //Given number is prime or composite:
 bool flag=true;
 for(int i =2;i<=n/2;i++){
    if(n%i==0){
        flag=false;
        break;
    }
 }
if(n==1) cout<<"Neither prime nor composite";
else if(flag==true) cout<<"Prime";
else cout<<"composite";


}