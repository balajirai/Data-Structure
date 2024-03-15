#include <bits/stdc++.h>
using namespace std;

// Obtain edges from adjacency list of the graph
void edgeFromAdj(vector<vector<int>>&edges, vector<vector<int>>&graph){
    int n = graph.size();

    for(int u=0; u<n; u++){
        for(int v:graph[u]){
            edges.push_back({u, v});
        }
    }
}
int main(){
    vector<vector<int>> graph = {
        {1, 2},     // Node 0 is connected to nodes 1 and 2
        {0, 3, 4},  // Node 1 is connected to nodes 0, 3, and 4
        {0, 4},     // Node 2 is connected to nodes 0 and 4
        {1},        // Node 3 is connected to node 1
        {1, 2}      // Node 4 is connected to nodes 1 and 2
    };

    vector<vector<int>>edges;
    edgeFromAdj(edges, graph);

    cout << "Edges:\n";
    for (const auto& edge : edges) {
        cout << edge[0] << " -> " << edge[1] << "\n";
    }
    
    return 0;
}