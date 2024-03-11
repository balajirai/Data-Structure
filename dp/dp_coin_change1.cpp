#include <bits/stdc++.h>
using namespace std;

// coin change 1 (minimum coins required for the given amount)
int solve(vector<int>coins, int amount, vector<int>&dp){
    if(amount == 0) return 0;
    if(amount < 0) return INT_MAX;

    if(dp[amount]!=-1) return dp[amount];
    int ans = INT_MAX;
    for(int i=0; i<coins.size(); i++){
        int res = solve(coins, amount-coins[i], dp);
        if(res != INT_MAX) ans = min(ans, res+1);
    }
    dp[amount] = ans;
    return dp[amount];
}

int main(){
    int n, amount;
    cout<<"Types of coins   : ";
    cin>>n;
    vector<int>coins(n);
    cout<<"Coin values are  : ";
    for(int &a:coins) cin>>a;
    cout<<"Enter amount     : ";
    cin>>amount;
    vector<int>dp(amount+1,-1);
    int ans = solve(coins, amount, dp);
    if(ans == INT_MAX) ans =  -1;
    cout<<"Min coins needed : "<<ans<<endl;
    
    return 0;
}