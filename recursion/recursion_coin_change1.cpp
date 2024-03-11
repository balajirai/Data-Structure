#include <bits/stdc++.h>
using namespace std;

// coin change 1 (minimum coins required for the given amount)
int solve(vector<int>coins, int amount){
    if(amount == 0) return 0;
    if(amount < 0) return INT_MAX;

    int ans = INT_MAX;
    for(int i=0; i<coins.size(); i++){
        int res = solve(coins, amount-coins[i]);
        if(res != INT_MAX) ans = min(ans, res+1);
    }
    return ans;
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
    int ans = solve(coins, amount);
    if(ans == INT_MAX) ans =  -1;
    cout<<"Min coins needed : "<<ans<<endl;
    
    return 0;
}