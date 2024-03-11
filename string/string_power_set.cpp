// finding the power/super set of a given string including the null char

#include <bits/stdc++.h>
using namespace std;

vector<string>PowSet(string s){
    vector<string>ans;
    int n = s.size();
    int ct = 0;
    for(int i=0; i<(1<<n); i++){
        string s1;
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                s1 += s[j];
            }
        }
        // for non-empty sets use if condition as if(s1 != "") ans.push_back(s1)
        ans.push_back(s1);
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    vector<string>res = PowSet(s);
    for(auto str : res){
        cout<<str<<endl;
    }

return 0;
}