#include <iostream>
#include <vector>

using namespace std;

void generateSubsequences(const vector<int>& arr, int index, vector<int>& currentSubsequence, vector<vector<int>>& allSubsequences) {
    if (index == arr.size()) {
        allSubsequences.push_back(currentSubsequence);
        return;
    }

    // Exclude
    generateSubsequences(arr, index + 1, currentSubsequence, allSubsequences);

    // Include
    currentSubsequence.push_back(arr[index]);
    generateSubsequences(arr, index + 1, currentSubsequence, allSubsequences);

    // Backtrack to restore the state before the inclusion of the current element
    currentSubsequence.pop_back();
}

int main() {

    vector<int> arr = {1, 2, 3};
    vector<int> currentSubsequence;
    vector<vector<int>> allSubsequences;

    generateSubsequences(arr, 0, currentSubsequence, allSubsequences);

    // Print all subsequences
    cout << "All Subsequences:\n";
    for (const auto& subsequence : allSubsequences) {
        if(subsequence.size()==0) cout<<"NULL";
        for (int num : subsequence) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}