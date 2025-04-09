#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to detect a cycle in the graph using BFS
bool BFSDetectCycle(vector<int> adj[], int start, int V, vector<bool> &visited) {
    queue<pair<int,int>> que;
    que.push({start,-1});
    visited[start] = true;
    while(!que.empty()){
        int current = que.front().first;
        int parent = que.front().second;    
        for(int ele:adj[current]){
            if(!visited[ele]){
                que.push({ele,current});
                visited[ele] = true;
            }
            else if(ele!=parent){
                return true;
            }
        }
    }
    return false;
}

// Function to detect cycle in the graph by calling BFS for each unvisited node
bool detectCycle(vector<int> adj[], int V) {
   vector<bool> visited(V,false);
   for(int i=0;i<V;i++){
       if(!visited[i]){
           if(BFSDetectCycle(adj,i,V,visited)){
               return true;
           }
       }
   }
   return false;
}

int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;

    vector<int> adj[V];
    cout << "Enter the number of edges: ";
    cin >> E;

    cout << "Enter the edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Remove for directed graph
    }

    if (detectCycle(adj, V)) {
        cout << "The graph contains a cycle.\n";
    } else {
        cout << "The graph does not contain a cycle.\n";
    }

    return 0;
}
