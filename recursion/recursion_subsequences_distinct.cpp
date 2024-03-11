#include <bits/stdc++.h>
using namespace std;

// Number of distinct subsequences in s1 of s2
int solve(string &s, string &t, int i, int j){
    if(j < 0) return 1;
    if(i < 0) return 0;

    int ans = 0;
    if(s[i]==t[j]){
        int match = solve(s, t, i-1, j-1);
        int check = solve(s, t, i-1, j);
        ans = match + check;
    }
    else{
        int different = solve(s, t, i-1, j);
        ans = different;
    }
    return ans;
}

int main(){
    string s1, s2;
    cout<<"String s1 : ";
    cin>>s1;
    cout<<"String s2 : ";
    cin>>s2;
    int n = s1.size(), m = s2.size();
    cout<<"Distinct Subsequences : "<<solve(s1, s2, n-1, m-1)<<endl;
    return 0;
}

/*
Input: s = "rabbbit", t = "rabbit"
Output: 3
*/