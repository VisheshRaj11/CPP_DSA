// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to perform Breadth First Search (BFS)
void BFS(vector<int> adj[], int start, vector<bool> &visited) {
   queue<int> que;
   que.push(start);
   visited[start] = true;
   while(!que.empty()){
       int current = que.front();
       cout<<current<<" ";
       que.pop();
       
       for(int ele:adj[current]){
           if(!visited[ele]){
               que.push(ele);
               visited[ele] = 1;
           }
       }
       
   }
}

int main() {
    int V; // Number of vertices
    int E; // Number of edges

    cout << "Enter the number of vertices: ";
    cin >> V;

    vector<int> adj[V];
    vector<bool> visited(V, false);

    cout << "Enter the number of edges: ";
    cin >> E;

    cout << "Enter the edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Remove for directed graph
    }

    int start;
    cout << "Enter the starting vertex for BFS: ";
    cin >> start;

    cout << "Breadth First Search traversal starting from vertex " << start << ":\n";
    BFS(adj, start, visited);

    return 0;
}