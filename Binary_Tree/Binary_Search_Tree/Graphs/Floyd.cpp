#include <iostream>
#include <vector>
#include <climits>
using namespace std;

#define INF INT_MAX

void floydWarshall(int n, vector<vector<int>>& graph) {
    // Distance matrix initialized as the graph itself
    vector<vector<int>> dist = graph;

    // Floyd-Warshall algorithm
    for (int k = 0; k < n; k++) {       // Intermediate vertices
        for (int i = 0; i < n; i++) {   // Source vertices
            for (int j = 0; j < n; j++) { // Destination vertices
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Print the distance matrix
    cout << "Shortest distances between every pair of vertices:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF) {
                cout << "INF ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;

    // Initialize graph with INF and 0 on the diagonal
    vector<vector<int>> graph(n, vector<int>(n, INF));
    for (int i = 0; i < n; i++) graph[i][i] = 0;

    cout << "Enter edges (u v w) where u and v are vertices and w is the weight:\n";
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u][v] = w; // Directed graph
    }

    floydWarshall(n, graph);

    return 0;
}