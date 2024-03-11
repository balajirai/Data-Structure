#include <bits/stdc++.h>
using namespace std;

// given n-nodes, find all possible unique bst
// catalan number D(N) = ∑ D(i-1)*D(n-i)

int solve(int n, vector<int>&dp){
    if(n <= 1) return 1;

    if(dp[n]!=-1) return dp[n];
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans += solve(i-1,dp)*solve(n-i,dp);
    }
    dp[n] = ans;
    return dp[n];
}

int main(){
    int n;
    cout<<"Number of Nodes : ";
    cin>>n;
    vector<int>dp(n+1, -1);
    cout<<"Total Unique BST: "<<solve(n, dp)<<endl;
    return 0;
}