// Given N strings and q queries 
// for each query , you are given an string 
// print yes if string is present else print no

// N <= 10^6
// |s| <= 100
// q <= 10^6

// since we just have to search/find for the element , (order is not important) so undordered set will be used

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_set<string>s;
    for (int i = 0; i < n; i++){
        string str;         // local to this loop
        cin>>str;
        s.insert(str);      // inserted in set
    }
    int q;
    cin>>q;
    while (q--){
        string str;
        cin>>str;
        auto it = s.find(str);
        if(it==s.end())
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    

return 0;
}