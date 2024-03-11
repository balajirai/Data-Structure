#include <bits/stdc++.h>
using namespace std;

// Previous greater element (index) PGE
vector<int> prevGreater(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++) {
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

    vector<int> nums = {4, 3, 2, 0, 5};
    vector<int> result = prevGreater(nums);

    cout << "Previous Greater Element Indexes : ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}