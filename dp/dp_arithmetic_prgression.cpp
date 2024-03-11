#include <bits/stdc++.h>
using namespace std;

// longest arithmetic progression [LAP] length (Tabulation) leetcode
int longestArithSeqLength(vector<int>& nums) {
    int n = nums.size();
    if(n <= 2) return n;
    vector<unordered_map<int, int>> dp(n);
    int ans = 0;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            int diff =nums[i]-nums[j], cnt=1;
            if(dp[j].count(diff)) cnt=dp[j][diff];
            dp[i][diff]=cnt+1;
            ans=max(ans,dp[i][diff]);
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Number of Elements : ";
    cin>>n;
    cout<<"Enter Elements     : ";
    vector<int>nums(n);  // unsorted array
    for(int i=0; i<n; i++) cin>>nums[i];
    cout<<"Length of Longest AP: "<<longestArithSeqLength(nums)<<endl;
    return 0;
}