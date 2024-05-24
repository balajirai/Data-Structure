#include <bits/stdc++.h>
using namespace std;

// using built in fucntion
vector<string> splitString(const string &str) {
    vector<string> result;
    istringstream iss(str);
    string word;
    while (iss >> word) {
        result.push_back(word);
    }
    return result;
}

// using user define function
vector<string> splitString2(const string &str) {
    vector<string> result;
    string word;
    for (char ch : str) {
        if (ch == ' ') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
        } else {
            word += ch;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    return result;
}

int main() {
    string input = "this is a test string";
    vector<string> words = splitString(input);
    // vector<string> words = splitString2(input);
    
    for (const auto &word : words) {
        cout << word << endl;
    }
    
    return 0;
}