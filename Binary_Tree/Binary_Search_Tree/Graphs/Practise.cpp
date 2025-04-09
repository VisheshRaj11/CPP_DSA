#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

void Floyd(vector<vector<int>>& graph,int n){
    vector<vector<int>> dist = graph;
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dist[i][k]!=INF && dist[k][j]!=INF && dist[i][j]>(dist[i][k]+dist[k][j])){
                    dist[i][j] = dist[i][k]+dist[k][j];
                }
            }
        }
    }

    cout<<"The Shortest path bw in every pair: ";
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(dist[i][j]==INF) cout<<"INF";
            else cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n,vector<int>(n,INF));
    for(int i=0;i<n;i++){
        graph[i][i] = 0;
    }
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u][v] = w;
    }

    Floyd(graph,n);

}