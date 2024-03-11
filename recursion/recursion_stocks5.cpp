#include <bits/stdc++.h>
using namespace std;

// buy and sell stocks 5 with fee (first buy then sell any number of times with fee) with max profit
int solve(vector<int>& prices, int index, bool can_buy, int &fee){
    if(index == prices.size()) return 0;

    int profit = 0;
    if(can_buy){
        int buy  = -prices[index] + solve(prices, index+1, 0, fee);
        int skip = solve(prices, index+1, 1, fee);
        profit = max(buy, skip);
    }
    else{
        int sell = prices[index] - fee + solve(prices, index+1, 1, fee);
        int skip = solve(prices, index+1, 0, fee);
        profit = max(sell, skip);
    }
    return profit;
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
    cout<<"Max Profit is  : "<<solve(prices, 0, 1, fee)<<endl;

    return 0;
}