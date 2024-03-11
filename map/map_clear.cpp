// .clear() will clear the whole map

#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[1] = "one";       // here 1 is key not index and one is the value of that key
    m[2] = "two"; 
    m[3] = "three"; 
    m[4] = "four";

    for(auto i:m)
        cout<<i.first<<" -> "<<i.second<<endl;

    m.clear();
    cout<<"After clearing map, size is : "<<m.size()<<endl;
    cout<<"And elements are : ";
    for(auto i:m)
        cout<<i.first<<" -> "<<i.second<<endl;

return 0;
}