#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=n-1;i>=0;i--){
       arr[i] = arr[i-1];
    }
    
    arr[0] = m;
    
    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0;
}
