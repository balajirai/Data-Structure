#include <bits/stdc++.h>
using namespace std;

// It works both for finding substring as well as character

// find(char ch, size_t position);
// find(string s, size_t position); 

int main(){
    string str = "geeksforgeeks a computer science";
    string str1 = "geeks";

    // First occurrence of "geeks"
    size_t found = str.find(str1);      // no second parameter for first occurance

    if (found != string::npos){
        cout << "First occurrence is " << found << endl;
    }

    // Next occurance of "geeks"
    found = str.find(str1, found + 1);

    if (found != string::npos){
        cout << "Next occurrence is " << found << endl;
    }

    return 0;
}

