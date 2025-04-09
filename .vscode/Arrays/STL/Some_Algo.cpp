#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void show(int n){
    cout<<n<<" ";
}

int main(){
    int arr[] ={1,2,3,4,5};
    vector<int> v(arr,arr+5);
    for_each(v.begin(),v.end(),show);
}