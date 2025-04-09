#include <bits/stdc++.h>
using namespace std;
#define Max_vertices 100

void addEdge(int adj[Max_vertices][Max_vertices],int v,int w){
    adj[v][w] = 1;
    // adj[w][v] = 1;//undirected graph.
}

void Dfs(int adj[Max_vertices][Max_vertices],int visited[Max_vertices],int V,int v){
    visited[v] = 1;
    cout<<v<<" ";
    for(int i=0;i<V;i++){
        if(adj[v][i]&& !visited[i]){
            Dfs(adj,visited,V,i);
        }
    }
}

int main(){
    //No of edges and vertices.
    int V,E;
    cin>>V>>E;

    int adj[Max_vertices][Max_vertices] = {0};
    int visited[Max_vertices] ={0};

    for(int i=0;i<E;i++){
        int v,w;
        cin>>v>>w;
        addEdge(adj,v,w);
    }

    int startVertex;
    cin>>startVertex;

    cout<<"Depth First Search Traversal starting from vertex: "<<startVertex<<endl;
    Dfs(adj,visited,V,startVertex);
}