// connected components of a given graph

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>g[N];
bool vis[N];

// dfs function
bool dfs(int vertex, int par){
    vis[vertex] = true;
    bool LoopExist = false;
    for(int child : g[vertex]){
        if(vis[child] && child == par) continue;
        if(vis[child]) return true;
        
        LoopExist |=  dfs(child, vertex);
    }
    return LoopExist;
}

int main(){
    int n,e;
    cin>>n>>e;
    for (int i = 0; i < e; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    
    bool isLoop = false;
    for(int i=1; i<=n; i++){    // calling dfs for each node 
        if(vis[i]) continue;
        if(dfs(i,-1)){
            isLoop = true;
            break;
        }

    }
    cout<<isLoop<<endl;
return 0;
}


/*

8 5
1 2
2 3
2 4
3 5
6 7

*/