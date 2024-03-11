#include <bits/stdc++.h>
using namespace std;

void topoSort(int node, stack<int>&s, vector<bool>&visited, unordered_map<int, vector<int>>&adj){
    visited[node] = true;
    for(int &child:adj[node]){
        if(!visited[child]){
            topoSort(child, s, visited, adj);
        }
    }
    s.push(node);
}

// topological sort (ordering of nodes in same order of connection (directed acyclic graph))
vector<int> topologicalSort(vector<vector<int>> &graph, int edges, int nodes) {
    unordered_map<int, vector<int>>adj;
    for(int i=0; i<edges; i++){
        int u = graph[i][0];
        int v = graph[i][1];

        adj[u].push_back(v);
    }

    vector<bool>visited(nodes, false);
    stack<int>s;
    
    for(int i=0; i<nodes; i++){
        if(!visited[i]){
            topoSort(i, s, visited, adj);
        }
    }

    vector<int>ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

int main(){
    int edges, nodes;
    cout << "Enter the number of edges and nodes: ";
    cin >> edges >> nodes;

    vector<vector<int>> graph(edges, vector<int>(2));
    cout << "Enter the edges (u v): ";
    for (int i = 0; i < edges; i++) {
        cin >> graph[i][0] >> graph[i][1];
    }

    vector<int> result = topologicalSort(graph, edges, nodes);

    cout << "Topological Sort: ";
    for (int node : result) {
        cout << node << " ";
    }
    return 0;
}

/*
According to edge 5 -> 0, node 5 must appear before node 0 in the ordering.
According to edge 4 -> 0, node 4 must appear before node 0 in the ordering.
According to edge 5 -> 2, node 5 must appear before node 2 in the ordering.
According to edge 2 -> 3, node 2 must appear before node 3 in the ordering.
According to edge 3 -> 1, node 3 must appear before node 1 in the ordering.
According to edge 4 -> 1, node 4 must appear before node 1 in the ordering.

Edges Nodes: 6 6
Input : 5 0 4 0 5 2 2 3 3 1 4 1
Output: 5, 4, 2, 3, 1, 0
*/