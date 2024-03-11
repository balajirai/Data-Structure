// Finding all non-empty substring of a string 

#include <bits/stdc++.h>
using namespace std;

void SubStrings(string s){
    int n = s.size();
    for(int i=0; i<n; i++){
        string subs;
        for(int j=i; j<n; j++){
            subs += s[j];
            cout<<subs<<endl;
        }
    }
}

int main(){
    string s;
    cin>>s;

    SubStrings(s);
return 0;
}