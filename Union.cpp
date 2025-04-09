#include <iostream>
#include <string>
using namespace std;

union Car{
     char name[50];
     int type;
     char color[50];
};

int main(){
    
    Car c1;
    
    cin.getline(c1.name,50);
    cout<<c1.name<<endl;
    
    cin>>c1.type;
    cout<<c1.type<<endl;
    
    
    cin.getline(c1.color,50);
    cout<<c1.color;
}