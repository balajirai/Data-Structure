#include <bits/stdc++.h>
using namespace std;

// Number of distinct subsequences in s1 of s2 [DP]
int solve(string &s, string &t, int i, int j, vector<vector<int>>&dp){
    if(j < 0) return 1;
    if(i < 0) return 0;

    if(dp[i][j]!=-1) return dp[i][j];
    int ans = 0;
    if(s[i]==t[j]){
        int match = solve(s, t, i-1, j-1, dp);
        int check = solve(s, t, i-1, j, dp);
        ans = match + check;
    }
    else{
        int different = solve(s, t, i-1, j, dp);
        ans = different;
    }
    return dp[i][j] = ans;
}

int main(){
    string s1, s2;
    cout<<"String s1 : ";
    cin>>s1;
    cout<<"String s2 : ";
    cin>>s2;
    int n = s1.size(), m = s2.size();
    vector<vector<int>>dp(n+1, vector<int>(m+1, -1));
    cout<<"Distinct Subsequences : "<<solve(s1, s2, n-1, m-1, dp)<<endl;
    return 0;
}

/*
Input: s = "rabbbit", t = "rabbit"
Output: 3
*/