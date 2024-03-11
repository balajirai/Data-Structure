#include <bits/stdc++.h>
using namespace std;

// Longest common subsequence  (LCS)
string solve(string &s1, string &s2, int i, int j, vector<vector<string>>&dp){
    if(i==s1.size() || j==s2.size()) return "";
    
    if(dp[i][j]!="") return dp[i][j];
    string ans;
    if(s1[i]==s2[j]){
        ans = s1[i] + solve(s1, s2, i+1, j+1, dp);
    }
    else{
        string case1 = solve(s1, s2, i+1, j, dp);
        string case2 = solve(s1, s2, i, j+1, dp);
        ans = case1.size() > case2.size() ? case1 : case2;
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
    vector<vector<string>>dp(n1+1, vector<string>(n2+1, ""));
    cout<<"LCS is : "<<solve(s1, s2, 0, 0, dp)<<endl;
    return 0;
}