#include <iostream>
#include <deque>
using namespace std;

int main(){
    int n=4,value;
    deque<int> que;

    for(int i=0;i<n;i++){
        cin>>value;
        cout<<"Push Value is: "<<value<<endl;
        que.push_front(value);
    }

    while(!que.empty()){
        cout<<"Popped element from the front is: "<<que.front()<<endl;
        que.pop_front();

        cout<<"Popped element from the back is: "<<que.back()<<endl;
        que.pop_back();
    }
}