#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> que;
    
    que.push_front(10);
    que.push_back(20);
    que.push_front(30);
    que.push_back(40);

    cout<<que.front();
    que.pop_front();

    cout<<que.back();
    que.pop_back();
}