// An anagram of a string is another string that contains the same characters, only the order of characters can be different.
// For example, act and tac are an anagram of each other.

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b){
    multiset<char> s1;
    multiset<char> s2;

    if (a.size() != b.size()) return false;

    for (int i = 0; i < a.size(); i++){ 
        // if anagram then size will be same
        s1.insert(a[i]);
        s2.insert(b[i]);
    }

    if (s1 == s2) return true;
    else return false;
}

int main(){

    string s1,s2;
    cin>>s1>>s2;
    (isAnagram) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}