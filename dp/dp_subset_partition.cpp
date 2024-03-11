#include <bits/stdc++.h>
using namespace std;

// Partitioning the array in two (equal/not-equal elements count) subsets [s1 + s2 = array] with |s1-s2| = minimum
int solve(vector<int>& nums, int index, int sum1, int sum2, vector<vector<int>>&dp) {
    if (index == nums.size()) return abs(sum1 - sum2);

    if(dp[sum1][sum2]!=-1) return dp[sum1][sum2];

    int diff1 = solve(nums, index + 1, sum1 + nums[index], sum2, dp);
    int diff2 = solve(nums, index + 1, sum1, sum2 + nums[index], dp);

    return dp[sum1][sum2] = min(diff1, diff2);
}

int main(){
    int n, total = 0;
    cout<<"Number of Elements : ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the Elements : ";
    for(int &a:nums) cin>>a;
    for(int &a:nums) total+=a;
    vector<vector<int>>dp(total+1, vector<int>(total+1, -1));
    int result = solve(nums, 0, 0, 0, dp);

    cout << "Minimum absolute difference: " << result << endl;
    return 0;
}