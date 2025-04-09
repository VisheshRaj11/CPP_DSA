#include <iostream>
using namespace std;

void towerHanoi(int n,char source,char destination , char auxiliary,int& moves){
    
    if(n==1){
        cout<<"Disk 1 move from "<<source<<" to the rod "<<destination<<endl;
        moves++;
        return;
    }
    towerHanoi(n-1,source,auxiliary,destination,moves);
    cout<<"Move disk"<<n<<" from "<<source<<" to rod "<<destination<<endl;
    moves++;
    towerHanoi(n-1,auxiliary,destination,source,moves);  
}

int main(){
    int n;
    cin>>n;
    int moves=0;
    towerHanoi(n,'A','C','B',moves);
    cout<<"The total number of moves are require: "<<moves;
}