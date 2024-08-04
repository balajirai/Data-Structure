#include <iostream>
#include <vector>

using namespace std;

void printAllSubarrays(vector<int>& arr) {
    int n = arr.size();

    // Start point of subarray
    for (int start = 0; start < n; ++start) {
        // End point of subarray
        for (int end = start; end < n; ++end) {
            // Print the subarray from start to end
            cout << "[";
            for (int k = start; k <= end; ++k) {
                cout << arr[k];
                if (k < end) cout << ", ";
            }
            cout << "]" << endl;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4};

    cout << "All subarrays of the given array are:" << endl;
    printAllSubarrays(arr);

    return 0;
}