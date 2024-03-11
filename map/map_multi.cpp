// multimap can store multiple same key and pair 
// every key and pair is stored seperately

#include <bits/stdc++.h>
using namespace std;
int main(){
    multimap<int,string>mlp;
    mlp.insert({1,"one"});
    mlp.insert({1,"two"});
    mlp.insert({1,"one"});

    for(auto i:mlp)
        cout<<i.first<<" "<<i.second<<endl;

return 0;
}