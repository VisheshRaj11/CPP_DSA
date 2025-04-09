#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    virtual void getData()=0;
    virtual void showData()=0;

};

class Derieve: public Student{
    public:
    void getData(){
       cin>>name;
       cin>>roll;
    }
    void showData(){
        cout<<name<<" "<<roll<<endl;
    }
};


int main(){
    // int str,roll;
    int n;
    cin>>n;

    Student* bptr ;
    Derieve* arr = new Derieve[n];

    for(int i=0;i<n;i++){
        bptr = &arr[i];
        bptr->getData();
    }

    for(int i=0;i<n;i++){
        bptr = &arr[i];
        bptr->showData();
    }

}