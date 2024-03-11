#include <bits/stdc++.h>
using namespace std;

// Count the subsets with sum equals target (target is +ve)
int solve(vector<int>nums, int target, int index){
    if(target==0) return 1;
    if(target<0 || index==nums.size()) return 0;

    int take = solve(nums, target-nums[index], index+1);
    int skip = solve(nums, target, index+1);

    return take + skip;
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
    cout<<"Possible subsets   : "<<solve(nums, target, 0)<<endl;
    return 0;
}