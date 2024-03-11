// merge K sorted arrays  O(n log (k))

#include<bits/stdc++.h>
using namespace std;

vector<int> mergeKSortedArrays(vector<vector<int>>& kArrays, int k) {
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;

    // pushing first element of every array, row number of that array, and 0 (ie. index of the element in that array)
    for (int i = 0; i < k; i++) {
        pq.push(make_tuple(kArrays[i][0], i, 0));
    }

    vector<int> ans;

    while (!pq.empty()) {
        tuple<int, int, int> tp = pq.top();
        ans.push_back(get<0>(tp));
        int kthArr = get<1>(tp);        // row (ie. kth array)
        int index = get<2>(tp);         // col (ie. index of element in the kth array)

        pq.pop();

        // checking boundary condition for kth array and then pushing next element
        if (index + 1 < kArrays[kthArr].size()) {
            pq.push(make_tuple(kArrays[kthArr][index + 1], kthArr, index + 1));
        }
    }

    return ans;
}

int main() {
    // Example usage
    vector<vector<int>> kArrays = {
        {1, 3, 5},
        {2, 4, 6},
        {0, 7, 8}
    };
    int k = 3;

    vector<int> mergedArray = mergeKSortedArrays(kArrays, k);

    cout << "Merged sorted array:" << endl;
    for (int num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
