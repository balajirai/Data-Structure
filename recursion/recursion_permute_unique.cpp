#include <bits/stdc++.h>
using namespace std;

void permuteUnique(string rest, string soFar, set<char>&usedChars) {
    if (rest == "") {
        cout << soFar << ", ";
    } 
    else {
        for (int i = 0; i < rest.length(); i++) {
            if (usedChars.count(rest[i]) == 0) {
                // Mark the character as used
                usedChars.insert(rest[i]);

                // Remove character we are on from rest
                string remaining = rest.substr(0, i) + rest.substr(i + 1);

                // Recursive call
                permuteUnique(remaining, soFar + rest[i], usedChars);

                // Backtrack: remove the character from the set to allow its use in other positions
                usedChars.erase(rest[i]);
            }
        }
    }
}

int main() {
    string word;
    cout<<"Enter the word : ";
    cin>>word;

    // total n! permutations
    set<char> usedChars;
    permuteUnique(word, "", usedChars);

    return 0;
}
