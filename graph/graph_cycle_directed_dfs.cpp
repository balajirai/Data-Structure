#include <bits/stdc++.h>
using namespace std;

// Cycle detection in directed graph (DFS)
bool isCycleDFS(int node, vector<bool>& visited, vector<bool>& dfsVisited, unordered_map<int, vector<int>>& adj) {
    visited[node] = true;
    dfsVisited[node] = true;
    for (int &child : adj[node]) {
        if (!visited[child]) {
            if (isCycleDFS(child, visited, dfsVisited, adj)) {
                return true;
            }
        } else if (dfsVisited[child]) {
            return true;
        }
    }
    dfsVisited[node] = false;
    return false;
}

bool isCyclic(vector<vector<int>>& edges, int v, int e) {
    unordered_map<int, vector<int>> adj;
    for (int i = 0; i < e; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    vector<bool> visited(v, false), dfsVisited(v, false);
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            if (isCycleDFS(i, visited, dfsVisited, adj)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int v, e;
    cout << "Enter the number of vertices: ";
    cin >> v;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector<vector<int>> edges(e, vector<int>(2));
    cout << "Enter the edges (source and destination):" << endl;
    for (int i = 0; i < e; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    if (isCyclic(edges, v, e)) {
        cout << "The graph contains a cycle." << endl;
    } else {
        cout << "The graph does not contain a cycle." << endl;
    }

    return 0;
}


/*

Enter the number of vertices: 5
Enter the number of edges: 6
Enter the edges (source and destination):
0 1
1 2
2 0
1 3
3 4
4 1

*/