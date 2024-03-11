#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s) {
    if (s.length() < 2) { // base case
        return true;
    } else { // recursive case
        if (s[0] != s[s.length() - 1]) {
            return false;
        }
        string middle = s.substr(1, s.length() - 2);
        return isPalindrome(middle);
    }
}

int main(){
    string s;
    cout<<"Enter the word : ";
    cin>>s;

    int ans = isPalindrome(s);
    cout<< (ans==1 ? "PALINDROME" : "NOT PALINDROME") <<endl;

    return 0;
}