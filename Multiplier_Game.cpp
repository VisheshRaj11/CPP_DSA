#include <iostream>
using namespace std;

// void multiplicationGame(int n);

void game(int n){
    int p = 1;
    int turn = 1;
    int multiplicationGame = 1;
    while(p<n){
        
        //John is odd here && //Michael is Even:
        if(turn%2==1){
            p *= multiplicationGame;
            if(p>=n){
            cout<<n<<" John wins"<<endl;
            return;
            }
        }
        else{
            p *= multiplicationGame;
            if(p>=n) cout<<n<<" Michael wins"<<endl;
        }
        turn++;
        multiplicationGame++;
    }
}

int main(){
    int n;
    cin>>n;
    game(n);
}
