#include <bits/stdc++.h>
using namespace std;

// Function to calculate out-degree of all nodes in a graph
vector<int> calculateOutDegree(const vector<vector<int>>& graph) {
    int n = graph.size(); // Number of nodes
    vector<int> outDegree(n, 0); // Vector to store out-degree of each node

    // Calculate out-degree for each node
    for (int i = 0; i < n; ++i) {
        outDegree[i] = graph[i].size();
    }

    return outDegree;
}

int main() {
    // graph represented using adjacency list
    vector<vector<int>> graph = {
        {1, 2},     // Node 0 is connected to nodes 1 and 2
        {3},        // Node 1 is connected to node 3
        {1, 3},     // Node 2 is connected to nodes 1 and 3
        {0, 2}      // Node 3 is connected to nodes 0 and 2
    };

    // Calculate out-degree of all nodes
    vector<int> outDegree = calculateOutDegree(graph);

    // Print the out-degree of each node
    cout << "Node\tOut-Degree" << endl;
    for (int i = 0; i < outDegree.size(); ++i) {
        cout << i << "\t   " << outDegree[i] << endl;
    }

    return 0;
}
