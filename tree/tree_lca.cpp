// LCA (lowest common ancestor) of a generic (any tree) tree

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>g[N];
int par[N];

// dfs for storing parents of i as par[i]
void dfs(int v, int p=-1){
    par[v] = p;
    for(int child : g[v]){
        if(child == p) continue;
        dfs(child, v);
    }
}

// Finding the path by storing parents of parents and then reversing the array
vector<int>path(int v){
    vector<int>ans;
    while (v != -1){
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n-1; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1);
    // taking input of nodes whose lca is to be found
    int x,y;
    cin>>x>>y;

    // path of node x and y from root node
    vector<int>path_x = path(x);
    vector<int>path_y = path(y);

    int mn_ln = min(path_x.size(), path_y.size());

    int lca = -1;

    for(int i=0; i<mn_ln; i++){
        if(path_x[i] == path_y[i]){
            lca = path_x[i];
        }
        else break;
    }

    cout<<"LCA of the tree is : "<<lca<<endl;
return 0;
}