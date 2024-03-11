#include <bits/stdc++.h>
using namespace std;

// n-post and k-colours // D(N,K) = D(N-2)*(K-1) + D(N-1)*(K-1)
// possible ways to paint posts so that two adjacent posts are not of same colour

int solve(int n, int k, vector<int>&dp){
    // base case
    if(n==1) return k;
    if(n==2) return k+k*(k-1);

    if(dp[n]!=-1) return dp[n];
    int same = solve(n-2, k, dp)*(k-1);
    int diff = solve(n-1, k, dp)*(k-1);

    dp[n] = same+diff;
    return dp[n];
}
int main(){
    int n,k;
    cout<<"Enter N and K : ";
    vector<int>dp(n+1,-1);
    cin>>n>>k;
    cout<<"Possible ways to paint : "<<solve(n,k,dp)<<endl;
    return 0;
}