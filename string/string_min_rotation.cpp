// find the minimum number of rotations to get the same string 'S'.

#include <iostream>
#include <string>
using namespace std;

int findMinRotations(const string &S) {
    int N = S.length();
    string concatenated = S + S;
    
    // Iterate over the concatenated string starting from index 1 to N-1
    for (int i = 1; i < N; ++i) {
        // Check if the substring from position i of length N is equal to the original string
        if (concatenated.substr(i, N) == S) {
            return i;
        }
    }
    
    return N;
}

int main() {
    string S;
    cin >> S;
    
    int result = findMinRotations(S);
    cout << result << endl;
    
    return 0;
}
