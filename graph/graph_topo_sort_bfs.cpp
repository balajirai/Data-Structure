#include<bits/stdc++.h>
using namespace std;

vector<int> topoSort(int V, vector<int> adj[]) {
    int indegree[V] = {0};
    for (int i = 0; i < V; i++){
        for (auto it : adj[i]) {
            indegree[it]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topo;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topo.push_back(node);

        // now node is in topo sort so remove it from indegree
        for (auto it : adj[node]) {
            indegree[it]--;
            if (indegree[it] == 0){
                q.push(it);
            }
        }
    }
    return topo;
}

int main(){
    int V, E; // Number of vertices and edges

    cout << "Enter the number of vertices: ";
    cin >> V;

    cout << "Enter the number of edges: ";
    cin >> E;

    // Adjacency list representation of the graph
    vector<int> adj[V];
    
    cout << "Enter the edges (format: source destination):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> result = topoSort(V, adj);

    // Displaying the topological order
    cout << "Topological Order: ";
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}

/*
4 --> 0
4 --> 1
5 --> 2
5 --> 0
2 --> 3
3 --> 1

input : 

Enter the number of vertices: 6
Enter the number of edges: 6

4 0
4 1
5 2
5 0
2 3
3 1

Topological Order: 4 5 2 0 3 1


*/