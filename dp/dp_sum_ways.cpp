#include <bits/stdc++.h>
using namespace std;

// possible ways to write n as sum of 1,3,4 (dp)
int solve(int n, vector<int>nums, vector<int>&dp){
    // base case
    if(n==0) return 1;
    if(n<0) return 0;

    if(dp[n] != -1) return dp[n];
    int ans = 0;
    for(int i=0; i<nums.size(); i++){
        ans += solve(n-nums[i], nums, dp);
    }
    dp[n] = ans;
    return dp[n];
}
int main(){
    int n;
    cout<<"Enter the Sum : ";
    cin>>n;
    vector<int>dp(n+1, -1);
    vector<int>nums{1,3,4};     // here 1,3,4 
    cout<< "Total ways to get "<<n<<" from 1, 3, 4 is : "<< solve(n,nums, dp)<<endl;
    return 0;
}