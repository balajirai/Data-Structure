#include <bits/stdc++.h>
using namespace std;

// 239. Sliding Window Maximum (important leetcode)

/*
Steps : 

1. When new element comes nums[i], make space for it (window size can't be greater than k) pop_front() when dq.front() <= i-k; 

2. Now, when nums[i] comes, there is no need to keep smaller elements in that window, pop_back() them

3. Now, push i in dequeue for nums[i]

4. If (i >= k-1), then dq.front() will be answer for that window


*/


// optimal (using dequeue) -> O(n)
vector<int> maxSlidingWindow(vector<int> &nums, int k) {
    int n = nums.size();
    vector<int> ans;
    deque<int>dq;
    
    for(int i=0; i<n; i++){
        // step 1 : make space for nums[i]
        while(!dq.empty() && dq.front() <= i-k){
            dq.pop_front();
        }

        // step 2 : remove smaller element (monotonic decreasing dequeue)
        while (!dq.empty() && nums[i] >= nums[dq.back()]){
            dq.pop_back();
        }

        // step 3 : push i (index) in dequeue
        dq.push_back(i);

        // step 4 : valid window is available
        if(i >= k-1){
            ans.push_back(nums[dq.front()]);
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = maxSlidingWindow(nums, k);

    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}


// 1. Brute force  ->  O(n^2)
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


// 2. Better Approach (max Heap) -> O(N*log(K))

// vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//     // better (max Heap)
//     vector<int> ans;
//     priority_queue<pair<int, int>> heap;

//     for (int i = 0; i < k; i++){
//         heap.push({nums[i], i});
//     }
//     ans.push_back(heap.top().first);

//     for (int i = k; i < nums.size(); i++) {
//         heap.push({nums[i], i});
//         while (heap.top().second <= i - k){
//             heap.pop();
//         }
//         ans.push_back(heap.top().first);
//     }

//     return ans;
// }