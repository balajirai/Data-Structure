// Creating graph
// direction = 0 -> undirected
// direction = 1 -> directed
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

    void printAdjList(){
        for(auto i:adj){
            cout << i.first <<" -> ";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
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
        cout<<"Enter connected nodes u & v: ";
        cin>>u>>v;
        // creating un-directed graph
        g.addEdge(u,v,0);
    }

    cout<<"\nAdjacency List\n";
    g.printAdjList();
    
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