// precomputing the even node count (of a given node) of a given tree

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>g[N];
int even_count[N];

void dfs(int vertex, int par = 0){
    if(vertex%2 == 0) even_count[vertex]++;
    for(int child : g[vertex]){
        if(child == par) continue;
        dfs(child, vertex);
        even_count[vertex] += even_count[child];
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
    
    cout<<"\nVertex         Even_count"<<endl;
    for(int i=1; i<=n; i++){
        cout<<i<<"                  "<<even_count[i]<<endl;
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