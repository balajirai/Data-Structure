#include <bits/stdc++.h>
using namespace std;

// reducing dishes (leetcode)
int solve(vector<int>&satisfaction, int index, int time, vector<vector<int>>&dp){
    // base case
    if(index==satisfaction.size()) return 0;

    if(dp[index][time]!=-1) return dp[index][time];
    int include = satisfaction[index]*(time+1) + solve(satisfaction, index+1, time+1, dp);
    int exclude = solve(satisfaction, index+1, time, dp);

    dp[index][time] =  max(include, exclude);
    return dp[index][time];
}

int main(){
    int n;
    cout<<"Enter the number of dishes    : ";
    cin>>n;
    vector<int>satisfaction(n);
    cout<<"Enter satisfaction levels     : ";
    for(int &x:satisfaction) cin>>x;

    sort(satisfaction.begin(), satisfaction.end());
    vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
    cout<<"Maximum Like Time Coefficient : "<< solve(satisfaction, 0, 0, dp)<<endl;
    
    return 0;
}