// set is an data structure which contains unique keys/elements only (we can say set contains only key of map)
// we can take set analogue as map (for key and time complexity : O(log(n)) )
// red black tree is used for sorting
// every function for set is same as that of map (.find(), .erase().....etc..)

// sorted ordered (order important)

#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);     // O(log(n))
    s.insert(2);
    s.insert(2);    // this will be ignored (only one "2" will be inserted)
    s.insert(3);
    s.insert(4);

    // printing set
    cout<<"Printing set : ";
    for(auto &val : s){
        cout<<val<<" ";
    }
    cout<<endl;

    auto i = s.find(3);         // O(log(n))

    if(i!=s.end())
        s.erase(i);

    // printing updated set
    cout<<"Printing updated set : ";
    for(auto &val : s){
        cout<<val<<" ";
    }
    cout<<endl;

return 0;
}