#include <bits/stdc++.h>
using namespace std;

// longest increasing subsequence
int solve(int a[], int n, int curr, int prev, vector<vector<int>>&dp){
    // base case
    if(curr==n) return 0;
    
    if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];

    // include
    int include = 0;
    if(prev == -1 || a[curr] > a[prev]){
        include = 1 + solve(a, n, curr+1, curr, dp);
    }
    int exclude = solve(a, n, curr+1, prev, dp);
    
    dp[curr][prev+1] =  max(include, exclude);
    return dp[curr][prev+1];
}

int main(){
    int n;
    cout<<"Enter Array Length   : ";
    cin>>n;
    int a[n];
    cout<<"Enter Array Elements : ";
    for(int &x:a) cin>>x;
    vector<vector<int>>dp(n, vector<int>(n+1, -1));
    cout<<"Longest Subsequence Length : "<<solve(a,n,0,-1, dp);
    return 0;
}