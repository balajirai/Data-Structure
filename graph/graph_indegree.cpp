#include <bits/stdc++.h>
using namespace std;

// Function to calculate in-degree of all nodes in a graph
vector<int> calculateInDegree(vector<vector<int>>& graph) {
    int n = graph.size(); // Number of nodes
    vector<int> inDegree(n, 0); // Vector to store in-degree of each node

    // Calculate in-degree for each node
    for (auto& edges : graph) {
        for (int node : edges) {
            inDegree[node]++;
        }
    }

    return inDegree;
}

int main() {
    // adjacency list of the graph
    vector<vector<int>> graph = {
        {1, 2},     // Node 0 is connected to nodes 1 and 2
        {3},        // Node 1 is connected to node 3
        {1, 3},     // Node 2 is connected to nodes 1 and 3
        {0, 2}      // Node 3 is connected to nodes 0 and 2
    };

    // Calculate in-degree of all nodes
    vector<int> inDegree = calculateInDegree(graph);

    // Print the in-degree of each node
    cout << "Node\tIn-Degree" << endl;
    for (int i = 0; i < inDegree.size(); ++i) {
        cout << i << "\t   " << inDegree[i] << endl;
    }

    return 0;
}
