#include <iostream>
#include <string>
using namespace std;

void findSubsequences(const string& input, int index, string current) {
    // Base case
    if (index == input.length()) {
        if(current == "") cout<<"{}";
        else cout << "{" <<current << "}, ";
        return;
    }

    // include the current character
    findSubsequences(input, index + 1, current + input[index]);

    // exclude the current character
    findSubsequences(input, index + 1, current);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "Subsequences of the string are: ";
    findSubsequences(input, 0, "");

    return 0;
}
