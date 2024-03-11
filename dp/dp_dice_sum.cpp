#include <bits/stdc++.h>
using namespace std;

// N-dices, having M faces from 1-M, target is X (all possible ways dp)
long long solve(int dice, int faces, int target, vector<vector<long long>>&dp){
    // base cases
    if(target < 0) return 0;
    if(dice==0 && target!=0) return 0;
    if(dice!=0 && target==0) return 0;
    if(dice==0 && target==0) return 1;
    
    if(dp[dice][target]!=-1) return dp[dice][target];
    
    long long ans = 0;
    for(int i=1; i<=faces; i++){
        ans = ans + solve(dice-1, faces, target-i, dp);
    }
    dp[dice][target] = ans;
    return dp[dice][target];
}

int main(){
    int dice, faces, target;
    cout<<"Number of dices and faces : ";
    cin>>dice>>faces;
    cout<<"Target sum is : ";
    cin>>target;
    vector<vector<long long>>dp(dice+1, vector<long long>(target+1, -1));
    cout<<"Possible ways are : "<<solve(dice, faces, target, dp);
    
    return 0;
}