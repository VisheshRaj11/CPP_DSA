#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> que;

    que.push(10);
    que.push(20);
    que.push(30);

    que.size();
    que.empty();


    cout<<que.front();
    que.pop();

    cout<<endl;

    cout<<que.front();
    que.pop();

    cout<<endl;

    cout<<que.front();
    que.pop();



    
}