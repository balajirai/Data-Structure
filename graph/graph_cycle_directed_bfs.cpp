#include <bits/stdc++.h>
using namespace std;

// Using Kahn's Algorithm for Topological sort (BFS)
bool detectCycleInDirectedGraph(int n, vector<pair<int, int>>& edges) {
    unordered_map<int, vector<int>> adj;
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i].first - 1;
        int v = edges[i].second - 1;

        adj[u].push_back(v);
    }

    // find indegree
    vector<int> indegree(n);
    for (auto i : adj) {
        for (auto j : i.second) indegree[j]++;
    }

    // push 0 indegree
    queue<int> q;
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) q.push(i);
    }

    // BFS
    int count = 0;
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        count++;

        for (int& child : adj[curr]) {
            if (--indegree[child] == 0) q.push(child);
        }
    }

    if (count == n) return false; // No cycle detected
    else return true; // Cycle detected
}

int main() {
    int n, m; // n -> number of vertices, m -> number of edges
    cout << "Enter the number of vertices and edges: ";
    cin >> n >> m;

    vector<pair<int, int>> edges(m);
    cout << "Enter the edges (format: <from> <to>):" << endl;
    for (int i = 0; i < m; ++i) {
        cin >> edges[i].first >> edges[i].second;
    }

    bool cycleDetected = detectCycleInDirectedGraph(n, edges);
    if (cycleDetected)
        cout << "Cycle detected in the directed graph." << endl;
    else
        cout << "No cycle detected in the directed graph." << endl;

    return 0;
}

/*

Enter the number of vertices and edges: 3 4
Enter the edges (format: <from> <to>):
1 2
2 3
3 1
1 2

*/