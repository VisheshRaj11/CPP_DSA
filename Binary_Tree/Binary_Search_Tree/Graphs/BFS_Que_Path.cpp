#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to check if a path exists between two nodes using BFS
bool BFS(vector<int> adj[], int start, int end, int V) {
    vector<int> visited(V,false);
    queue<int> que ;

    que.push(start);
    visited[start] = true;
    while(!que.empty()){
        int current = que.front();
        que.pop();
        if(current==end) return true;
        for(int ele:adj[current]){
            if(!visited[ele]){
                que.push(ele);
                visited[ele] = true;
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

    int start, end;
    cout << "Enter the start and end vertices: ";
    cin >> start >> end;

    if (BFS(adj, start, end, V)) {
        cout << "A path exists between " << start << " and " << end << ".\n";
    } else {
        cout << "No path exists between " << start << " and " << end << ".\n";
    }

    return 0;
}
