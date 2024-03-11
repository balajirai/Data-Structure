#include <bits/stdc++.h>
using namespace std;

// Partitioning the array in two (equal/not-equal elements count) subsets [s1 + s2 = array] with s1-s2 = minimum
int solve(vector<int>& nums, int index, int sum1, int sum2) {
    if (index == nums.size()) return abs(sum1 - sum2);

    int diff1 = solve(nums, index + 1, sum1 + nums[index], sum2);
    int diff2 = solve(nums, index + 1, sum1, sum2 + nums[index]);

    return min(diff1, diff2);
}

int main(){
    int n;
    cout<<"Number of Elements : ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the Elements : ";
    for(int &a:nums) cin>>a;

    int result = solve(nums, 0, 0, 0);

    cout << "Minimum absolute difference: " << result << endl;
    return 0;
}