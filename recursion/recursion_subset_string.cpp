#include <iostream>
#include <vector>
using namespace std;

void findSubsets(const string& input, int index, string current, vector<string>& subsets) {
    // Base case 
    if (index == input.length()) {
        subsets.push_back(current);
        return;
    }

    // include the current character
    findSubsets(input, index + 1, current + input[index], subsets);

    // exclude the current character
    findSubsets(input, index + 1, current, subsets);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    vector<string> subsets;
    findSubsets(input, 0, "", subsets);

    cout << "Subsets of the string are: ";
    for (const auto& subset : subsets) {
        if(subset == "") cout<<"{}";
        else cout << "{" << subset << "}, ";
    }
    cout<<endl;

    return 0;
}
