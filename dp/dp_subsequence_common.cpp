#include <bits/stdc++.h>
using namespace std;

// length of Longest common subsequence  (LCS) DP
int solve(string &s1, string &s2, int i, int j, vector<vector<int>>&dp){
    if(i==s1.size() || j==s2.size()) return 0;
    
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = 0;
    if(s1[i]==s2[j]){
        ans = 1 + solve(s1, s2, i+1, j+1, dp);
    }
    else{
        int case1 = solve(s1, s2, i+1, j, dp);
        int case2 = solve(s1, s2, i, j+1, dp);
        ans = max(case1, case2);
    }
    dp[i][j] = ans;
    return dp[i][j];
}

int main(){
    string s1, s2;
    cout<<"String s1 : ";
    cin>>s1;
    cout<<"String s2 : ";
    cin>>s2;
    int n1 = s1.size(), n2 = s2.size();
    vector<vector<int>>dp(n1+1, vector<int>(n2+1, -1));
    cout<<"Length of LCS : "<<solve(s1, s2, 0, 0, dp)<<endl;
    return 0;
}