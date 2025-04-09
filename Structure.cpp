#include <iostream>
#include <string>
using namespace std;

struct employee
{
    char name[50];
    int age;
    float salary;
};

int main(){
    employee e1;
    cout<<"Enter full name: ";
    cin.getline(e1.name,50); // where getline is the inbuilt function to access the name of the employee.
    cin>>e1.age;
    cin>>e1.salary;
    cout<<e1.name<<endl<<e1.age<<endl<<e1.salary;
}