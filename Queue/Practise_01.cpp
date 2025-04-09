#include <iostream>
#include <queue>
using namespace std;

int main(){
    int choice,value;
    queue<int> que;
    while(true){
        cin>>choice;
        switch(choice){
            case 1:
            cin>>value;
            cout<<"Pushed Value is: "<<value<<endl;
            que.push(value);
            break;

            case 2:
            if(que.empty()) cout<<"Queue is empty"<<endl;
            else{
            cout<<"Popped Element is : "<<que.front()<<endl;
            que.pop();
            }
            break;


            case 3:
            if(que.empty()) cout<<"Queue is empty"<<endl;
            else{
                queue<int> temp;
                while(!que.empty()){
                    temp.push(que.front());
                    que.pop();
                }

                cout<<"Elements in the queue are: ";
                while(!temp.empty()){
                    cout<<temp.front()<<" ";
                    temp.pop();
                }
            }
            break;

            case 4:
            return 0;

            default:
            cout<<"Invalid Choice"<<endl;
        }
    }
}