// storing connected components of a given graph

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>g[N];
bool vis[N];

vector<vector<int>> cc;             // connected component
vector<int> current_cc;             // current connected component 


// dfs function
void dfs(int vertex){
    vis[vertex] = true;
    current_cc.push_back(vertex);

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
        current_cc.clear();     // clear previous connected comp of other parts of graphs
        dfs(i);
        cc.push_back(current_cc);
        count++;
    }
    cout<<count<<endl;      // we can also find count by cc.size()

    // printing connected components
    for(auto c_cc : cc){
        for(int node : c_cc){
            cout<<node<<" ";
        }
        cout<<endl;
    }
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