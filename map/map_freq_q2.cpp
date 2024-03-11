// print strings with their frequency (ordered not important)
// N <= 10^6
// s <= 100
// q <= 10^6   queries

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string,int>mp;        // it will be more efficient than  ordered map (since order is not important)

    for (int i = 0; i < n; i++){
        string s;
        cin>>s;
        mp[s]++;
    }

    int q;
    cin>>q;
    while (q--){
        string s;
        cin>>s;
        cout<<mp[s]<<endl;
    }

return 0;
}