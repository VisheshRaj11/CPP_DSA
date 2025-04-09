#include <iostream>
#include <vector>
using namespace std;
// size(),erase(),begin(),end(),push_back,pop_back(),insert()
int main(){
    vector<int> v1(10);
    cout<<v1.size()<<endl;

    for(int i=0;i<=9;i++) v1[i] = i;

    for(int i=10;i<=19;i++) v1.push_back(i);

    for(int i=0;i<=19;i++) cout<<v1[i]<<" "; cout<<endl;
    v1.erase(v1.begin(),v1.begin()+4);
    v1.pop_back();
    v1.pop_back();
//    Sort(v1.begin(),v1.end());


    //Creation of the iterator--->> have the address v1.
   vector<int>::iterator v = v1.begin();

   while(v!=v1.end()){
    cout<<"value of v: "<<*v<<endl;
    v++;
   }
}