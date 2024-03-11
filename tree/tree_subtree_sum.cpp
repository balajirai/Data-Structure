// precomputing the subtree sum (of a given node) of a given tree

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>g[N];
int subtree_sum[N];

void dfs(int vertex, int par = 0){
    subtree_sum[vertex] += vertex;      // vertex is also included in the subtree sum
    for(int child : g[vertex]){
        if(child == par) continue;
        dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child];
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n-1; i++){
        int v1, v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1);

    cout<<"vertex        subtree_sum"<<endl;
    for(int i=1; i<=n; i++){
        cout<<i<<"              "<<subtree_sum[i]<<endl;
    }
        

return 0;
}


/*
Test case

13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11

*/