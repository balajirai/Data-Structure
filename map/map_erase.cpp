// erase function will erase the given pair  
// it is access using either key or iterator of that key 

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

    // .erase() passing key
    m.erase(3);
    cout<<"Updated map is using erase(key): "<<endl;
    for(auto i:m)
        cout<<i.first<<" -> "<<i.second<<endl;

    // .erase() passing iterator
    auto it = m.find(2);

    if(it!=m.end())     // this check will work when .find() function return .end() then erase(m.end()) will cause segmentation fault because we are trying to access undefined memory location and then trying to erase its data
        m.erase(it);

    cout<<"Updated map is using erase(iterator): "<<endl;
    for(auto i:m)
        cout<<i.first<<" -> "<<i.second<<endl;

return 0;
}