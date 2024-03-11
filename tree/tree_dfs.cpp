// finding the depth and height of a node in tree

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>g[N];
int depth[N], height[N];

void dfs(int vertex, int par = 0){
    // Take action on the vertex after entering the vertex

    for(int child : g[vertex]){
        // Take action on child before entering the child node
        if(child == par) continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        // Take action on child after exiting the child node
        height[vertex] = max(height[vertex], height[child]+1);
    }

    // Take action on vertex before exiting the vertex
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

    dfs(1);         // assuming 1 as vertex and default value of parent is already there in dfs function

    // printing height and depth
    cout<<"\nnode       depth     height"<<endl;
    for (int i = 1; i <= n; i++){
        cout<<i<<"          "<<depth[i]<<"             "<<height[i]<<endl;
    }
    
return 0;
}

/*

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