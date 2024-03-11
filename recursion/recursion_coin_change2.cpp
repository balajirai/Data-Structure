#include <bits/stdc++.h>
using namespace std;

// coin change 2 (all possible ways to make the given amount)
int solve(vector<int>& coins, int amount, int index){
    if(amount == 0) return 1;
    if(amount < 0 || index >= coins.size()) return 0;

    int ans = 0;
    int include = solve(coins, amount-coins[index], index);
    int exclude = solve(coins, amount, index+1);

    return include + exclude;
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
    int ans = solve(coins, amount, 0);
    cout<<"Possible ways are: "<<ans<<endl;
    
    return 0;
}