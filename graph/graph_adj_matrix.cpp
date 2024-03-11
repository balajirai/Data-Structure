// Representation of graph using adjacency matrix

#include <bits/stdc++.h>
using namespace std;

// we already defined graph of N*N
const int N = 10;
int graph[N][N];

int main(){
    int n,m;
    cin>>n>>m;

    // taking input of only connected edges (the are only m edges)
    for(int i=0; i<m; i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1][v2];
        graph[v2][v1];
    }

    // space complexity is : O(N^2)
    // for N = 10^6 we cann't use this method (we can using upto 10^7 contigous memory of array)
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