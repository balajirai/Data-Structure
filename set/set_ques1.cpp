// Given N strings print unique strings in lexographical order
// N <= 10^5
// |s| <= 100000

// we have to print unique strings in sorted order (we donot have to print frequency)
// so set will be used here  (order is important)

#include <iostream>
#include <set>
using namespace std;
int main(){
    set<string>s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    for(auto &it:s){        // here "it" has data type of string (auto keyword will automatically detect its data type in set "s")
        cout<<it<<endl;
    }
    
return 0;
}