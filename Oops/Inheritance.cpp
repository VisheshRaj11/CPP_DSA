#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollno;
protected:
    char section[10];
public :
    void get_rn(){
        cout<<"Enter the roll no :";
        cin>>rollno;
    }

    void show_rn(){
        cout<<rollno;
    }
};

class result: public Student
{
    private:
    float fees;
    public:
    void get_data(){
        get_rn();
        cout<<"Enter the fees:";
        cin>>fees;
        cout<<"\nEnter the section:";
        cin>>section;
    }
    void display(){
        cout<<fees<<endl<<section<<endl;
    }
};

int main(){
    result ob1;
    ob1.get_data();
    ob1.display();
    
}