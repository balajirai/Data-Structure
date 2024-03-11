#include <bits/stdc++.h>
using namespace std;

// Count the subsets with sum equals target (target is +ve)
int solve(vector<int>nums, int target, int index, vector<vector<int>>&dp){
    if(target==0) return 1;
    if(target<0 || index==nums.size()) return 0;

    if(dp[index][target]!=-1) return dp[index][target];
    int take = solve(nums, target-nums[index], index+1, dp);
    int skip = solve(nums, target, index+1, dp);

    return dp[index][target] = take + skip;
}
int main(){
    int n, target;
    cout<<"Number of Elements : ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the Elements : ";
    for(int &a:nums) cin>>a;
    cout<<"Enter the target   : ";
    cin>>target;
    vector<vector<int>>dp(n+1, vector<int>(target+1, -1));
    cout<<"Possible subsets   : "<<solve(nums, target, 0, dp)<<endl;
    return 0;
}