#include <bits/stdc++.h>
using namespace std;

void addEgde(int adj[100][100],int u,int v){
    adj[u][v] = 1;
    adj[v][u] = 1;
}

int Dfs(int adj[100][100],int visited[100],int V,int start,int end){
    if(start==end) return 1;
    visited[start] = 1;
    
    for(int i=1;i<=V;i++){
        if(adj[start][i]==1 && !visited[i]){
            if(Dfs(adj,visited,V,i,end)){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int n,m;
    cin>>n>>m;
    int adj[100][100] = {0};
    int visited[100] = {0};
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        addEgde(adj,u,v);
    }
    int start,end;
    cin>>start>>end;
    
    if(Dfs(adj,visited,n,start,end)){
        cout<<"Path is found from "<<start<<" to "<<end<<endl;
    }
    else cout<<"No path exists";
}