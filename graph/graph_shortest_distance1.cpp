// unweighted graph and undirected graphs (page 262 dsa made easy)
// shortest distance array from source to all other nodes

#include <bits/stdc++.h>
using namespace std;

// unweighted shortest distance
void shortestDistance(int source, vector<int>&distance, vector<vector<int>>&graph){
    queue<int>q;
    q.push(source);
    distance[source] = 0;

    while (!q.empty()){
        int node = q.front();
        q.pop();

        for(int child:graph[node]){
            if(distance[child] == -1){
                distance[child] = distance[node] + 1;
                q.push(child);
            }
        }
    }
}

int main(){
    // graph representation (adjacency list) undirected graphs
    vector<vector<int>> graph = {
        {1, 2},     // Node 0 is connected to nodes 1 and 2
        {0, 3, 4},  // Node 1 is connected to nodes 0, 3, and 4
        {0, 4},     // Node 2 is connected to nodes 0 and 4
        {1},        // Node 3 is connected to node 1
        {1, 2}      // Node 4 is connected to nodes 1 and 2
    };

    int nodes = graph.size();
    int source = 0; // select source here
    
    vector<int>distance(nodes, -1);

    shortestDistance(source, distance, graph);

    for(int i=0; i<nodes; i++){
        cout << "Shortest distance from "<< source <<" to " << i << " is : " << distance[i] << endl;
    }

    return 0;
}