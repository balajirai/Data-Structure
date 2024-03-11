#include <iostream>
#include <vector>

using namespace std;

void generateSubsequences(const vector<int>& arr, int index, int currSum, vector<int>& subsequenceSums) {
    if (index == arr.size()) {
        subsequenceSums.push_back(currSum);
        return;
    }

    // Include 
    generateSubsequences(arr, index + 1, currSum + arr[index], subsequenceSums);

    // Exclude
    generateSubsequences(arr, index + 1, currSum, subsequenceSums);
}

int main() {
    
    vector<int> arr = {1, 2, 3};
    vector<int> subsequenceSums;

    generateSubsequences(arr, 0, 0, subsequenceSums);

    // Print the subsequence sums
    cout << "Subsequence Sums:\n";
    for (int sum : subsequenceSums) {
        cout << sum << " ";
    }

    return 0;
}