#include <bits/stdc++.h>
using namespace std;

// length of Longest common substring  (LCS substring)
int solve(string &s1, string &s2, int i, int j, int count){
    if(i==s1.size() || j==s2.size()) return count;

    int same = count;
    if(s1[i]==s2[j]){
        same = solve(s1, s2, i+1, j+1, count+1);
    }

    int diff1 = solve(s1, s2, i+1, j, 0);
    int diff2 = solve(s1, s2, i, j+1, 0);
    same = max({same, diff1, diff2});

    return same;
}

int main(){
    string s1, s2;
    cout<<"String s1 : ";
    cin>>s1;
    cout<<"String s2 : ";
    cin>>s2;
    // longest common substring
    cout<<"Length of LCS : "<<solve(s1, s2, 0, 0, 0)<<endl;
    return 0;
}