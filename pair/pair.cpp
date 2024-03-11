// pairs in stl

#include <bits/stdc++.h>
using namespace std;
int main(){

    pair<int, string>p;
    // initialization way 1
    p = make_pair(2,"second");

    // initialization way 2
    p = {2, "second"};

    // updating pair
    p = make_pair(9,"nine");
    p = {7,"seven"};
    
    cout<<"Original pair : "<<p.first<<" "<<p.second<<endl;

    // copying pairs by value
    pair<int, string>p1 = p;
    p1.first = 10;
    p1.second = "ten";

    // printing modified p
    cout<<"copy and update pairs by value     : "<<p.first<<" "<<p.second<<endl;

    // copying with referece
    pair<int, string> &p2 = p;
    p2.first = 100;
    p2.second = "hundred";
    
    // printing modified p
    cout<<"copy and update pairs by reference : "<<p.first<<" "<<p.second<<endl;


return 0;
}