#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s){
    int i=0, j = s.size()-1;
    while(i<=j){
        if(s[i++] != s[j--]) return false;
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter the word : ";
    cin>>s;

    int ans = isPalindrome(s);
    cout<< (ans==1 ? "PALINDROME" : "NOT PALINDROME") <<endl;

    return 0;
}