#include <bits/stdc++.h>
using namespace std;

// Longest common subsequence  (LCS)
string solve(string &s1, string &s2, int i, int j){
    if(i==s1.size() || j==s2.size()) return "";
    
    string ans;
    if(s1[i]==s2[j]){
        ans = s1[i] + solve(s1, s2, i+1, j+1);
    }
    else{
        string case1 = solve(s1, s2, i+1, j);
        string case2 = solve(s1, s2, i, j+1);
        ans = case1.size() > case2.size() ? case1 : case2;
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