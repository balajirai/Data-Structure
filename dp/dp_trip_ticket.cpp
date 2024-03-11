#include <bits/stdc++.h>
using namespace std;

// ninjas trip ticket (1 day, 7 days, 30 days pass availabe)
int solve(int n, vector<int> days, vector<int> cost, int index, vector<int>&dp){
    // base case
    if(index >= n) return 0;

    if(dp[index] != -1) return dp[index];

    // 1 day pass
    int option1 = cost[0] + solve(n, days, cost, index+1, dp);

    // 7 days pass
    int i;
    for(i=index; i<n && days[i]<days[index]+7; i++);
    int option2 = cost[1] + solve(n, days, cost, i, dp);

    // 30 days pass
    for(i=index; i<n && days[i]<days[index]+30; i++);
    int option3 = cost[2] + solve(n, days, cost, i, dp);

    dp[index] =  min({option1, option2, option3});
    return dp[index];

}

int main(){
    int n;
    cout<<"Number of days : ";
    cin>>n;
    vector<int>days(n), cost = {1, 4, 25};
    cout<<"Enter dates    : ";
    for(int i=0; i<n; i++) cin>>days[i];
    vector<int>dp(n+1, -1);
    cout<<"Minimum cost   : "<<solve(n,days, cost, 0, dp);
    return 0;
}