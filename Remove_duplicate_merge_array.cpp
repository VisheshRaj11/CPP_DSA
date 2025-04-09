#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cin>>m;
    vector<int> brr(m);
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    
    
    vector<int> crr(n+m);
     
    int i = 0,j = 0,k = 0;
    while(i<n && j<m){
        if(arr[i] < brr[j]){
            crr[k] = arr[i];
            i++;
            k++;
        }
        else{
            crr[k] = brr[j];
            j++;
            k++;
        }
    }
    
    if(i==n){
        while(j<m){
            crr[k] = brr[j];
            j++;
            k++;
        }
    }
    
    if(j==m){
        while(i<n){
            crr[k] = arr[i];
            i++;
            k++;
        }
    }
    
  
    
    auto last = unique(crr.begin(),crr.end());
    crr.erase(last,crr.end());
    
    for(int ele:crr){
        cout<<ele<<" ";
    }
    
}