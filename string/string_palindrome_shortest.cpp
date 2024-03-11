#include <bits/stdc++.h>
using namespace std;

// generate shortest palindrome
string findShortestPalindrome(string &str){
    int n = str.size(); string rev = str;
    reverse(rev.begin(), rev.end());

    for(int i=0; i<n; i++){
        if(rev.substr(i) == str.substr(0, n-i)){
            return rev.substr(0, i) + str;
        }
    }
    return str;
}

int main(){
    string s;
    cout<<"Enter the string    : ";
    cin>>s;
    string ans = findShortestPalindrome(s);
    cout<<"Shortest Palindrome : "<< ans <<endl;

    return 0;
}