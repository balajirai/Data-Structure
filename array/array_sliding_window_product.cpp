#include <bits/stdc++.h>
using namespace std;

// 713. Subarray Product Less Than K
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int start = 0, end = 0, n = nums.size(), ans = 0;
    long long product = 1;
    while(end < n){
        product *= nums[end];
        while(start <= end && product >= k){
            product /= nums[start];
            start++;
        }
        ans += (end-start+1);
        end++;
    }
    return ans;
}


int main() {
    vector<int> nums = {10,5,2,6};
    int k = 100;
    int result = numSubarrayProductLessThanK(nums, k);
    cout << "Number of subarrays with product less than " << k << " : " << result << endl;

    return 0;
}

/*
Input: nums = [10,5,2,6], k = 100
Output: 8


Input: nums = [1,2,3], k = 0
Output: 0

*/
