#include <bits/stdc++.h>
using namespace std;

// Next greater element (index) NGE
vector<int> nextGreater(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && nums[st.top()] <= nums[i]) {
            st.pop(); 
        }
        if (!st.empty()) {
            ans[i] = st.top();
        }
        st.push(i);
    }
    return ans;
}

int main() {

    vector<int> nums = {1, 3, 2, 4, 5};
    vector<int> result = nextGreater(nums);

    cout << "Next Greater Element Indexes : ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}