#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

// Dijkstra Algorithm for Directed/Undirected and Weighted(positive)/Unweighted Graph (General) -> O(E + V^2)
void dijkstra(int source, vector<bool>&vis, vector<int>&dist, vector<pair<int,int>>adj[]){
    // set pair {wt, node}
    set<pair<int,int>>st;

    st.insert({0, source});
    dist[source] = 0;

    while (!st.empty()){
        int node = (*(st.begin())).second;  // first element of set (with least distance)
        st.erase(st.begin());

        if(vis[node]) continue;
        vis[node] = true;

        for(auto &v:adj[node]){
            int child = v.first, wt = v.second;
            if(dist[node] + wt < dist[child]){
                dist[child] = dist[node] + wt;
                st.insert({dist[child], child});
            }
        }
    }
    
}

int main(){
    int n, m, src;
    cout<<"Enter number of vertex, edges and source : ";
    cin>>n>>m>>src;

    vector<pair<int,int>>adj[n];

    // directed graph
    cout<<"Enter vertex, vertex, weight : ";
    for(int i=0; i<m; i++){
        int u, v, wt;
        cin>>u>>v>>wt;

        adj[u].push_back({v,wt});
    }

    vector<bool>vis(n, false);
    vector<int>dist(n, INF);

    dijkstra(src, vis, dist, adj);

    for(int i=0; i<n; i++){
        cout << "Shortest distance from "<< src <<" to " << i << " is : " << dist[i] << endl;
    }

    return 0;
}


/*
graph : 
from -> (to, weight)

0 -> (1, 4), (2, 1)
1 -> (3, 2)
2 -> (1, 1), (3, 5)
3 -> (4, 3)


input formate:

5 6 0

0 1 4
0 2 1
1 3 2
2 1 1
2 3 5
3 4 3

*/