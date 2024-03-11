#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    // vector<int>v;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

    // for(auto &i: v){
    //     cout<<i<<endl;
    // }

    // // vector<int> :: iterator  it;
    // auto it = v.begin();

    // for(; it != v.end(); it++){
    //     cout<<*it<<endl;
    // }

    map<int,int>m;
    m.insert({1,2});
    m.insert({3,4});
    m.insert({5,6});
    m.insert({7,8});

    // auto itr = m.begin();
    for(auto itr = m.begin(); itr != m.end(); itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
return 0;
}