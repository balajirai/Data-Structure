#include <bits/stdc++.h>
using namespace std;

// buy and sell stocks 3 (first buy then sell at most 2 times) with max profit
int solve(vector<int>& prices, int index, int can_buy, int limit){
    if(index == prices.size() || limit == 0) return 0;

    int profit = 0;
    if(can_buy){
        int buy = -prices[index] + solve(prices, index+1, 0, limit);
        int skip = solve(prices, index+1, 1, limit);
        profit = max(buy, skip);
    }
    else{
        int sell = prices[index] + solve(prices, index+1, 1, limit-1);
        int skip = solve(prices, index+1, 0, limit);
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
    // limit = 2
    cout<<"Max Profit is  : "<<solve(prices, 0, 1, 2)<<endl;

    return 0;
}