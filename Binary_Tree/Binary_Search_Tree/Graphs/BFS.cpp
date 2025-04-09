#include <bits/stdc++.h>
using namespace std;
#define MAX_V 100

void enqueue(int queue[], int &rear, int vertex) {
    queue[rear++] = vertex; // Add the vertex to the queue and increment rear
}

int dequeue(int queue[], int &front) {
    return queue[front++]; // Remove the front element and increment front
}

void bfs(int v, int adj[MAX_V][MAX_V], int startVertex) {
    int visited[MAX_V] = {0}; // To track visited vertices
    int queue[MAX_V];         // Queue for BFS
    int front = 0, rear = 0;

    enqueue(queue, rear, startVertex); // Enqueue the starting vertex
    visited[startVertex] = 1;

    cout << "Breadth First Search Traversal: ";

    while (front < rear) {
        int current = dequeue(queue, front); // Dequeue the front vertex
        cout << current << " ";             // Print the current vertex

        // Traverse all adjacent vertices
        for (int i = 0; i < v; i++) {
            if (adj[current][i] == 1 && !visited[i]) { // If unvisited and connected
                enqueue(queue, rear, i); // Enqueue the vertex
                visited[i] = 1;          // Mark as visited
            }
        }
    }

    cout << endl;
}

int main() {
    int V, E; // Number of vertices and edges
    cin >> V >> E;

    int adj[MAX_V][MAX_V] = {0}; // Adjacency matrix

    // Input edges
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1; // Directed graph; for undirected, add adj[v][u] = 1 as well
    }

    int startVertex;
    cin >> startVertex; // Input the starting vertex for BFS

    bfs(V, adj, startVertex); // Perform BFS

    return 0;
}
  