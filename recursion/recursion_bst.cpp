#include <bits/stdc++.h>
using namespace std;

// given n-nodes, find all possible unique bst
// catalan number D(N) = ∑ D(i-1)*D(n-i)
int numTrees(int n) {
    if(n <= 1) return 1;
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans += numTrees(i-1)*numTrees(n-i);
    }
    return ans;
}

int main(){
    int n;
    cout<<"Number of Nodes : ";
    cin>>n;
    cout<<"Total Unique BST: "<<numTrees(n)<<endl;
    return 0;
}