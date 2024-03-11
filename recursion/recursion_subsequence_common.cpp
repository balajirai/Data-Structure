#include <bits/stdc++.h>
using namespace std;

// length of Longest common subsequence  (LCS)
int solve(string &s1, string &s2, int i, int j){
    if(i==s1.size() || j==s2.size()) return 0;
    
    int ans = 0;
    if(s1[i]==s2[j]){
        ans = 1 + solve(s1, s2, i+1, j+1);
    }
    else{
        int case1 = solve(s1, s2, i+1, j);
        int case2 = solve(s1, s2, i, j+1);
        ans = max(case1, case2);
    }
    return ans;
}

int main(){
    string s1, s2;
    cout<<"String s1 : ";
    cin>>s1;
    cout<<"String s2 : ";
    cin>>s2;
    cout<<"Length of LCS : "<<solve(s1, s2, 0, 0)<<endl;
    return 0;
}