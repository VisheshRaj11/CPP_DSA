#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int key;
    int arr[] = {1,2,3,4,5};
    vector<int> v(arr,arr+5);
    vector<int>::iterator iter;
    cin>>key;
    iter = find(v.begin(),v.end(),key);
    if(iter!=v.end()){
        cout<<"Key Found"<<key;
    }
    else cout<<"Not Found"<<endl;
}