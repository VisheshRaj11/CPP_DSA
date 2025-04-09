#include <bits/stdc++.h>
using namespace std;

class Emp
{
    int id;
    float salary;
    
    public:
    void input(){
        cin>>id;
        cin>>salary;
    }

    void display(){
        cout<<id<<" "<<fixed<<setprecision(1)<<salary<<endl;
    }
};

int main(){
    int n;
    cin>>n;

    Emp* p = new Emp[n];
    Emp* d = p;
    Emp* flag = p;

    if(p==NULL){
        cout<<"Memory Allocaion is not done due to failure";
        exit(1);
    }

    for(int i=0;i<n;i++){
        p->input();
        p++;
    }
    for(int i=0;i<n;i++){
        d->display();
        d++;
    }

    delete[] flag;
}