// deleting edge to maximize the product of sum of two subparts
// Not considering modulo here

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>g[N];
int subtree_sum[N];
int weight[N];

void dfs(int v, int par){
    subtree_sum[v] += weight[v];
    for(int child : g[v]){
        if(child == par) continue;
        dfs(child,v);
        subtree_sum[v] += subtree_sum[child];

    }
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

    dfs(1,0);

    long long ans = 0;
    for(int i=2; i<=n; i++){
        int part1 = subtree_sum[i];
        int part2 = subtree_sum[1] - part1;
        ans = max(ans, part1*part2);
    }

    cout<<ans<<endl;
return 0;
}