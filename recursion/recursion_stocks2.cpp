#include <bits/stdc++.h>
using namespace std;

// buy and sell stocks 2 (first buy then sell any number of times) with max profit
int solve(vector<int>& prices, int index, bool can_buy){
    if(index == prices.size()) return 0;

    int profit = 0;
    if(can_buy){
        int buy  = -prices[index] + solve(prices, index+1, 0);
        int skip = solve(prices, index+1, 1);
        profit = max(buy, skip);
    }
    else{
        int sell = prices[index] + solve(prices, index+1, 1);
        int skip = solve(prices, index+1, 0);
        profit = max(sell, skip);
    }
    return profit;
}

int main(){
    int n;
    cout<<"Number of days : ";
    cin>>n;
    vector<int>prices(n);
    cout<<"Enter Prices   : ";
    for(int &a:prices) cin>>a;

    cout<<"Max Profit is  : "<<solve(prices, 0, 1)<<endl;

    return 0;
}