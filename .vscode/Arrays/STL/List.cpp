#include <iostream>
#include <list>
using namespace std;

// size(),begin(),end(),push_front(),pop_front,merge,sort,reverse

void display(list<int>& l){
    list<int>::iterator p;
    for(p = l.begin();p!=l.end();p++){
        cout<<*p<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;
    list<int> list2(5);
    for(int i=0;i<3;i++) list1.push_back(i);
    display(list1);

    list<int>::iterator p;
    for(p = list2.begin();p!=list2.end();p++){
        *p = 1;
    }

    display(list2);

    list1.push_front(100);
    display(list1);

    list2.pop_front();
    display(list2);

    list1.sort();
    list2.sort();
    
    list1.merge(list2);

    display(list1);
    list1.reverse();

    display(list1);

    
}