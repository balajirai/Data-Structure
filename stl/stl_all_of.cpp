// all_of :  returns bool for every element stisfying the given condition (if true then returns 1 else return 0)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{1,2,3,4,5,6,2,2,3,4,5};
    cout<<all_of(v.begin(),v.end(), [](int x){return x>0;})<<endl;
return 0;
}