#include <iostream>

using namespace std;

class NumberComp
{
  private:
  int num1, num2;
  
  public:
    NumberComp(int n1,int n2){
        this->num1 = n1;
        this->num2 = n2;
    }
    
    void findmax(){
        if(this->num1 > this->num2){
            cout<<this->num1<<" is the maximum number";
        }
        else cout<<this->num2<<" is the maximum number";
    }
};



int main(){
    
    int n1,n2;
    cin>>n1>>n2;
    
    NumberComp comper(n1,n2);
    
    comper.findmax();
    
    
}
