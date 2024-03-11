#include <bits/stdc++.h>
using namespace std;

// buy and sell stocks 5 with fee (first buy then sell any number of times) with max profit
int solve(vector<int>& prices, int index, int can_buy, int &fee, vector<vector<int>>&dp){
    if(index == prices.size()) return 0;

    if(dp[index][can_buy]!=-1) return dp[index][can_buy];
    int profit = 0;
    if(can_buy){
        int buy  = -prices[index] + solve(prices, index+1, 0, fee, dp);
        int skip = solve(prices, index+1, 1, fee, dp);
        profit = max(buy, skip);
    }
    else{
        int sell = prices[index] - fee + solve(prices, index+1, 1, fee, dp);
        int skip = solve(prices, index+1, 0, fee, dp);
        profit = max(sell, skip);
    }
    dp[index][can_buy] = profit;
    return dp[index][can_buy];
}

int main(){
    int n, fee;
    cout<<"Number of days : ";
    cin>>n;
    vector<int>prices(n);
    cout<<"Enter Prices   : ";
    for(int &a:prices) cin>>a;
    cout<<"Trasaction fee : ";
    cin>>fee;
    vector<vector<int>>dp(n+1, vector<int>(2,-1));
    cout<<"Max Profit is  : "<<solve(prices, 0, 1, fee, dp)<<endl;

    return 0;
}