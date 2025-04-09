#include <iostream>
#include <iterator>
#include <list>
using namespace std;

int main(){
    int size = 5;
    int* arr = (int*)malloc(size*sizeof(int));

    for(int i=0;i<size;i++){
        cin>>*(arr+i);
    }
    for(int i=0;i<size;i++){
       cout<<*(arr+i)<<" ";
    }
    cout<<endl;


}