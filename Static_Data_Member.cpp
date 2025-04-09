#include <iostream>
using namespace std;
class Item
{
    static int count;
    int number;
    public:
        void getdata(int d){
            number = d;
            count++;
        }
        void getcount(){
            cout<<count;
        }
};


//For the separate memory allocation .We redined the static data member.
int Item::count;

int main(){
    Item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    cout<<endl;

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    a.getcount();
    b.getcount();
    c.getcount();
}