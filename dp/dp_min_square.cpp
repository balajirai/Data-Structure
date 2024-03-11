#include <bits/stdc++.h>
using namespace std;

// get min square sum (using dp)
// ie, for 100 its 10*10 so ans = 1 (other answers 8*8+6*6 but not min)
int solve(int n, vector<int>&dp){
    // base case
    if(n==0) return 0;
    if(n<0) return 0;
    
    if(dp[n]!=-1) return dp[n];
    int mini = n;
    for(int i=1; i*i<=n; i++){
        int res = solve(n-i*i, dp);
        mini = min(mini, res+1);
    }
    dp[n] = mini;
    return dp[n];
}
int main(){
    int n;
    cout<<"Enter Number     : ";
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<"Min Square count : "<<solve(n, dp)<<endl;
    return 0;
}