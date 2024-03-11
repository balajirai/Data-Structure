//  BFS of graph
#include <bits/stdc++.h>
using namespace std;

class graph{
public:
    unordered_map<int, vector<int>>adj;
    void addEdge(int u, int v, int direction){
        // create edge from u to v 
        adj[u].push_back(v);
        if(direction == 0) adj[v].push_back(u);
    }
    
    void bfs(int node, vector<bool>&visited, vector<int>&ans){
        queue<int>q;
        q.push(node);
        visited[node] = true;

        while (!q.empty()){
            int current = q.front();
            q.pop();
            ans.push_back(current);

            for(auto x:adj[current]){
                if(!visited[x]){
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
    }
};

int main(){
    int n, m;
    cout<<"Enter the number of Nodes : ";
    cin>>n;
    cout<<"Enter the number of Edges : ";
    cin>>m;

    graph g;

    for (int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    cout<<"\nBFS Traversal : ";
    vector<bool>visited(n, false);
    vector<int>ans;

    g.bfs(0, visited, ans);
    for(int &x:ans){
        cout<<x<<" ";
    }
    cout<<endl;

    
    return 0;
}

/*
Nodes : 5
Edges : 6

0 1
1 2
2 3
3 1
3 4
0 4

*/
