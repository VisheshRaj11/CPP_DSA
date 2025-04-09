#include <bits/stdc++.h>
using namespace std;

//It is used tp find the path closure .If yes 1 and no then 0.
void warshall(int graph[100][100],int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }
}


void printg(int graph[100][100],int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<graph[i][j]<<" ";
            }
            cout<<endl;
        }
}



int main(){
    int n;
    cin>>n;
    int graph[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }

    warshall(graph,n);

    printg(graph,n);
}