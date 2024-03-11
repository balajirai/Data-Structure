// print strings in lexiographical order with their frequency
// N <= 10^5
// s <= 100

#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>mp;

    for (int i = 0; i < n; i++){
        string s;
        cin>>s;
        mp[s]++;
    }
    for(auto i : mp)
        cout<<i.first<<" "<<i.second<<endl;
    

return 0;
}