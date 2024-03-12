#include <bits/stdc++.h>
using namespace std;

// It works both for finding substring as well as character

// rfind(char ch, size_t position);
// rfind(string s, size_t position); 

int main(){
    string str = "geeksforgeeks a computer science";
    string str1 = "geeks";

    // last occurrence of "geeks"
    size_t found = str.rfind(str1);

    if (found != string::npos){
        cout << "Last occurrence is " << found << endl;
    }

    // Previous occurance of "geeks"
    found = str.rfind(str1, found - 1);

    if (found != string::npos){
        cout << "Previous occurrence is " << found << endl;
    }

    return 0;
}
