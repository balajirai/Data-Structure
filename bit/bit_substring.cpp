// finding subsets of string using bit (set and unset)

#include <bits/stdc++.h>
using namespace std;

vector<string> SubSets(string s){
    int n = s.size();
    vector<string> ans;
    for(int mask=0; mask<n; mask++){
        string subset;
        for(int bit=0; bit<n; bit++){
            if(mask & (1<<bit)) subset.push_back(s[bit]);
        }
        ans.push_back(subset);
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    vector<string> all_sub = SubSets(s);
    for(auto s1 : all_sub){
        cout<<s1<<endl;
    }
return 0;
}