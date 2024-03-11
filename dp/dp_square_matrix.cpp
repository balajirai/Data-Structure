#include <bits/stdc++.h>
using namespace std;

// Largest square formed in a matrix (gfg)
int solve(int i, int j, int &maxi, vector<vector<int>>&mat, vector<vector<int>>&dp){
    // base case
    if(i >= mat.size() || j >= mat[0].size()) return 0;
    
    if(dp[i][j]!=-1) return dp[i][j];
    int right = solve(i, j+1, maxi, mat, dp);
    int diag  = solve(i+1, j+1, maxi, mat, dp);
    int down  = solve(i+1, j, maxi, mat, dp);
    
    if(mat[i][j] ==1){
        dp[i][j] = 1 + min({right, diag, down});
        maxi = max(maxi, dp[i][j]);
        return dp[i][j];
    }
    else return dp[i][j]=0;
}
int main(){
    int n,m;
    cout<<"Enter Row and column  : ";
    cin>>n>>m;
    vector<vector<int>>matrix(n, vector<int>(m));
    cout<<"Enter matrix Elements : ";
    for(auto &row:matrix){
        for(int &ele:row){
            cin>>ele;
        }
    }
    vector<vector<int>>dp(n, vector<int>(m,-1));
    int maxi = 0;
    solve(0,0,maxi, matrix, dp);
    cout<<"Largest Square Matrix : "<<maxi<<endl;

    return 0;
}