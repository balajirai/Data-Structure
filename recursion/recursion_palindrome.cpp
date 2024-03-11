// check if the string is a palindrome
#include <bits/stdc++.h>
using namespace std;

bool isPanlindrome(int i, int j, string s){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return isPanlindrome(i+1,j-1,s);
}

int main(){
    string s = "bob";
    isPanlindrome(0, s.size()-1, s) ? cout<<"PALINDROME" : cout<<"NOT PALINDROME";
return 0;
}