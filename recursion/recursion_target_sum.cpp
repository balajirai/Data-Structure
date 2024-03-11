#include <bits/stdc++.h>
using namespace std;

// No. of ways to achieve the Target sum by adding + or - sign in the given array elements
int solve(vector<int>& nums, int target, int index){
    if(index == nums.size() && target==0) return 1;
    if(index == nums.size()) return 0;

    // decision
    int positive = solve(nums, target-nums[index], index+1);
    int negative = solve(nums, target+nums[index], index+1);

    return positive + negative;
}

int main(){
    int n, target;
    cout<<"Number of Elements : ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the Elements : ";
    for(int &a:nums) cin>>a;
    cout<<"Enter the Target   : ";
    cin>>target;

    cout<<"Ways to get target : "<<solve(nums, target, 0)<<endl;
    return 0;
}

/*
Input: nums = [1,1,1,1,1], target = 3
Output: 5
*/