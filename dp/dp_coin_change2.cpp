#include <bits/stdc++.h>
using namespace std;

// coin change 2 (all possible ways to make the given amount)
int solve(vector<int>& coins, int amount, int index, vector<vector<int>>&dp){
    if(amount == 0) return 1;
    if(amount < 0 || index >= coins.size()) return 0;

    if(dp[amount][index]!=-1) return dp[amount][index];
    int ans = 0;
    int include = solve(coins, amount-coins[index], index, dp);
    int exclude = solve(coins, amount, index+1, dp);

    return dp[amount][index] = include + exclude;
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
    vector<vector<int>>dp(amount+1, vector<int>(coins.size()+1, -1));
    int ans = solve(coins, amount, 0, dp);
    cout<<"Possible ways are: "<<ans<<endl;
    
    return 0;
}