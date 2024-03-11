#include <bits/stdc++.h>
using namespace std;

// dp solution for deranging n thing on n places (none should be at correct place)
// D(N) = N-1* (D(N-1) + D(N-2))
int solve(int n, vector<int>&dp){
    // base case
    if(n==1) return 0;
    if(n==2) return 1;

    if(dp[n] != -1) return dp[n];
    dp[n] = (n-1)*(solve(n-1, dp) + solve(n-2, dp));
    return dp[n];
}

int main(){
    int n;
    cout<<"Number of items : ";
    cin>>n;
    vector<int>dp(n+1, -1);
    cout<<"Derangements    : "<<solve(n,dp)<<endl;
    return 0;
}