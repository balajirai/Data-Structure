#include <bits/stdc++.h>
using namespace std;

// Previous Smaller element (index) PSE
vector<int> prevSmaller(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 0; i <n; i++) {
        while (!st.empty() && nums[st.top()] >= nums[i]) {
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

    vector<int> nums = {2, 3, 2, 4, 7};
    vector<int> result = prevSmaller(nums);

    cout << "Previous Smaller Element Indexes : ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}