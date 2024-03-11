// Graph traversal using DFS

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>g[N];
bool vis[N];

void dfs(int vertex){
    // Take action on the vertex after entering the vertex
    cout<<vertex<<endl;
    vis[vertex] = true;

    for(int child : g[vertex]){
        // Take action on child before entering the child node
        cout<<"par "<<vertex<<", child "<<child<<endl;
        if(vis[child]) continue;

        dfs(child);

        // Take action on child after exiting the child node
    }

    // Take action on vertex before exiting the vertex
}

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int v1, v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1);         // assuming 1 as vertex

return 0;
}

/*

6 9
1 3
3 2
3 4
4 6
1 5
3 5
3 6
2 6
5 6

*/