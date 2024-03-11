#include <bits/stdc++.h>
using namespace std;

// Cycle detection in undirected graph (BFS)
bool isCycleBFS(int start, unordered_map<int, vector<int>>& adj, vector<bool>& visited) {
    queue<pair<int, int>> q;
    q.push({start, -1}); // Pushing node and its parent (-1 means no parent)
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (int child : adj[node]) {
            if (!visited[child]) {
                visited[child] = true;
                q.push({child, node}); // Push child and its parent
            } else if (child != parent) {
                return true; // Found a cycle
            }
        }
    }
    return false; // No cycle found
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
            bool ans = isCycleBFS(i, adj, visited);
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
