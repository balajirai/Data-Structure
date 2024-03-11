#include <bits/stdc++.h>
using namespace std;

// unweighted shortest distance and shortest path
void shortestDistance(int source, vector<int>& distance, vector<vector<int>>& graph, vector<int>& parent){
    queue<int> q;
    q.push(source);
    distance[source] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int child : graph[node]) {
            if (distance[child] == -1) {
                distance[child] = distance[node] + 1;
                parent[child] = node; // Store parent information
                q.push(child);
            }
        }
    }
}

// Function to construct shortest path using node notation
vector<int> constructPath(int source, int destination, vector<int>& parent){
    vector<int> path;
    for (int v = destination; v != source; v = parent[v]) {
        path.push_back(v);
    }
    path.push_back(source);
    reverse(path.begin(), path.end());
    return path;
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

    int nodes = graph.size();
    int source = 0; // select source here

    vector<int> distance(nodes, -1);
    vector<int> parent(nodes, -1); // Parent array to store shortest path

    shortestDistance(source, distance, graph, parent);

    for (int i = 0; i < nodes; i++) {
        cout << "Shortest distance from " << source << " to " << i << " is : " << distance[i] << endl;
        cout << "Shortest path: ";
        vector<int> path = constructPath(source, i, parent);
        for (int node : path) {
            cout << node << " ";
        }
        cout << "\n\n";
    }

    return 0;
}