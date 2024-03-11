#include <bits/stdc++.h>
using namespace std;

// buy and sell stocks 4 (first buy then sell at most k times) with max profit
int solve(vector<int>& prices, int index, int can_buy, int limit, vector<vector<vector<int>>>&dp){
    if(index == prices.size() || limit == 0) return 0;

    if(dp[index][can_buy][limit]!=-1) return dp[index][can_buy][limit];
    int profit = 0;
    if(can_buy){
        int buy = -prices[index] + solve(prices, index+1, 0, limit, dp);
        int skip = solve(prices, index+1, 1, limit, dp);
        profit = max(buy, skip);
    }
    else{
        int sell = prices[index] + solve(prices, index+1, 1, limit-1, dp);
        int skip = solve(prices, index+1, 0, limit, dp);
        profit = max(sell, skip);
    }
    dp[index][can_buy][limit] = profit;
    return dp[index][can_buy][limit];
}

int main(){
    int n, k;
    cout<<"Number of days : ";
    cin>>n;
    vector<int>prices(n);
    cout<<"Enter Prices   : ";
    for(int &a:prices) cin>>a;
    // transaction limit  : k
    cout<<"Enter  limit   : ";
    cin>>k;
    vector<vector<vector<int>>>dp(n+1, vector<vector<int>>(2, vector<int>(3, -1)));
    cout<<"Max Profit is  : "<<solve(prices, 0, 1, k, dp)<<endl;

    return 0;
}