#include <bits/stdc++.h>
using namespace std;

// Cycle detection in undirected graph (DFS)
bool isCycleDFS(int node, int parent, unordered_map<int, vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;

    for (int child : adj[node]) {
        if (!visited[child]) {
            bool res = isCycleDFS(child, node, adj, visited);
            if (res) return true;
        } else if (child != parent) return true;
    }
    return false;
}

string cycleDetection(vector<vector<int>>& edges, int n, int m) {
    // create adjacency list
    unordered_map<int, vector<int>> adj;
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // handling disconnected components
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            bool ans = isCycleDFS(i, -1, adj, visited);
            if (ans) return "Yes";
        }
    }
    return "No";
}

int main() {
    int n, m;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;

    vector<vector<int>> edges(m, vector<int>(2));
    cout << "Enter the edges (node u and node v):" << endl;
    for (int i = 0; i < m; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    string result = cycleDetection(edges, n, m);
    cout << "Does the graph contain a cycle? : " << result << endl;

    return 0;
}

/*

Number of nodes: 6
Number of edges: 6
Edges:
1 2
1 3
2 4
2 5
3 6
5 6

       1
      / \
     2   3
    / \   \
   4   5 - 6

*/