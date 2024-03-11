// nodes and edges from adjacency list
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> graph = {
        {1, 2},     // Node 0 is connected to nodes 1 and 2
        {0, 3, 4},  // Node 1 is connected to nodes 0, 3, and 4
        {0, 4},     // Node 2 is connected to nodes 0 and 4
        {1},        // Node 3 is connected to node 1
        {1, 2}      // Node 4 is connected to nodes 1 and 2
    };

    // Number of nodes is the size of the outer vector
    int num_nodes = graph.size();

    // Number of edges is the sum of the sizes of all inner vectors divided by 2
    int num_edges = 0;
    for (const auto& node_connections : graph) {
        num_edges += node_connections.size();
    }
    // Divide by 2 because each edge is counted twice in an undirected graph
    num_edges /= 2;

    cout << "Number of nodes: " << num_nodes << endl;
    cout << "Number of edges: " << num_edges << endl;

    return 0;
}