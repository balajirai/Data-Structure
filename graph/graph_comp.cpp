// connected components of a given graph

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>g[N];
bool vis[N];

// dfs function
void dfs(int vertex){
    vis[vertex] = true;
    // dfs for childs
    for(int child : g[vertex]){
        if(vis[child]) continue;    // if already visited then skip and continue
        dfs(child);
    }
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
    
    int count = 0;
    for(int i=1; i<=n; i++){    // calling dfs for each node 
        if(vis[i]) continue;
        dfs(i);
        count++;
    }
    cout<<count<<endl;
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