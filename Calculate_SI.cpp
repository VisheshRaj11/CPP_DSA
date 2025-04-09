#include<iostream>
using namespace std;
int main(){
    // float p = 1000;
    // float r = 12;
    // float t = 10;

    // float si = p*r*t/100;
    // cout<<si<<endl;

    int cp,sp,pro,loss;
    cout<<"Enter the cp and sp:  ";
    cin>>cp>>sp;

    if(sp>cp){
        pro = sp-cp;
        cout<<"Profit:"<<pro;

    }
    else if (sp==cp){
        cout<<"No loss/ No Profit";
    }
    else{
        loss = cp-sp;
        cout<<"Loss"<<loss;
    }
}