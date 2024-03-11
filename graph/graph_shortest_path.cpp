// unweighted graph and undirected graphs
// sortest path (actual path nodes) from source to destination in an unweighted graph

#include <bits/stdc++.h>
using namespace std;

// Function to perform BFS to find the shortest path
vector<int> shortestPath(vector<vector<int>>& graph, int start, int end) {
    vector<int> parent(graph.size(), -1);
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (current == end) {
            vector<int> path;
            // Reconstructing the path
            while (current != -1) {
                path.push_back(current);
                current = parent[current];
            }
            reverse(path.begin(), path.end());
            return path;
        }

        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                parent[neighbor] = current;
                q.push(neighbor);
            }
        }
    }

    // If no path found
    return vector<int>();
}

int main() {
    // graph representation (adjacency list) undirected graphs
    vector<vector<int>> graph = {
        {1, 2},     // Node 0 is connected to nodes 1 and 2
        {0, 3, 4},  // Node 1 is connected to nodes 0, 3, and 4
        {0, 4},     // Node 2 is connected to nodes 0 and 4
        {1},        // Node 3 is connected to node 1
        {1, 2}      // Node 4 is connected to nodes 1 and 2
    };

    int start = 0; // Start node
    int end = 3;   // End node

    vector<int> path = shortestPath(graph, start, end);

    if (path.empty()) {
        cout << "No path found.\n";
    }
    else {
        cout << "Shortest path from " << start << " to " << end << " : ";
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}