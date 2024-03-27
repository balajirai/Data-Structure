#include <bits/stdc++.h>
using namespace std;


// maximum element in a window of size k
vector<int> slidingWindowMaximum(vector<int> &nums, int k) {
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n - k + 1; i++) {
        int maxEle = INT_MIN;
        for (int j = i; j < i + k; j++) {
            maxEle = max(maxEle, nums[j]);
        }
        ans.push_back(maxEle);
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = slidingWindowMaximum(nums, k);

    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}


// brute force  
// if array is of size n and window size is k then total subarrays/windows = n-k+1

// vector<int> slidingWindowMaximum(vector<int> &nums, int k) {
//     int n = nums.size();
//     vector<int> ans;
//     for (int i = 0; i < n - k + 1; i++) {
//         int maxEle = INT_MIN;
//         for (int j = i; j < i + k; j++) {
//             maxEle = max(maxEle, nums[j]);
//         }
//         ans.push_back(maxEle);
//     }
//     return ans;
// }
