#include <bits/stdc++.h>
using namespace std;

void buildMinHeap(const string& str) {
    unordered_map<char, int> freqMap;
    for (char c : str) {
        freqMap[c]++;
    }

    // Define lambda function for custom comparison
    auto cmp = [&](const pair<char, int>& a, const pair<char, int>& b) {
        if (a.second != b.second) {
            return a.second > b.second; // Sort by frequency in descending order
        }
        return a.first > b.first;       // If frequencies are equal, sort by character in descending order
    };

    priority_queue<pair<char, int>, vector<pair<char, int>>, decltype(cmp)> minHeap(cmp);

    for (auto& pair : freqMap) {
        minHeap.push(pair);
    }

    // Print min heap elements
    while (!minHeap.empty()) {
        pair<char, int> node = minHeap.top();
        minHeap.pop();
        cout << "Character: " << node.first << ", Frequency: " << node.second << endl;
    }
}

int main() {
    string inputStr = "aaabbbbcccddeee";
    buildMinHeap(inputStr);
    return 0;
}
