#include <iostream>
#include <vector>
using namespace std;

bool isPathExist(vector<vector<int>>& adj, int n, int u, int v) {
    if (u == v) return true; // If the source and destination are the same
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                adj[i][j] = adj[i][j] || (adj[i][k] && adj[k][j]); // Transitive closure
            }
        }
    }
    return adj[u][v] == 1; // Return whether there is a path from u to v
}

int main() {
    int n, e;
    cout << "Enter the number of vertices: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of vertices should be greater than 0.\n";
        return 1;
    }

    vector<vector<int>> adjMatrix(n, vector<int>(n, 0)); // Initialize adjacency matrix

    cout << "Enter the number of edges: ";
    cin >> e;

    cout << "Enter the edges (u v) where u and v are vertices:\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        // Check if the vertices are within valid range
        if (u < 0 || u >= n || v < 0 || v >= n) {
            cout << "Invalid edge (" << u << ", " << v << ").\n";
            i--; // Decrease the counter to allow re-input for the same edge
            continue;
        }

        adjMatrix[u][v] = 1; // Mark edge u -> v
    }

    int u, v;
    cout << "Enter the vertices u and v to check if there is a path: ";
    cin >> u >> v;

    // Validate the vertices for path check
    if (u < 0 || u >= n || v < 0 || v >= n) {
        cout << "Invalid vertices (" << u << ", " << v << ").\n";
        return 1;
    }

    if (isPathExist(adjMatrix, n, u, v)) {
        cout << "A path exists from " << u << " to " << v << ".\n";
    } else {
        cout << "No path exists from " << u << " to " << v << ".\n";
    }

    return 0;
}
